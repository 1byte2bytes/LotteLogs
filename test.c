#include "LotteLogs.h"

void main(void) {
    llog_trace("Test message!");
    llog_debug("Test message!");
    llog_info("Test message!");
    llog_warn("Test message!");
    llog_error("Test message!");
    llog_fatal("Test message!");
}