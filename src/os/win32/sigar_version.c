#include "sigar.h"

static sigar_version_t sigar_version = {
    "05/12/2016 02:28 PM",
    "${jni.scmrev}",
    "1.7.0.0",
    "${jni.libarch}",
    "${jni.libname.full}",
    "${jni.project.archname}",
    "SIGAR-1.7.0.0, "
    "SCM revision ${jni.scmrev}, "
    "built 05/12/2016 02:28 PM as ${jni.libname.full}",
    1,
    7,
    0,
    0
};

SIGAR_DECLARE(sigar_version_t *) sigar_version_get(void)
{
    return &sigar_version;
}
