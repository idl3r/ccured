/* Generated by CIL v. 1.3.5 */
/* print_CIL_Input is false */

#define CCURED_SPLIT_ARGUMENTS
// #define CCURED_ALLOW_PARTIAL_ELEMENTS_IN_SEQUENCE
// #define CCURED_LOG_NON_POINTERS
#define CCURED_USE_STRINGS
// #define CCURED_FAIL_IS_TERSE
// #define CCURED_ALWAYS_STOP_ON_ERROR
// Include the definition of the checkers
#define CCURED
#define CCURED_POST
#include "ccuredcheck.h"
struct printf_arguments {
   int i ;
   double d ;
   char * __ROSTRING  s ;
   long long ll ;
};
extern void __ccuredInit(void) ;
extern  __attribute__((__noreturn__)) void abort_deepcopy(char *errmsg ) ;
struct meta_wildp_void {
   void *_b ;
}   ;
struct wildp_void {
   void * __WILD  _p ;
   struct meta_wildp_void _ms ;
}   ;
typedef struct wildp_void wildp_void;
struct __argumentStructure1 {
   wildp_void __res ;
   struct wildp_void anint ;
   struct wildp_void aptr ;
};
struct meta_wildp_int {
   void *_b ;
}   ;
struct meta_wildp_s___argumentStructure1 {
   void *_b ;
}   ;
struct __functionDescriptor taggedfun__descriptor ;
void taggedfun_t(void * __WILD  __thePArgs , void *__thePArgs_b )  __TAGGED  ;
void taggedfun_t(void * __WILD  __thePArgs , void *__thePArgs_b ) 
{ int volatile   ___first_local ;
  int anint ;
  int * __WILD  aptr ;
  struct __argumentStructure1 * __WILD  __pArgs ;
  struct __argumentStructure1 * __WILD  __cil_tmp5 ;
  unsigned int _tlen6 ;
  unsigned int _tlen7 ;
  int * __WILD  __cil_tmp8 ;
  unsigned int _tlen9 ;
  void * __WILD  __cil_tmp10 ;
  unsigned int _tlen11 ;
  void *aptr_b20 ;
  void *__pArgs_b21 ;
  void *__cil_tmp5_b22 ;
  void *__cil_tmp8_b23 ;
  void *__cil_tmp10_b24 ;

  {
  __pArgs_b21 = (void *)0;
  aptr_b20 = (void *)0;
  __cil_tmp5 = (struct __argumentStructure1 */* __WILD  */)__thePArgs;
  __cil_tmp5_b22 = __thePArgs_b;
  __pArgs_b21 = __cil_tmp5_b22;
  __pArgs = __cil_tmp5;
  _tlen6 = CHECK_FETCHLENGTH((void *)(& __pArgs->anint), __pArgs_b21, 0);
  CHECK_BOUNDS_LEN(__pArgs_b21, _tlen6, (void *)(& __pArgs->anint), sizeof(struct wildp_void ),
                   sizeof(struct wildp_void ));
  CHECK_WILDPOINTERREAD(__pArgs_b21, _tlen6, (void *)(& __pArgs->anint));
  anint = (int )__pArgs->anint._p;
  _tlen7 = _tlen6;
  CHECK_BOUNDS_LEN(__pArgs_b21, _tlen7, (void *)(& __pArgs->aptr), sizeof(struct wildp_void ),
                   sizeof(struct wildp_void ));
  CHECK_WILDPOINTERREAD(__pArgs_b21, _tlen7, (void *)(& __pArgs->aptr));
  __cil_tmp8 = (int */* __WILD  */)__pArgs->aptr._p;
  __cil_tmp8_b23 = __pArgs->aptr._ms._b;
  aptr_b20 = __cil_tmp8_b23;
  aptr = __cil_tmp8;
  {
  _tlen9 = CHECK_FETCHLENGTH((void *)aptr, aptr_b20, 0);
  CHECK_BOUNDS_LEN(aptr_b20, _tlen9, (void *)aptr, sizeof(int ), sizeof(int ));
  __cil_tmp10 = (void */* __WILD  */)(anint + *aptr);
  __cil_tmp10_b24 = (void *)0;
  _tlen11 = _tlen6;
  CHECK_BOUNDS_LEN(__pArgs_b21, _tlen11, (void *)(& __pArgs->__res), sizeof(wildp_void ),
                   sizeof(wildp_void ));
  CHECK_WILDPOINTERWRITE(__pArgs_b21, _tlen11, (void *)(& __pArgs->__res), __cil_tmp10_b24,
                         (void *)__cil_tmp10, (void *)(& ___first_local));
  __pArgs->__res._ms._b = __cil_tmp10_b24;
  __pArgs->__res._p = __cil_tmp10;
  goto return_label;
  }

  return_label: /* CIL Label */ 
  return;
}
}
struct __argumentStructure2 {
   struct wildp_void __res ;
   struct wildp_void fld1 ;
   struct wildp_void fld2 ;
};
struct _tagged_s___argumentStructure2 {
   unsigned int _len ;
   struct __argumentStructure2 _data  __attribute__((__packed__)) ;
   int _tags[(sizeof(struct __argumentStructure2 ) + 127U) >> 7]  __attribute__((__packed__)) ;
};
typedef struct _tagged_s___argumentStructure2 _tagged_s___argumentStructure2;
int main(void) ;
int main(void) 
{ int volatile   ___first_local ;
  int * __WILD  i ;
  _tagged_s___argumentStructure2 __theActualArgs2  __TAGGED  ;
  int __retres ;
  unsigned int iter4 ;
  int * __WILD  __cil_tmp5 ;
  void * __WILD  __cil_tmp6 ;
  unsigned int _tlen7 ;
  void * __WILD  __cil_tmp9 ;
  unsigned int _tlen10 ;
  void * __WILD  __cil_tmp11 ;
  void *i_b17 ;
  void *__cil_tmp5_b18 ;
  void *__cil_tmp6_b19 ;
  void *__cil_tmp9_b20 ;
  void *__cil_tmp11_b21 ;

  {
  __theActualArgs2._len = (sizeof(struct __argumentStructure2 ) + 3U) >> 2;
  iter4 = 0;
  while (iter4 < (int )((sizeof(struct __argumentStructure2 ) + 127U) >> 7)) {
    __theActualArgs2._tags[iter4] = 0;
    iter4 ++;
  }
  i_b17 = (void *)0;
  __ccuredAlwaysStopOnError = 0;
  __ccuredUseStrings = 1;
  __ccuredLogNonPointers = 0;
  __ccuredInit();
  __cil_tmp5 = (int */* __WILD  */)(& taggedfun_t);
  __cil_tmp5_b18 = & taggedfun__descriptor._pfun;
  i_b17 = __cil_tmp5_b18;
  i = __cil_tmp5;
  __cil_tmp6 = (void */* __WILD  */)5;
  __cil_tmp6_b19 = (void *)0;
  _tlen7 = CHECK_FETCHLENGTH((void *)(& __theActualArgs2._data.fld1), (void *)(& __theActualArgs2._data),
                             0);
  CHECK_BOUNDS_LEN((void *)(& __theActualArgs2._data), _tlen7, (void *)(& __theActualArgs2._data.fld1),
                   sizeof(struct wildp_void ), sizeof(struct wildp_void ));
  CHECK_WILDPOINTERWRITE((void *)(& __theActualArgs2._data), _tlen7, (void *)(& __theActualArgs2._data.fld1),
                         __cil_tmp6_b19, (void *)__cil_tmp6, (void *)(& ___first_local));
  __theActualArgs2._data.fld1._ms._b = __cil_tmp6_b19;
  __theActualArgs2._data.fld1._p = __cil_tmp6;
  __cil_tmp9 = (void */* __WILD  */)i;
  __cil_tmp9_b20 = i_b17;
  _tlen10 = _tlen7;
  CHECK_BOUNDS_LEN((void *)(& __theActualArgs2._data), _tlen10, (void *)(& __theActualArgs2._data.fld2),
                   sizeof(struct wildp_void ), sizeof(struct wildp_void ));
  CHECK_WILDPOINTERWRITE((void *)(& __theActualArgs2._data), _tlen10, (void *)(& __theActualArgs2._data.fld2),
                         __cil_tmp9_b20, (void *)__cil_tmp9, (void *)(& ___first_local));
  __theActualArgs2._data.fld2._ms._b = __cil_tmp9_b20;
  __theActualArgs2._data.fld2._p = __cil_tmp9;
  CHECK_FUNCTIONPOINTER((void *)((void (*/* __WILD  */)(void * __WILD   , void * ))i),
                        i_b17, 1);
  __cil_tmp11 = (void */* __WILD  */)(& __theActualArgs2._data);
  __cil_tmp11_b21 = & __theActualArgs2._data;
  (*((void (*/* __WILD  */)(void * __WILD   , void * ))i))(__cil_tmp11, __cil_tmp11_b21);
  __retres = 0;
  return (__retres);
}
}
struct __functionDescriptor taggedfun__descriptor  =    {0, (void (*)())(& taggedfun_t), 1};