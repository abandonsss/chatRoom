#include "MyReactor.h"


#include "spdlog/sinks/daily_file_sink.h"
#include "spdlog/sinks/basic_file_sink.h"
auto main_logger = spdlog::stdout_color_mt("main_logger");


MyReactor g_reactor;


void prog_exit(int signo)
{
    main_logger->info("program recv signal {} to exit.", signo);
    g_reactor.uninit();//关闭服务器
}

int main(int argc, char* argv[])
{
    //设置信号处理
    signal(SIGCHLD, SIG_DFL);
    signal(SIGPIPE, SIG_IGN);
    signal(SIGINT, prog_exit);
    signal(SIGKILL, prog_exit);
    signal(SIGTERM, prog_exit);

    short port = 12345;

    if (!g_reactor.init("0.0.0.0", 12345))
        return -1;


    g_reactor.main_loop(&g_reactor);

    main_logger->info("main exit");

    return 0;
}


