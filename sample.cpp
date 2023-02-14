#include <string>
#define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_DEBUG
#include "spdlog/spdlog.h"

int main () {
    // set log format
    // => https://github.com/gabime/spdlog/wiki/3.-Custom-formatting
    spdlog::set_pattern("%Y-%m-%d %H:%M:%S.%e %-15@ [%-8l] %v");

    // set log level (define SPDLOG_ACTIVE_LEVEL と両方必要)
    spdlog::set_level(spdlog::level::debug);
    int n = 1;
    std::string s = "hoge";
    SPDLOG_ERROR("error log のテスト");
    SPDLOG_WARN("warn log のテスト");
    SPDLOG_INFO("info log のテスト {} {}", n, s.c_str());
    SPDLOG_DEBUG("debug log のテスト"); // default 設定だと出ない
}

