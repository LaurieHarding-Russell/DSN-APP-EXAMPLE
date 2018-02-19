GTK_OPTS = ["-I/usr/include/gtkmm-3.0", "-I/usr/include/atkmm-1.6", "-I/usr/include/gtk-3.0/unix-print", "-I/usr/include/gdkmm-3.0", "-I/usr/include/giomm-2.4", "-I/usr/include/pangomm-1.4","-I/usr/include/glibmm-2.4", "-I/usr/include/gtk-3.0", "-I/usr/include/at-spi2-atk/2.0", "-I/usr/include/at-spi-2.0", "-I/usr/include/dbus-1.0", "-I/usr/include/gtk-3.0", "-I/usr/include/gio-unix-2.0/", "-I/usr/include/cairo", "-I/usr/include/pango-1.0", "-I/usr/include/harfbuzz", "-I/usr/include/pango-1.0", "-I/usr/include/atk-1.0", "-I/usr/include/cairo", "-I/usr/include/cairomm-1.0", "-I/usr/include/cairo", "-I/usr/include/pixman-1", "-I/usr/include/freetype2", "-I/usr/include/libpng16", "-I/usr/include/sigc++-2.0", "-I/usr/include/gdk-pixbuf-2.0", "-I/usr/include/libpng16", "-I/usr/include/glib-2.0"]

GTK_LINK = ["-lgtkmm-3.0", "-latkmm-1.6", "-lgdkmm-3.0", "-lgiomm-2.4", "-lpangomm-1.4", "-lglibmm-2.4", "-lgtk-3", "-lgdk-3", "-lpangocairo-1.0", "-lpango-1.0", "-latk-1.0", "-lcairo-gobject", "-lgio-2.0", "-lcairomm-1.0", "-lcairo", "-lsigc-2.0", "-lgdk_pixbuf-2.0", "-lgobject-2.0", "-lglib-2.0", "-static", "-lpthread"]

CFLAGS = ["-g", "-std=c++11", "-lpthread"]

cc_library(
    name = "mainWindow",
    srcs = ["mainWindow.cpp"],
    hdrs = ["mainWindow.h"],
    copts = CFLAGS + GTK_OPTS + GTK_LINK,
    deps = [
        "@DSN_LIB//:Chat",
        "@DSN_LIB//:ChatServer",
        "@gtkmm_system_libs//:gtkmm",
        "@gtkmm_system_libs//:gdkmm",
        "@gtkmm_system_libs//:giomm",
        "@gtkmm_system_libs//:pangomm",
        "@gtkmm_system_libs//:glibmm",
        "@gtkmm_system_libs//:dbus",
        "@gtkmm_system_libs//:cairomm",
        "@gtkmm_system_libs//:sigc",
        "@gtkmm_system_libs//:glib"
    ]
)

cc_library(
    name = "connectWindow",
    srcs = ["connectWindow.cpp"],
    hdrs = ["connectWindow.h"],
    copts = CFLAGS + GTK_OPTS + GTK_LINK,
    deps = [
        "@DSN_LIB//:Chat",
        "@DSN_LIB//:ChatServer",
        "@gtkmm_system_libs//:gtkmm",
        "@gtkmm_system_libs//:gdkmm",
        "@gtkmm_system_libs//:giomm",
        "@gtkmm_system_libs//:pangomm",
        "@gtkmm_system_libs//:glibmm",
        "@gtkmm_system_libs//:dbus",
        "@gtkmm_system_libs//:cairomm",
        "@gtkmm_system_libs//:sigc",
        "@gtkmm_system_libs//:glib"
    ],
)

cc_binary(
    name = "DSN",
    srcs = ["dSN.cpp"],
    copts = CFLAGS + GTK_OPTS + GTK_LINK,
    deps = [
        ":mainWindow",
        ":connectWindow",
        "@DSN_LIB//:Chat",
        "@DSN_LIB//:ChatServer",
        "@gtkmm_system_libs//:gtkmm",
        "@gtkmm_system_libs//:gdkmm",
        "@gtkmm_system_libs//:giomm",
        "@gtkmm_system_libs//:pangomm",
        "@gtkmm_system_libs//:glibmm",
        "@gtkmm_system_libs//:dbus",
        "@gtkmm_system_libs//:cairomm",
        "@gtkmm_system_libs//:sigc",
        "@gtkmm_system_libs//:glib"
    ],
)
