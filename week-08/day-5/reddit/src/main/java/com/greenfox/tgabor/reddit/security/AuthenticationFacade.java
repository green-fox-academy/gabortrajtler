package com.greenfox.tgabor.reddit.security;

import org.springframework.security.core.Authentication;

/*
https://www.baeldung.com/get-user-in-spring-security
*/

public interface AuthenticationFacade {
  Authentication getAuthentication();
}
