#if !defined(XRDP_OSIRIUM_H)
#define XRDP_OSIRIUM_H

#include "arch.h"

/* returns error */
int
read_preamble_packet(struct xrdp_process* self);

int
process_preamble_packet(struct xrdp_wm *self);

#endif
