package com.greenfox.tgabor.restdemo;

import com.greenfox.tgabor.restdemo.controllers.DoUntilController;
import com.greenfox.tgabor.restdemo.controllers.GreeterController;
import com.greenfox.tgabor.restdemo.models.Greeter;
import com.greenfox.tgabor.restdemo.services.ArrayService;
import com.greenfox.tgabor.restdemo.services.DoUntilService;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.boot.test.autoconfigure.web.servlet.WebMvcTest;
import org.springframework.boot.test.mock.mockito.MockBean;
import org.springframework.context.annotation.Configuration;
import org.springframework.context.annotation.Import;
import org.springframework.http.MediaType;
import org.springframework.test.context.junit4.SpringRunner;
import org.springframework.test.web.servlet.MockMvc;

import java.nio.charset.StandardCharsets;

import static org.hamcrest.core.Is.is;
import static org.mockito.BDDMockito.given;
import static org.springframework.test.web.servlet.request.MockMvcRequestBuilders.*;
import static org.springframework.test.web.servlet.result.MockMvcResultMatchers.*;

@RunWith(SpringRunner.class)
@WebMvcTest  // @WebMvcTest(GreeterController.class) -  if you wan't to test only selected contoller. Other @Tests will give 404.
public class RestdemoApplicationTests {

  private MediaType contentType = new MediaType(MediaType.APPLICATION_JSON.getType(),
          MediaType.APPLICATION_JSON.getSubtype(),
          StandardCharsets.UTF_8);

  @Autowired
  private MockMvc mockMvc;

  // if an additional service layer is used
  // - meaning not all logic is added to the controller and you have Autowired fields in it -
  // then you have to mock out the service class like below
  //
  //@MockBean
  //private UserService userService;

  @Test
  public void greeter_succesfull() throws Exception {
    mockMvc.perform(get("/greeter")
            .param("name", "Gabor")
            .param("title", "student")
    ).andExpect(status().isOk())
            .andExpect(content().contentType(contentType))
            .andExpect(jsonPath("$.welcome_message", is("Oh, hi there Gabor, my dear student!")));
  }

  @Test
  public void greeter_titleMissing() throws Exception {
    mockMvc.perform(get("/greeter")
            .param("name", "Gabor")
    ).andExpect(status().isOk())
            .andExpect(content().contentType(contentType))
            .andExpect(jsonPath("$.error", is("Please provide a title!")));
  }

  @MockBean
  DoUntilService doUntilService;  // somehow cannot count, must set result with given()
  @MockBean
  ArrayService arrayService;

  @Test
  public void dountil_successfull() throws Exception {
    given(this.doUntilService.sum(5)).willReturn(15);
    mockMvc.perform(post("/dountil/sum")
            .contentType(MediaType.APPLICATION_JSON)
            .content("{\"until\": \"5\"}")
    ).andExpect(status().isOk())
            .andExpect(content().contentType(contentType))
            .andExpect(jsonPath("$.until", is(5)))
            .andExpect(jsonPath("$.result", is(15)));
  }
}
