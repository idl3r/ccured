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
extern unsigned int /*3*/wrapperAlloc(unsigned int  ) ;
struct meta_fseqp_char {
   void *_e ;
}   ;
struct fseqp_char {
   char * __FSEQ  _p ;
   struct meta_fseqp_char _ms ;
}   ;
typedef struct fseqp_char fseqp_char;
extern fseqp_char /*4*/__mkptr_string_fs(char * __NULLTERM  p ) ;
struct meta_seq_void {
   void *_b ;
   void *_e ;
}   ;
struct meta_seq_p_char {
   void *_b ;
   void *_e ;
}   ;
int main(int argc , char * __ROSTRING  *   __argv_input ) ;
int main(int argc , char * __ROSTRING  *   __argv_input ) 
{ struct fseqp_char * __SEQ  argv ;
  char * __FSEQ  p ;
  int no_mangling5 ;
  int num_strings6 ;
  char * __ROSTRING  *p_argv7 ;
  unsigned int argvsize8 ;
  struct fseqp_char *tmp_argv9 ;
  int __retres ;
  void *__cil_tmp11 ;
  struct fseqp_char * __SEQ  __cil_tmp12 ;
  struct fseqp_char * __SEQ  __cil_tmp13 ;
  unsigned int __cil_tmp14 ;
  struct fseqp_char * __SEQ  __cil_tmp15 ;
  fseqp_char __cil_tmp16 ;
  char * __FSEQ  __cil_tmp17 ;
  void *__cil_tmp18 ;
  void *__cil_tmp19 ;
  void * __SEQ  __cil_tmp20 ;
  void * __SEQ  __cil_tmp21 ;
  void * __SEQ  __cil_tmp22 ;
  struct fseqp_char * __SEQ  __cil_tmp23 ;
  char * __FSEQ  __cil_tmp24 ;
  char * __FSEQ  __cil_tmp25 ;
  struct fseqp_char * __SEQ  __cil_tmp26 ;
  void *argv_b39 ;
  void *argv_e40 ;
  void *p_e41 ;
  void *__cil_tmp12_b42 ;
  void *__cil_tmp12_e43 ;
  void *__cil_tmp15_b44 ;
  void *__cil_tmp15_e45 ;
  void *__cil_tmp17_e46 ;
  void *__cil_tmp20_b47 ;
  void *__cil_tmp20_e48 ;
  void *__cil_tmp21_b49 ;
  void *__cil_tmp21_e50 ;
  void *__cil_tmp22_b51 ;
  void *__cil_tmp22_e52 ;
  void *__cil_tmp23_b53 ;
  void *__cil_tmp23_e54 ;
  void *__cil_tmp24_e55 ;
  void *__cil_tmp25_e56 ;
  void *__cil_tmp26_b57 ;
  void *__cil_tmp26_e58 ;

  {
  tmp_argv9 = (struct fseqp_char *)0;
  p_argv7 = (char * __ROSTRING  *)0;
  p_e41 = (void *)0;
  p = (char */* __FSEQ  */)0;
  argv_e40 = (void *)0;
  argv_b39 = (void *)0;
  argv = (struct fseqp_char */* __SEQ  */)0;
  {
  no_mangling5 = 0;
  if ((int )__argv_input) {
    {
    no_mangling5 = 0;
    }
  } else {
    {
    no_mangling5 = 1;
    }
  }
  num_strings6 = 0;
  p_argv7 = (char * __ROSTRING  *)__argv_input;
  while (1) {
    CHECK_NULL((void *)p_argv7);
    if (! ((int )((unsigned int )*p_argv7))) {
      break;
    }
    {
    num_strings6 ++;
    __cil_tmp11 = (unsigned int )((void *)((long )p_argv7 + sizeof(*__argv_input)));
    p_argv7 = (char * __ROSTRING  *)__cil_tmp11;
    }
  }

  if (no_mangling5) {
    {
    __cil_tmp19 = (void *)__argv_input;
    tmp_argv9 = (struct fseqp_char *)__cil_tmp19;
    if ((void *)tmp_argv9) {
      __cil_tmp21 = (void *)tmp_argv9;
      __cil_tmp21_b49 = (void *)tmp_argv9;
      __cil_tmp21_e50 = (void *)tmp_argv9 + (unsigned int )((1 + num_strings6) * sizeof(*argv));
      __cil_tmp20_e48 = __cil_tmp21_e50;
      __cil_tmp20_b47 = __cil_tmp21_b49;
      __cil_tmp20 = __cil_tmp21;
    } else {
      __cil_tmp22 = 0;
      __cil_tmp22_b51 = (void *)0;
      __cil_tmp22_e52 = (void *)0;
      __cil_tmp20_e48 = __cil_tmp22_e52;
      __cil_tmp20_b47 = __cil_tmp22_b51;
      __cil_tmp20 = __cil_tmp22;
    }
    CHECK_SEQALIGN(sizeof(struct fseqp_char ), (void *)((struct fseqp_char */* __SEQ  */)__cil_tmp20),
                   __cil_tmp20_b47, __cil_tmp20_e48);
    __cil_tmp23 = (struct fseqp_char */* __SEQ  */)__cil_tmp20;
    __cil_tmp23_b53 = __cil_tmp20_b47;
    __cil_tmp23_e54 = __cil_tmp20_e48;
    argv_e40 = __cil_tmp23_e54;
    argv_b39 = __cil_tmp23_b53;
    argv = __cil_tmp23;
    }
  } else {
    {
    argvsize8 = (unsigned int )((1 + num_strings6) * sizeof(*argv));
    __cil_tmp13 = (struct fseqp_char */* __SEQ  */)/*3*/wrapperAlloc(((argvsize8 + 3U) >> 2) << 2);
    if (__cil_tmp13) {

      __cil_tmp12 = __cil_tmp13;
      __cil_tmp12_b42 = (void *)__cil_tmp13;

      __cil_tmp14 = (unsigned int )__cil_tmp13 + (((argvsize8 + 3U) >> 2) << 2);

      while ((unsigned int )__cil_tmp13 + sizeof(struct fseqp_char ) <= __cil_tmp14) {
        __cil_tmp13->_ms._e = (void *)0;
        __cil_tmp13->_p = (char */* __FSEQ  */)0;
        __cil_tmp13 ++;
      }
      __cil_tmp12_e43 = __cil_tmp13;
    } else {
      __cil_tmp12 = 0;
      __cil_tmp12_b42 = (void *)0;
      __cil_tmp12_e43 = (void *)0;
    }
    __cil_tmp15 = __cil_tmp12;
    __cil_tmp15_b44 = __cil_tmp12_b42;
    __cil_tmp15_e45 = __cil_tmp12_e43;
    argv_e40 = __cil_tmp15_e45;
    argv_b39 = __cil_tmp15_b44;
    argv = __cil_tmp15;
    while (num_strings6 >= 0) {
      {
      CHECK_NULL((void *)p_argv7);
      __cil_tmp16 = /*4*/__mkptr_string_fs((char */* __NULLTERM  */)*p_argv7);
      __cil_tmp17 = __cil_tmp16._p;
      __cil_tmp17_e46 = __cil_tmp16._ms._e;
      CHECK_SEQ2SAFE(argv_b39, argv_e40, (void *)(argv + num_strings6), sizeof(struct fseqp_char ),
                     sizeof(struct fseqp_char ), 1, 0);
      (argv + num_strings6)->_ms._e = __cil_tmp17_e46;
      (argv + num_strings6)->_p = __cil_tmp17;
      __cil_tmp18 = (unsigned int )((void *)((long )p_argv7 - sizeof(*__argv_input)));
      p_argv7 = (char * __ROSTRING  *)__cil_tmp18;
      num_strings6 --;
      }
    }
    }
  }
  }
  __ccuredAlwaysStopOnError = 0;
  __ccuredUseStrings = 1;
  __ccuredLogNonPointers = 0;
  __ccuredInit();
  while (1) {
    CHECK_SEQ2SAFE(argv_b39, argv_e40, (void *)argv, sizeof(struct fseqp_char ), sizeof(struct fseqp_char ),
                   1, 0);
    if (! ((int )argv->_p)) {
      break;
    }
    CHECK_SEQ2SAFE(argv_b39, argv_e40, (void *)argv, sizeof(struct fseqp_char ), sizeof(struct fseqp_char ),
                   1, 0);
    __cil_tmp24 = argv->_p;
    __cil_tmp24_e55 = argv->_ms._e;
    p_e41 = __cil_tmp24_e55;
    p = __cil_tmp24;
    while (1) {
      CHECK_FSEQ2SAFE(p_e41, (void *)p, sizeof(char ), sizeof(char ), 1, 0);
      if (! ((int )*p)) {
        break;
      }
      CHECK_FSEQARITH((void *)p, sizeof(char ), (void *)(p + 1), p_e41, 0);
      __cil_tmp25 = p + 1;
      __cil_tmp25_e56 = p_e41;
      p_e41 = __cil_tmp25_e56;
      p = __cil_tmp25;
    }
    __cil_tmp26 = argv + 1;
    __cil_tmp26_b57 = argv_b39;
    __cil_tmp26_e58 = argv_e40;
    argv_e40 = __cil_tmp26_e58;
    argv_b39 = __cil_tmp26_b57;
    argv = __cil_tmp26;
  }
  __retres = 0;
  return (__retres);
}
}