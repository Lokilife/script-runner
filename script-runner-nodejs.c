#include "script-runner.h"

static const TCHAR* extensions[] = {
    _T(".js"),
    _T(""),
    NULL
};

static const TCHAR* runners[] = {
    _T("node.exe"),
    NULL
};

const script_config config = { extensions, runners };
