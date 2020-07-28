package com.isi.web.util;

import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServletRequest;

public class CookieManagement {

	public CookieManagement() {
		// TODO Auto-generated constructor stub
	}

	public static Cookie getCookie(HttpServletRequest req, String name) {
		Cookie[] cookies = req.getCookies();
		if (cookies == null)
			return null;
		for (Cookie c : cookies) {
			if (c.getValue().equals(name))
				return c;
		}
		return null;
	}

}
