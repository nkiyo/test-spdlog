#include <string>
#include "spdlog/spdlog.h"

int main () {
    spdlog::set_level(spdlog::level::debug);
    int n = 1;
    std::string s = "hoge";
    spdlog::error("error log のテスト");
    spdlog::warn("warn log のテスト");
    spdlog::info("info log のテスト {} {}", n, s.c_str());
    spdlog::debug("debug log のテスト"); // default 設定だと出ない
}

