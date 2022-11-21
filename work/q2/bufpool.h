https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
// bufpool.h ... buffer pool interface

typedef struct bufPool *BufPool;

BufPool initBufPool(int);
int     request_page(BufPool, char, int);
void    release_page(BufPool, char, int);
void    showPoolUsage(BufPool);
void    showPoolState(BufPool);
