package com.greenfox.tgabor.foxclub.controllers;

import org.springframework.http.HttpStatus;
import org.springframework.web.bind.annotation.ResponseStatus;

@ResponseStatus(value = HttpStatus.NOT_FOUND)
public class FoxNotFoundException extends RuntimeException {
  public FoxNotFoundException() {
    super();
  }

  public FoxNotFoundException(String message, Throwable cause) {
    super(message, cause);
  }

  public FoxNotFoundException(String message) {
    super(message);
  }

  public FoxNotFoundException(Throwable cause) {
    super(cause);
  }
}
