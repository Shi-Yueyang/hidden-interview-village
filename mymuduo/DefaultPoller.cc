#include"Poller.h"
#include"EPollPooller.h"
#include<stdlib.h>

Poller* Poller::NewDefaultPoller(EventLoop* loop)
{
    if(::getenv("MUDUO_USE_POLL"))
    {
        return nullptr;
    }
    else
    {
        return new EPollPoller(loop);
    }
}