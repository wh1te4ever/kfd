#import <Foundation/Foundation.h>

void setJetsamEnabled(bool enabled);

typedef enum {
    JBD_MSG_KRW_READY = 1,
    JBD_MSG_KERNINFO = 2,
    JBD_MSG_KREAD32 = 3,
    JBD_MSG_KREAD64 = 4,
    JBD_MSG_KWRITE32 = 5,
    JBD_MSG_KWRITE64 = 6,
    JBD_MSG_KALLOC = 7,
    JBD_MSG_KFREE = 8,
    JBD_MSG_KCALL = 9,

    JBD_MSG_REBUILD_TRUSTCACHE = 10,
    JBD_MSG_PROCESS_BINARY = 11,
    JBD_MSG_INIT_ENVIRONMENT = 12,
    JBD_MSG_SETUID_FIX = 13,
    JBD_MSG_PROC_SET_DEBUGGED = 14,
	JBD_MSG_DEBUG_ME = 15,
    JBD_MSG_PLATFORMIZE = 16,
    
} JBD_MESSAGE_ID;