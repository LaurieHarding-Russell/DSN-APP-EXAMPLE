git_repository(
    name = "DSN_LIB",
    commit = "64a4365820b1b4008cc0a1e7af24feb5b64b8166",
    remote = "https://github.com/LaurieHarding-Russell/Decentralized-Social-Network.git",
)

new_local_repository(
    name = "gtkmm_system_libs",
    # pkg-config gtkmm-3.0
    path = "/usr/lib/x86_64-linux-gnu/",
    build_file_content = """
cc_library(
    name = "gtkmm",
    hdrs = glob(["gtkmm-3.0/include/*.h"]),
    visibility = ["//visibility:public"],
)
cc_library(
    name = "gdkmm",
    hdrs = glob(["gdkmm-3.0/include/*.h"]),
    visibility = ["//visibility:public"],
)
cc_library(
    name = "giomm",
    hdrs = glob(["giomm-2.4/include/*.h"]),
    visibility = ["//visibility:public"],
)
cc_library(
    name = "pangomm",
    hdrs = glob(["pangomm-1.4/include/*.h"]),
    visibility = ["//visibility:public"],
)
cc_library(
    name = "glibmm",
    hdrs = glob(["glibmm-2.4/include/glibmmconfig.h"]),
    visibility = ["//visibility:public"],
)
cc_library(
    name = "dbus",
    hdrs = glob(["dbus-1.0/include/*.h"]),
    visibility = ["//visibility:public"],
)
cc_library(
    name = "cairomm",
    hdrs = glob(["cairomm-1.0/include/*.h"]),
    visibility = ["//visibility:public"],
)
cc_library(
    name = "sigc",
    hdrs = glob(["sigc-1.0/include/*.h"]),
    visibility = ["//visibility:public"],
)
cc_library(
    name = "glib",
    hdrs = glob(["glib-2.0/include/*.h"]),
    visibility = ["//visibility:public"],
)
""",
)
