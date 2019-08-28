package com.greenfox.tgabor.reddit.model.security;

import org.springframework.context.annotation.Bean;
import org.springframework.context.annotation.Configuration;
import org.springframework.security.config.annotation.authentication.builders.AuthenticationManagerBuilder;
import org.springframework.security.config.annotation.web.builders.HttpSecurity;
import org.springframework.security.config.annotation.web.configuration.EnableWebSecurity;
import org.springframework.security.config.annotation.web.configuration.WebSecurityConfigurerAdapter;
import org.springframework.security.core.userdetails.User;
import org.springframework.security.core.userdetails.UserDetails;
import org.springframework.security.core.userdetails.UserDetailsService;
import org.springframework.security.crypto.bcrypt.BCryptPasswordEncoder;
import org.springframework.security.crypto.password.PasswordEncoder;
import org.springframework.security.provisioning.InMemoryUserDetailsManager;

@Configuration
@EnableWebSecurity
public class WebSecurityConfig extends WebSecurityConfigurerAdapter {
  @Override
  protected void configure(HttpSecurity http) throws Exception {
    http
            .authorizeRequests()
            .antMatchers("/").permitAll()
            .antMatchers("/pub/**").permitAll()
            .antMatchers("/css/**").permitAll()
            //.antMatchers("/admin/**").hasRole("ADMIN")   // admin things if needed
            .antMatchers("/user*").hasRole("USER")
            .anyRequest().authenticated()
            .and()
            .formLogin()
            //.loginPage("/login")  // create custom Login page
            .permitAll()
            .and()
            .logout()
            .permitAll();
  }

  @Override
  protected void configure(final AuthenticationManagerBuilder auth) throws Exception {
    auth.inMemoryAuthentication()
            .withUser("user1").password(passwordEncoder().encode("user1Pass")).roles("USER")
            .and()
            .withUser("user2").password(passwordEncoder().encode("user2Pass")).roles("USER")
            .and()
            .withUser("admin").password(passwordEncoder().encode("adminPass")).roles("ADMIN");
  }

  @Bean
  public PasswordEncoder passwordEncoder() {
    return new BCryptPasswordEncoder();
  }
}
