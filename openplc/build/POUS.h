#include "beremiz.h"
#ifndef __POUS_H
#define __POUS_H

#include "accessor.h"
#include "iec_std_lib.h"

__DECLARE_ENUMERATED_TYPE(LOGLEVEL,
  LOGLEVEL__CRITICAL,
  LOGLEVEL__WARNING,
  LOGLEVEL__INFO,
  LOGLEVEL__DEBUG
)
// FUNCTION_BLOCK LOGGER
// Data part
typedef struct {
  // FB Interface - IN, OUT, IN_OUT variables
  __DECLARE_VAR(BOOL,EN)
  __DECLARE_VAR(BOOL,ENO)
  __DECLARE_VAR(BOOL,TRIG)
  __DECLARE_VAR(STRING,MSG)
  __DECLARE_VAR(LOGLEVEL,LEVEL)

  // FB private variables - TEMP, private and located variables
  __DECLARE_VAR(BOOL,TRIG0)

} LOGGER;

void LOGGER_init__(LOGGER *data__, BOOL retain);
// Code part
void LOGGER_body__(LOGGER *data__);
// PROGRAM WORKSHOP_4
// Data part
typedef struct {
  // PROGRAM Interface - IN, OUT, IN_OUT variables

  // PROGRAM private variables - TEMP, private and located variables
  __DECLARE_LOCATED(BOOL,B1)
  __DECLARE_LOCATED(BOOL,B2)
  __DECLARE_LOCATED(BOOL,B3)
  __DECLARE_LOCATED(BOOL,H1)
  __DECLARE_LOCATED(BOOL,H2)
  __DECLARE_LOCATED(BOOL,H3)
  __DECLARE_LOCATED(BOOL,H4)
  __DECLARE_LOCATED(BOOL,H5)

} WORKSHOP_4;

void WORKSHOP_4_init__(WORKSHOP_4 *data__, BOOL retain);
// Code part
void WORKSHOP_4_body__(WORKSHOP_4 *data__);
#endif //__POUS_H
