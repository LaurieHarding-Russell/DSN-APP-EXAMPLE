cc_library(
    name = "mainWindow",
    srcs = ["mainWindow.cpp"],
    hdrs = ["mainWindow.h"],
    copts = ["`pkg-config gtkmm-3.0 --cflags --libs`", "-Wl", "-static"]
)

cc_library(
    name = "connectWindow",
    srcs = ["connectWindow.cpp"],
    hdrs = ["connectWindow.h"],
    copts = ["-g", "-std=c++11", "-lpthread", "`pkg-config gtkmm-3.0 --cflags --libs`", "-Wl", "-static"]
)

cc_import(
  name = "libgtk",
  hdrs = ["gtkmm.h", "gtkmm/window.h"],
  shared_library = "libgtkmm-3.0.so",
)

cc_binary(
    name = "DSN",
    srcs = ["dSN.cpp"],
    deps = [
        ":mainWindow",
        ":connectWindow",
        "@DSN_LIB//:Chat",
        "@DSN_LIB//:ChatServer"
    ],
)
