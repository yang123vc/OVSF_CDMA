#ifndef DEBUG_H_
#define DEBUG_H_

#ifdef DEBUG
#define dout(x...) cout << x
#else
#define dout(...)
#endif

#endif /* DEBUG_H_ */