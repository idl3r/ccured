/* Generated by CIL v. 1.3.5 */
/* print_CIL_Input is false */

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
struct meta_wildp_int {
   void *_b ;
}   ;
struct wildp_int {
   int * __WILD  _p ;
   struct meta_wildp_int _ms ;
}   ;
typedef struct wildp_int wildp_int;
struct s {
   int i ;
   wildp_int q ;
};
extern void __ccuredInit(void) ;
extern  __attribute__((__noreturn__)) void abort_deepcopy(char *errmsg ) ;
struct _tagged_s_s {
   unsigned int _len ;
   struct s _data  __attribute__((__packed__)) ;
   int _tags[(sizeof(struct s ) + 127U) >> 7]  __attribute__((__packed__)) ;
};
typedef struct _tagged_s_s _tagged_s_s;
_tagged_s_s g_t  __TAGGED   =    {(sizeof(struct s ) + 3U) >> 2};
struct meta_wildp_s_s {
   void *_b ;
}   ;
struct wildp_s_s {
   struct s * __WILD  _p ;
   struct meta_wildp_s_s _ms ;
}   ;
typedef struct wildp_s_s wildp_s_s;
wildp_s_s pg_w  =    {(struct s */* __WILD  */)(& g_t._data), {& g_t._data}};
int foo_w(struct wildp_s_s x ) ;
int foo_w(struct wildp_s_s x ) 
{ int volatile   ___first_local ;
  int read ;
  struct wildp_int ptr ;
  int __retres ;
  unsigned int _tlen5 ;
  unsigned int _tlen6 ;
  struct wildp_int __cil_tmp7 ;
  unsigned int _tlen8 ;
  wildp_int __cil_tmp9 ;
  unsigned int _tlen10 ;
  unsigned int _tlen12 ;
  unsigned int _tlen13 ;

  {
  ptr._ms._b = (void *)0;
  _tlen5 = CHECK_FETCHLENGTH((void *)(& (x._p)->i), x._ms._b, 0);
  CHECK_BOUNDS_LEN(x._ms._b, _tlen5, (void *)(& (x._p)->i), sizeof(int ), sizeof(int ));
  read = (x._p)->i;
  _tlen6 = _tlen5;
  CHECK_BOUNDS_LEN(x._ms._b, _tlen6, (void *)(& (x._p)->q), sizeof(wildp_int ), sizeof(wildp_int ));
  CHECK_WILDPOINTERREAD(x._ms._b, _tlen6, (void *)(& (x._p)->q));
  __cil_tmp7._p = (x._p)->q._p;
  __cil_tmp7._ms._b = (x._p)->q._ms._b;
  ptr = __cil_tmp7;
  _tlen8 = _tlen5;
  CHECK_BOUNDS_LEN(x._ms._b, _tlen8, (void *)(& (x._p)->i), sizeof(int ), sizeof(int ));
  CHECK_ZEROTAGS(x._ms._b, _tlen8, (void *)(& (x._p)->i), sizeof(int ));
  (x._p)->i = 5;
  __cil_tmp9._p = (int */* __WILD  */)6;
  __cil_tmp9._ms._b = (void *)0;
  _tlen10 = _tlen5;
  CHECK_BOUNDS_LEN(x._ms._b, _tlen10, (void *)(& (x._p)->q), sizeof(wildp_int ), sizeof(wildp_int ));
  CHECK_WILDPOINTERWRITE(x._ms._b, _tlen10, (void *)(& (x._p)->q), __cil_tmp9._ms._b,
                         (void *)__cil_tmp9._p, (void *)(& ___first_local));
  (x._p)->q = __cil_tmp9;
  _tlen12 = _tlen5;
  CHECK_BOUNDS_LEN(x._ms._b, _tlen12, (void *)x._p, sizeof(struct s ), sizeof(struct s ));
  CHECK_WILDPOINTERREAD(x._ms._b, _tlen12, (void *)(& (x._p)->q));
  _tlen13 = CHECK_FETCHLENGTH((void *)(& g_t._data), (void *)(& g_t._data), 0);
  CHECK_BOUNDS_LEN((void *)(& g_t._data), _tlen13, (void *)(& g_t._data), sizeof(struct s ),
                   sizeof(struct s ));
  CHECK_ZEROTAGS((void *)(& g_t._data), _tlen13, (void *)(& g_t._data), sizeof(struct s ));
  CHECK_WILDPOINTERWRITE((void *)(& g_t._data), _tlen13, (void *)(& g_t._data.q),
                         (x._p)->q._ms._b, (void *)(x._p)->q._p, (void *)(& ___first_local));
  g_t._data = *(x._p);
  __retres = 0;
  return (__retres);
}
}