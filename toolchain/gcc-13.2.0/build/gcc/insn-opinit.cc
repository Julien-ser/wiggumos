/* Generated automatically by the program `genopinit'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "backend.h"
#include "predict.h"
#include "tree.h"
#include "rtl.h"
#include "alias.h"
#include "varasm.h"
#include "stor-layout.h"
#include "calls.h"
#include "memmodel.h"
#include "tm_p.h"
#include "flags.h"
#include "insn-config.h"
#include "expmed.h"
#include "dojump.h"
#include "explow.h"
#include "emit-rtl.h"
#include "stmt.h"
#include "expr.h"
#include "insn-codes.h"
#include "optabs.h"

struct optab_pat {
  unsigned scode;
  enum insn_code icode;
};

static const struct optab_pat pats[NUM_OPTAB_PATTERNS] = {
  { 0x010f10, CODE_FOR_extendqihi2 },
  { 0x010f11, CODE_FOR_extendqisi2 },
  { 0x010f12, CODE_FOR_extendqidi2 },
  { 0x011011, CODE_FOR_extendhisi2 },
  { 0x011012, CODE_FOR_extendhidi2 },
  { 0x011112, CODE_FOR_extendsidi2 },
  { 0x011213, CODE_FOR_extendditi2 },
  { 0x012b2d, CODE_FOR_extendhfsf2 },
  { 0x012b2e, CODE_FOR_extendhfdf2 },
  { 0x012c2d, CODE_FOR_extendbfsf2 },
  { 0x012d2e, CODE_FOR_extendsfdf2 },
  { 0x012d2f, CODE_FOR_extendsfxf2 },
  { 0x012e2f, CODE_FOR_extenddfxf2 },
  { 0x014452, CODE_FOR_extendv2qiv2di2 },
  { 0x014551, CODE_FOR_extendv4qiv4si2 },
  { 0x014557, CODE_FOR_extendv4qiv4di2 },
  { 0x014652, CODE_FOR_extendv2hiv2di2 },
  { 0x014850, CODE_FOR_extendv8qiv8hi2 },
  { 0x014856, CODE_FOR_extendv8qiv8si2 },
  { 0x01485c, CODE_FOR_extendv8qiv8di2 },
  { 0x014951, CODE_FOR_extendv4hiv4si2 },
  { 0x014957, CODE_FOR_extendv4hiv4di2 },
  { 0x014a52, CODE_FOR_extendv2siv2di2 },
  { 0x014f55, CODE_FOR_extendv16qiv16hi2 },
  { 0x014f5b, CODE_FOR_extendv16qiv16si2 },
  { 0x015056, CODE_FOR_extendv8hiv8si2 },
  { 0x01505c, CODE_FOR_extendv8hiv8di2 },
  { 0x015157, CODE_FOR_extendv4siv4di2 },
  { 0x01545a, CODE_FOR_extendv32qiv32hi2 },
  { 0x01555b, CODE_FOR_extendv16hiv16si2 },
  { 0x01565c, CODE_FOR_extendv8siv8di2 },
  { 0x01646d, CODE_FOR_extendv2hfv2df2 },
  { 0x01676c, CODE_FOR_extendv4hfv4sf2 },
  { 0x016771, CODE_FOR_extendv4hfv4df2 },
  { 0x01686d, CODE_FOR_extendv2sfv2df2 },
  { 0x016b70, CODE_FOR_extendv8hfv8sf2 },
  { 0x016b76, CODE_FOR_extendv8hfv8df2 },
  { 0x016c71, CODE_FOR_extendv4sfv4df2 },
  { 0x016f75, CODE_FOR_extendv16hfv16sf2 },
  { 0x017076, CODE_FOR_extendv8sfv8df2 },
  { 0x022d2b, CODE_FOR_truncsfhf2 },
  { 0x022d2c, CODE_FOR_truncsfbf2 },
  { 0x022e2b, CODE_FOR_truncdfhf2 },
  { 0x022e2d, CODE_FOR_truncdfsf2 },
  { 0x022f2d, CODE_FOR_truncxfsf2 },
  { 0x022f2e, CODE_FOR_truncxfdf2 },
  { 0x025048, CODE_FOR_truncv8hiv8qi2 },
  { 0x025145, CODE_FOR_truncv4siv4qi2 },
  { 0x025149, CODE_FOR_truncv4siv4hi2 },
  { 0x025244, CODE_FOR_truncv2div2qi2 },
  { 0x025246, CODE_FOR_truncv2div2hi2 },
  { 0x02524a, CODE_FOR_truncv2div2si2 },
  { 0x02554f, CODE_FOR_truncv16hiv16qi2 },
  { 0x025648, CODE_FOR_truncv8siv8qi2 },
  { 0x025650, CODE_FOR_truncv8siv8hi2 },
  { 0x025745, CODE_FOR_truncv4div4qi2 },
  { 0x025749, CODE_FOR_truncv4div4hi2 },
  { 0x025751, CODE_FOR_truncv4div4si2 },
  { 0x025a54, CODE_FOR_truncv32hiv32qi2 },
  { 0x025b4f, CODE_FOR_truncv16siv16qi2 },
  { 0x025b55, CODE_FOR_truncv16siv16hi2 },
  { 0x025c48, CODE_FOR_truncv8div8qi2 },
  { 0x025c50, CODE_FOR_truncv8div8hi2 },
  { 0x025c56, CODE_FOR_truncv8div8si2 },
  { 0x026c67, CODE_FOR_truncv4sfv4hf2 },
  { 0x026d64, CODE_FOR_truncv2dfv2hf2 },
  { 0x026d68, CODE_FOR_truncv2dfv2sf2 },
  { 0x02706b, CODE_FOR_truncv8sfv8hf2 },
  { 0x027167, CODE_FOR_truncv4dfv4hf2 },
  { 0x02716c, CODE_FOR_truncv4dfv4sf2 },
  { 0x02756f, CODE_FOR_truncv16sfv16hf2 },
  { 0x02766b, CODE_FOR_truncv8dfv8hf2 },
  { 0x027670, CODE_FOR_truncv8dfv8sf2 },
  { 0x030f10, CODE_FOR_zero_extendqihi2 },
  { 0x030f11, CODE_FOR_zero_extendqisi2 },
  { 0x030f12, CODE_FOR_zero_extendqidi2 },
  { 0x031011, CODE_FOR_zero_extendhisi2 },
  { 0x031012, CODE_FOR_zero_extendhidi2 },
  { 0x031112, CODE_FOR_zero_extendsidi2 },
  { 0x031213, CODE_FOR_zero_extendditi2 },
  { 0x034452, CODE_FOR_zero_extendv2qiv2di2 },
  { 0x034551, CODE_FOR_zero_extendv4qiv4si2 },
  { 0x034557, CODE_FOR_zero_extendv4qiv4di2 },
  { 0x034652, CODE_FOR_zero_extendv2hiv2di2 },
  { 0x034850, CODE_FOR_zero_extendv8qiv8hi2 },
  { 0x034856, CODE_FOR_zero_extendv8qiv8si2 },
  { 0x03485c, CODE_FOR_zero_extendv8qiv8di2 },
  { 0x034951, CODE_FOR_zero_extendv4hiv4si2 },
  { 0x034957, CODE_FOR_zero_extendv4hiv4di2 },
  { 0x034a52, CODE_FOR_zero_extendv2siv2di2 },
  { 0x034f55, CODE_FOR_zero_extendv16qiv16hi2 },
  { 0x034f5b, CODE_FOR_zero_extendv16qiv16si2 },
  { 0x035056, CODE_FOR_zero_extendv8hiv8si2 },
  { 0x03505c, CODE_FOR_zero_extendv8hiv8di2 },
  { 0x035157, CODE_FOR_zero_extendv4siv4di2 },
  { 0x03545a, CODE_FOR_zero_extendv32qiv32hi2 },
  { 0x03555b, CODE_FOR_zero_extendv16hiv16si2 },
  { 0x03565c, CODE_FOR_zero_extendv8siv8di2 },
  { 0x06102d, CODE_FOR_floathisf2 },
  { 0x06102e, CODE_FOR_floathidf2 },
  { 0x06102f, CODE_FOR_floathixf2 },
  { 0x06112b, CODE_FOR_floatsihf2 },
  { 0x06112d, CODE_FOR_floatsisf2 },
  { 0x06112e, CODE_FOR_floatsidf2 },
  { 0x06112f, CODE_FOR_floatsixf2 },
  { 0x06122b, CODE_FOR_floatdihf2 },
  { 0x06122d, CODE_FOR_floatdisf2 },
  { 0x06122e, CODE_FOR_floatdidf2 },
  { 0x06122f, CODE_FOR_floatdixf2 },
  { 0x064a68, CODE_FOR_floatv2siv2sf2 },
  { 0x064a6d, CODE_FOR_floatv2siv2df2 },
  { 0x06506b, CODE_FOR_floatv8hiv8hf2 },
  { 0x065167, CODE_FOR_floatv4siv4hf2 },
  { 0x06516c, CODE_FOR_floatv4siv4sf2 },
  { 0x065171, CODE_FOR_floatv4siv4df2 },
  { 0x065264, CODE_FOR_floatv2div2hf2 },
  { 0x065268, CODE_FOR_floatv2div2sf2 },
  { 0x06526d, CODE_FOR_floatv2div2df2 },
  { 0x06556f, CODE_FOR_floatv16hiv16hf2 },
  { 0x06566b, CODE_FOR_floatv8siv8hf2 },
  { 0x065670, CODE_FOR_floatv8siv8sf2 },
  { 0x065676, CODE_FOR_floatv8siv8df2 },
  { 0x065767, CODE_FOR_floatv4div4hf2 },
  { 0x06576c, CODE_FOR_floatv4div4sf2 },
  { 0x065771, CODE_FOR_floatv4div4df2 },
  { 0x065a74, CODE_FOR_floatv32hiv32hf2 },
  { 0x065b6f, CODE_FOR_floatv16siv16hf2 },
  { 0x065b75, CODE_FOR_floatv16siv16sf2 },
  { 0x065c6b, CODE_FOR_floatv8div8hf2 },
  { 0x065c70, CODE_FOR_floatv8div8sf2 },
  { 0x065c76, CODE_FOR_floatv8div8df2 },
  { 0x070f2d, CODE_FOR_floatunsqisf2 },
  { 0x070f2e, CODE_FOR_floatunsqidf2 },
  { 0x07102d, CODE_FOR_floatunshisf2 },
  { 0x07102e, CODE_FOR_floatunshidf2 },
  { 0x07112b, CODE_FOR_floatunssihf2 },
  { 0x07112d, CODE_FOR_floatunssisf2 },
  { 0x07112e, CODE_FOR_floatunssidf2 },
  { 0x07112f, CODE_FOR_floatunssixf2 },
  { 0x07122b, CODE_FOR_floatunsdihf2 },
  { 0x07122d, CODE_FOR_floatunsdisf2 },
  { 0x07122e, CODE_FOR_floatunsdidf2 },
  { 0x074a68, CODE_FOR_floatunsv2siv2sf2 },
  { 0x074a6d, CODE_FOR_floatunsv2siv2df2 },
  { 0x07506b, CODE_FOR_floatunsv8hiv8hf2 },
  { 0x075167, CODE_FOR_floatunsv4siv4hf2 },
  { 0x07516c, CODE_FOR_floatunsv4siv4sf2 },
  { 0x075171, CODE_FOR_floatunsv4siv4df2 },
  { 0x075264, CODE_FOR_floatunsv2div2hf2 },
  { 0x075268, CODE_FOR_floatunsv2div2sf2 },
  { 0x07526d, CODE_FOR_floatunsv2div2df2 },
  { 0x07556f, CODE_FOR_floatunsv16hiv16hf2 },
  { 0x07566b, CODE_FOR_floatunsv8siv8hf2 },
  { 0x075670, CODE_FOR_floatunsv8siv8sf2 },
  { 0x075676, CODE_FOR_floatunsv8siv8df2 },
  { 0x075767, CODE_FOR_floatunsv4div4hf2 },
  { 0x07576c, CODE_FOR_floatunsv4div4sf2 },
  { 0x075771, CODE_FOR_floatunsv4div4df2 },
  { 0x075a74, CODE_FOR_floatunsv32hiv32hf2 },
  { 0x075b6f, CODE_FOR_floatunsv16siv16hf2 },
  { 0x075b75, CODE_FOR_floatunsv16siv16sf2 },
  { 0x075c6b, CODE_FOR_floatunsv8div8hf2 },
  { 0x075c70, CODE_FOR_floatunsv8div8sf2 },
  { 0x075c76, CODE_FOR_floatunsv8div8df2 },
  { 0x082d11, CODE_FOR_lrintsfsi2 },
  { 0x082d12, CODE_FOR_lrintsfdi2 },
  { 0x082e11, CODE_FOR_lrintdfsi2 },
  { 0x082e12, CODE_FOR_lrintdfdi2 },
  { 0x082f10, CODE_FOR_lrintxfhi2 },
  { 0x082f11, CODE_FOR_lrintxfsi2 },
  { 0x082f12, CODE_FOR_lrintxfdi2 },
  { 0x08684a, CODE_FOR_lrintv2sfv2si2 },
  { 0x086c51, CODE_FOR_lrintv4sfv4si2 },
  { 0x086d52, CODE_FOR_lrintv2dfv2di2 },
  { 0x087056, CODE_FOR_lrintv8sfv8si2 },
  { 0x087157, CODE_FOR_lrintv4dfv4di2 },
  { 0x08755b, CODE_FOR_lrintv16sfv16si2 },
  { 0x08765c, CODE_FOR_lrintv8dfv8di2 },
  { 0x092d10, CODE_FOR_lroundsfhi2 },
  { 0x092d11, CODE_FOR_lroundsfsi2 },
  { 0x092d12, CODE_FOR_lroundsfdi2 },
  { 0x092e10, CODE_FOR_lrounddfhi2 },
  { 0x092e11, CODE_FOR_lrounddfsi2 },
  { 0x092e12, CODE_FOR_lrounddfdi2 },
  { 0x092f10, CODE_FOR_lroundxfhi2 },
  { 0x092f11, CODE_FOR_lroundxfsi2 },
  { 0x092f12, CODE_FOR_lroundxfdi2 },
  { 0x09684a, CODE_FOR_lroundv2sfv2si2 },
  { 0x096c51, CODE_FOR_lroundv4sfv4si2 },
  { 0x096d52, CODE_FOR_lroundv2dfv2di2 },
  { 0x097056, CODE_FOR_lroundv8sfv8si2 },
  { 0x097157, CODE_FOR_lroundv4dfv4di2 },
  { 0x09755b, CODE_FOR_lroundv16sfv16si2 },
  { 0x09765c, CODE_FOR_lroundv8dfv8di2 },
  { 0x0a2d11, CODE_FOR_lfloorsfsi2 },
  { 0x0a2d12, CODE_FOR_lfloorsfdi2 },
  { 0x0a2e11, CODE_FOR_lfloordfsi2 },
  { 0x0a2e12, CODE_FOR_lfloordfdi2 },
  { 0x0a2f10, CODE_FOR_lfloorxfhi2 },
  { 0x0a2f11, CODE_FOR_lfloorxfsi2 },
  { 0x0a2f12, CODE_FOR_lfloorxfdi2 },
  { 0x0a684a, CODE_FOR_lfloorv2sfv2si2 },
  { 0x0a6c51, CODE_FOR_lfloorv4sfv4si2 },
  { 0x0a6d52, CODE_FOR_lfloorv2dfv2di2 },
  { 0x0a7056, CODE_FOR_lfloorv8sfv8si2 },
  { 0x0a7157, CODE_FOR_lfloorv4dfv4di2 },
  { 0x0a755b, CODE_FOR_lfloorv16sfv16si2 },
  { 0x0a765c, CODE_FOR_lfloorv8dfv8di2 },
  { 0x0b2d11, CODE_FOR_lceilsfsi2 },
  { 0x0b2d12, CODE_FOR_lceilsfdi2 },
  { 0x0b2e11, CODE_FOR_lceildfsi2 },
  { 0x0b2e12, CODE_FOR_lceildfdi2 },
  { 0x0b2f10, CODE_FOR_lceilxfhi2 },
  { 0x0b2f11, CODE_FOR_lceilxfsi2 },
  { 0x0b2f12, CODE_FOR_lceilxfdi2 },
  { 0x0b684a, CODE_FOR_lceilv2sfv2si2 },
  { 0x0b6c51, CODE_FOR_lceilv4sfv4si2 },
  { 0x0b6d52, CODE_FOR_lceilv2dfv2di2 },
  { 0x0b7056, CODE_FOR_lceilv8sfv8si2 },
  { 0x0b7157, CODE_FOR_lceilv4dfv4di2 },
  { 0x0b755b, CODE_FOR_lceilv16sfv16si2 },
  { 0x0b765c, CODE_FOR_lceilv8dfv8di2 },
  { 0x102b11, CODE_FOR_fix_trunchfsi2 },
  { 0x102b12, CODE_FOR_fix_trunchfdi2 },
  { 0x102d10, CODE_FOR_fix_truncsfhi2 },
  { 0x102d11, CODE_FOR_fix_truncsfsi2 },
  { 0x102d12, CODE_FOR_fix_truncsfdi2 },
  { 0x102e10, CODE_FOR_fix_truncdfhi2 },
  { 0x102e11, CODE_FOR_fix_truncdfsi2 },
  { 0x102e12, CODE_FOR_fix_truncdfdi2 },
  { 0x102f10, CODE_FOR_fix_truncxfhi2 },
  { 0x102f11, CODE_FOR_fix_truncxfsi2 },
  { 0x102f12, CODE_FOR_fix_truncxfdi2 },
  { 0x106452, CODE_FOR_fix_truncv2hfv2di2 },
  { 0x106751, CODE_FOR_fix_truncv4hfv4si2 },
  { 0x106757, CODE_FOR_fix_truncv4hfv4di2 },
  { 0x10684a, CODE_FOR_fix_truncv2sfv2si2 },
  { 0x106852, CODE_FOR_fix_truncv2sfv2di2 },
  { 0x106b50, CODE_FOR_fix_truncv8hfv8hi2 },
  { 0x106b56, CODE_FOR_fix_truncv8hfv8si2 },
  { 0x106b5c, CODE_FOR_fix_truncv8hfv8di2 },
  { 0x106c51, CODE_FOR_fix_truncv4sfv4si2 },
  { 0x106c57, CODE_FOR_fix_truncv4sfv4di2 },
  { 0x106d4a, CODE_FOR_fix_truncv2dfv2si2 },
  { 0x106d52, CODE_FOR_fix_truncv2dfv2di2 },
  { 0x106f55, CODE_FOR_fix_truncv16hfv16hi2 },
  { 0x106f5b, CODE_FOR_fix_truncv16hfv16si2 },
  { 0x107056, CODE_FOR_fix_truncv8sfv8si2 },
  { 0x10705c, CODE_FOR_fix_truncv8sfv8di2 },
  { 0x107151, CODE_FOR_fix_truncv4dfv4si2 },
  { 0x107157, CODE_FOR_fix_truncv4dfv4di2 },
  { 0x10745a, CODE_FOR_fix_truncv32hfv32hi2 },
  { 0x10755b, CODE_FOR_fix_truncv16sfv16si2 },
  { 0x107656, CODE_FOR_fix_truncv8dfv8si2 },
  { 0x10765c, CODE_FOR_fix_truncv8dfv8di2 },
  { 0x112b10, CODE_FOR_fixuns_trunchfhi2 },
  { 0x112b11, CODE_FOR_fixuns_trunchfsi2 },
  { 0x112b12, CODE_FOR_fixuns_trunchfdi2 },
  { 0x112d10, CODE_FOR_fixuns_truncsfhi2 },
  { 0x112d11, CODE_FOR_fixuns_truncsfsi2 },
  { 0x112d12, CODE_FOR_fixuns_truncsfdi2 },
  { 0x112e10, CODE_FOR_fixuns_truncdfhi2 },
  { 0x112e11, CODE_FOR_fixuns_truncdfsi2 },
  { 0x112e12, CODE_FOR_fixuns_truncdfdi2 },
  { 0x116452, CODE_FOR_fixuns_truncv2hfv2di2 },
  { 0x116751, CODE_FOR_fixuns_truncv4hfv4si2 },
  { 0x116757, CODE_FOR_fixuns_truncv4hfv4di2 },
  { 0x11684a, CODE_FOR_fixuns_truncv2sfv2si2 },
  { 0x116852, CODE_FOR_fixuns_truncv2sfv2di2 },
  { 0x116b50, CODE_FOR_fixuns_truncv8hfv8hi2 },
  { 0x116b56, CODE_FOR_fixuns_truncv8hfv8si2 },
  { 0x116b5c, CODE_FOR_fixuns_truncv8hfv8di2 },
  { 0x116c51, CODE_FOR_fixuns_truncv4sfv4si2 },
  { 0x116c57, CODE_FOR_fixuns_truncv4sfv4di2 },
  { 0x116d4a, CODE_FOR_fixuns_truncv2dfv2si2 },
  { 0x116d52, CODE_FOR_fixuns_truncv2dfv2di2 },
  { 0x116f55, CODE_FOR_fixuns_truncv16hfv16hi2 },
  { 0x116f5b, CODE_FOR_fixuns_truncv16hfv16si2 },
  { 0x117056, CODE_FOR_fixuns_truncv8sfv8si2 },
  { 0x11705c, CODE_FOR_fixuns_truncv8sfv8di2 },
  { 0x117151, CODE_FOR_fixuns_truncv4dfv4si2 },
  { 0x117157, CODE_FOR_fixuns_truncv4dfv4di2 },
  { 0x11745a, CODE_FOR_fixuns_truncv32hfv32hi2 },
  { 0x11755b, CODE_FOR_fixuns_truncv16sfv16si2 },
  { 0x117656, CODE_FOR_fixuns_truncv8dfv8si2 },
  { 0x11765c, CODE_FOR_fixuns_truncv8dfv8di2 },
  { 0x120f10, CODE_FOR_mulqihi3 },
  { 0x121112, CODE_FOR_mulsidi3 },
  { 0x121213, CODE_FOR_mulditi3 },
  { 0x130f10, CODE_FOR_umulqihi3 },
  { 0x131112, CODE_FOR_umulsidi3 },
  { 0x131213, CODE_FOR_umulditi3 },
  { 0x214444, CODE_FOR_vcondv2qiv2qi },
  { 0x214545, CODE_FOR_vcondv4qiv4qi },
  { 0x214646, CODE_FOR_vcondv2hiv2hi },
  { 0x214848, CODE_FOR_vcondv8qiv8qi },
  { 0x214849, CODE_FOR_vcondv4hiv8qi },
  { 0x21484a, CODE_FOR_vcondv2siv8qi },
  { 0x214868, CODE_FOR_vcondv2sfv8qi },
  { 0x214948, CODE_FOR_vcondv8qiv4hi },
  { 0x214949, CODE_FOR_vcondv4hiv4hi },
  { 0x21494a, CODE_FOR_vcondv2siv4hi },
  { 0x214968, CODE_FOR_vcondv2sfv4hi },
  { 0x214a48, CODE_FOR_vcondv8qiv2si },
  { 0x214a49, CODE_FOR_vcondv4hiv2si },
  { 0x214a4a, CODE_FOR_vcondv2siv2si },
  { 0x214a68, CODE_FOR_vcondv2sfv2si },
  { 0x214f4f, CODE_FOR_vcondv16qiv16qi },
  { 0x214f50, CODE_FOR_vcondv8hiv16qi },
  { 0x214f51, CODE_FOR_vcondv4siv16qi },
  { 0x214f52, CODE_FOR_vcondv2div16qi },
  { 0x214f6c, CODE_FOR_vcondv4sfv16qi },
  { 0x214f6d, CODE_FOR_vcondv2dfv16qi },
  { 0x21504f, CODE_FOR_vcondv16qiv8hi },
  { 0x215050, CODE_FOR_vcondv8hiv8hi },
  { 0x215051, CODE_FOR_vcondv4siv8hi },
  { 0x215052, CODE_FOR_vcondv2div8hi },
  { 0x21506a, CODE_FOR_vcondv8bfv8hi },
  { 0x21506b, CODE_FOR_vcondv8hfv8hi },
  { 0x21506c, CODE_FOR_vcondv4sfv8hi },
  { 0x21506d, CODE_FOR_vcondv2dfv8hi },
  { 0x21514f, CODE_FOR_vcondv16qiv4si },
  { 0x215150, CODE_FOR_vcondv8hiv4si },
  { 0x215151, CODE_FOR_vcondv4siv4si },
  { 0x215152, CODE_FOR_vcondv2div4si },
  { 0x21516c, CODE_FOR_vcondv4sfv4si },
  { 0x21516d, CODE_FOR_vcondv2dfv4si },
  { 0x215252, CODE_FOR_vcondv2div2di },
  { 0x21526d, CODE_FOR_vcondv2dfv2di },
  { 0x215454, CODE_FOR_vcondv32qiv32qi },
  { 0x215455, CODE_FOR_vcondv16hiv32qi },
  { 0x215456, CODE_FOR_vcondv8siv32qi },
  { 0x215457, CODE_FOR_vcondv4div32qi },
  { 0x215470, CODE_FOR_vcondv8sfv32qi },
  { 0x215471, CODE_FOR_vcondv4dfv32qi },
  { 0x215554, CODE_FOR_vcondv32qiv16hi },
  { 0x215555, CODE_FOR_vcondv16hiv16hi },
  { 0x215556, CODE_FOR_vcondv8siv16hi },
  { 0x215557, CODE_FOR_vcondv4div16hi },
  { 0x21556e, CODE_FOR_vcondv16bfv16hi },
  { 0x21556f, CODE_FOR_vcondv16hfv16hi },
  { 0x215570, CODE_FOR_vcondv8sfv16hi },
  { 0x215571, CODE_FOR_vcondv4dfv16hi },
  { 0x215654, CODE_FOR_vcondv32qiv8si },
  { 0x215655, CODE_FOR_vcondv16hiv8si },
  { 0x215656, CODE_FOR_vcondv8siv8si },
  { 0x215657, CODE_FOR_vcondv4div8si },
  { 0x215670, CODE_FOR_vcondv8sfv8si },
  { 0x215671, CODE_FOR_vcondv4dfv8si },
  { 0x215754, CODE_FOR_vcondv32qiv4di },
  { 0x215755, CODE_FOR_vcondv16hiv4di },
  { 0x215756, CODE_FOR_vcondv8siv4di },
  { 0x215757, CODE_FOR_vcondv4div4di },
  { 0x215770, CODE_FOR_vcondv8sfv4di },
  { 0x215771, CODE_FOR_vcondv4dfv4di },
  { 0x215959, CODE_FOR_vcondv64qiv64qi },
  { 0x21595a, CODE_FOR_vcondv32hiv64qi },
  { 0x21595b, CODE_FOR_vcondv16siv64qi },
  { 0x21595c, CODE_FOR_vcondv8div64qi },
  { 0x215975, CODE_FOR_vcondv16sfv64qi },
  { 0x215976, CODE_FOR_vcondv8dfv64qi },
  { 0x215a59, CODE_FOR_vcondv64qiv32hi },
  { 0x215a5a, CODE_FOR_vcondv32hiv32hi },
  { 0x215a5b, CODE_FOR_vcondv16siv32hi },
  { 0x215a5c, CODE_FOR_vcondv8div32hi },
  { 0x215a73, CODE_FOR_vcondv32bfv32hi },
  { 0x215a74, CODE_FOR_vcondv32hfv32hi },
  { 0x215a75, CODE_FOR_vcondv16sfv32hi },
  { 0x215a76, CODE_FOR_vcondv8dfv32hi },
  { 0x215b59, CODE_FOR_vcondv64qiv16si },
  { 0x215b5a, CODE_FOR_vcondv32hiv16si },
  { 0x215b5b, CODE_FOR_vcondv16siv16si },
  { 0x215b5c, CODE_FOR_vcondv8div16si },
  { 0x215b75, CODE_FOR_vcondv16sfv16si },
  { 0x215b76, CODE_FOR_vcondv8dfv16si },
  { 0x215c59, CODE_FOR_vcondv64qiv8di },
  { 0x215c5a, CODE_FOR_vcondv32hiv8di },
  { 0x215c5b, CODE_FOR_vcondv16siv8di },
  { 0x215c5c, CODE_FOR_vcondv8div8di },
  { 0x215c75, CODE_FOR_vcondv16sfv8di },
  { 0x215c76, CODE_FOR_vcondv8dfv8di },
  { 0x21684a, CODE_FOR_vcondv2siv2sf },
  { 0x216868, CODE_FOR_vcondv2sfv2sf },
  { 0x216b50, CODE_FOR_vcondv8hiv8hf },
  { 0x216b6b, CODE_FOR_vcondv8hfv8hf },
  { 0x216c4f, CODE_FOR_vcondv16qiv4sf },
  { 0x216c50, CODE_FOR_vcondv8hiv4sf },
  { 0x216c51, CODE_FOR_vcondv4siv4sf },
  { 0x216c52, CODE_FOR_vcondv2div4sf },
  { 0x216c6c, CODE_FOR_vcondv4sfv4sf },
  { 0x216c6d, CODE_FOR_vcondv2dfv4sf },
  { 0x216d4f, CODE_FOR_vcondv16qiv2df },
  { 0x216d50, CODE_FOR_vcondv8hiv2df },
  { 0x216d51, CODE_FOR_vcondv4siv2df },
  { 0x216d52, CODE_FOR_vcondv2div2df },
  { 0x216d6c, CODE_FOR_vcondv4sfv2df },
  { 0x216d6d, CODE_FOR_vcondv2dfv2df },
  { 0x216f55, CODE_FOR_vcondv16hiv16hf },
  { 0x216f6f, CODE_FOR_vcondv16hfv16hf },
  { 0x217054, CODE_FOR_vcondv32qiv8sf },
  { 0x217055, CODE_FOR_vcondv16hiv8sf },
  { 0x217056, CODE_FOR_vcondv8siv8sf },
  { 0x217057, CODE_FOR_vcondv4div8sf },
  { 0x217070, CODE_FOR_vcondv8sfv8sf },
  { 0x217071, CODE_FOR_vcondv4dfv8sf },
  { 0x217154, CODE_FOR_vcondv32qiv4df },
  { 0x217155, CODE_FOR_vcondv16hiv4df },
  { 0x217156, CODE_FOR_vcondv8siv4df },
  { 0x217157, CODE_FOR_vcondv4div4df },
  { 0x217170, CODE_FOR_vcondv8sfv4df },
  { 0x217171, CODE_FOR_vcondv4dfv4df },
  { 0x21745a, CODE_FOR_vcondv32hiv32hf },
  { 0x217474, CODE_FOR_vcondv32hfv32hf },
  { 0x217559, CODE_FOR_vcondv64qiv16sf },
  { 0x21755a, CODE_FOR_vcondv32hiv16sf },
  { 0x21755b, CODE_FOR_vcondv16siv16sf },
  { 0x21755c, CODE_FOR_vcondv8div16sf },
  { 0x217575, CODE_FOR_vcondv16sfv16sf },
  { 0x217576, CODE_FOR_vcondv8dfv16sf },
  { 0x217659, CODE_FOR_vcondv64qiv8df },
  { 0x21765a, CODE_FOR_vcondv32hiv8df },
  { 0x21765b, CODE_FOR_vcondv16siv8df },
  { 0x21765c, CODE_FOR_vcondv8div8df },
  { 0x217675, CODE_FOR_vcondv16sfv8df },
  { 0x217676, CODE_FOR_vcondv8dfv8df },
  { 0x224444, CODE_FOR_vconduv2qiv2qi },
  { 0x224545, CODE_FOR_vconduv4qiv4qi },
  { 0x224646, CODE_FOR_vconduv2hiv2hi },
  { 0x224848, CODE_FOR_vconduv8qiv8qi },
  { 0x224849, CODE_FOR_vconduv4hiv8qi },
  { 0x22484a, CODE_FOR_vconduv2siv8qi },
  { 0x224868, CODE_FOR_vconduv2sfv8qi },
  { 0x224948, CODE_FOR_vconduv8qiv4hi },
  { 0x224949, CODE_FOR_vconduv4hiv4hi },
  { 0x22494a, CODE_FOR_vconduv2siv4hi },
  { 0x224968, CODE_FOR_vconduv2sfv4hi },
  { 0x224a48, CODE_FOR_vconduv8qiv2si },
  { 0x224a49, CODE_FOR_vconduv4hiv2si },
  { 0x224a4a, CODE_FOR_vconduv2siv2si },
  { 0x224a68, CODE_FOR_vconduv2sfv2si },
  { 0x224f4f, CODE_FOR_vconduv16qiv16qi },
  { 0x224f50, CODE_FOR_vconduv8hiv16qi },
  { 0x224f51, CODE_FOR_vconduv4siv16qi },
  { 0x224f52, CODE_FOR_vconduv2div16qi },
  { 0x224f6c, CODE_FOR_vconduv4sfv16qi },
  { 0x224f6d, CODE_FOR_vconduv2dfv16qi },
  { 0x22504f, CODE_FOR_vconduv16qiv8hi },
  { 0x225050, CODE_FOR_vconduv8hiv8hi },
  { 0x225051, CODE_FOR_vconduv4siv8hi },
  { 0x225052, CODE_FOR_vconduv2div8hi },
  { 0x22506b, CODE_FOR_vconduv8hfv8hi },
  { 0x22506c, CODE_FOR_vconduv4sfv8hi },
  { 0x22506d, CODE_FOR_vconduv2dfv8hi },
  { 0x22514f, CODE_FOR_vconduv16qiv4si },
  { 0x225150, CODE_FOR_vconduv8hiv4si },
  { 0x225151, CODE_FOR_vconduv4siv4si },
  { 0x225152, CODE_FOR_vconduv2div4si },
  { 0x22516c, CODE_FOR_vconduv4sfv4si },
  { 0x22516d, CODE_FOR_vconduv2dfv4si },
  { 0x225252, CODE_FOR_vconduv2div2di },
  { 0x22526d, CODE_FOR_vconduv2dfv2di },
  { 0x225454, CODE_FOR_vconduv32qiv32qi },
  { 0x225455, CODE_FOR_vconduv16hiv32qi },
  { 0x225456, CODE_FOR_vconduv8siv32qi },
  { 0x225457, CODE_FOR_vconduv4div32qi },
  { 0x225470, CODE_FOR_vconduv8sfv32qi },
  { 0x225471, CODE_FOR_vconduv4dfv32qi },
  { 0x225554, CODE_FOR_vconduv32qiv16hi },
  { 0x225555, CODE_FOR_vconduv16hiv16hi },
  { 0x225556, CODE_FOR_vconduv8siv16hi },
  { 0x225557, CODE_FOR_vconduv4div16hi },
  { 0x22556f, CODE_FOR_vconduv16hfv16hi },
  { 0x225570, CODE_FOR_vconduv8sfv16hi },
  { 0x225571, CODE_FOR_vconduv4dfv16hi },
  { 0x225654, CODE_FOR_vconduv32qiv8si },
  { 0x225655, CODE_FOR_vconduv16hiv8si },
  { 0x225656, CODE_FOR_vconduv8siv8si },
  { 0x225657, CODE_FOR_vconduv4div8si },
  { 0x225670, CODE_FOR_vconduv8sfv8si },
  { 0x225671, CODE_FOR_vconduv4dfv8si },
  { 0x225754, CODE_FOR_vconduv32qiv4di },
  { 0x225755, CODE_FOR_vconduv16hiv4di },
  { 0x225756, CODE_FOR_vconduv8siv4di },
  { 0x225757, CODE_FOR_vconduv4div4di },
  { 0x225770, CODE_FOR_vconduv8sfv4di },
  { 0x225771, CODE_FOR_vconduv4dfv4di },
  { 0x225959, CODE_FOR_vconduv64qiv64qi },
  { 0x22595a, CODE_FOR_vconduv32hiv64qi },
  { 0x22595b, CODE_FOR_vconduv16siv64qi },
  { 0x22595c, CODE_FOR_vconduv8div64qi },
  { 0x225975, CODE_FOR_vconduv16sfv64qi },
  { 0x225976, CODE_FOR_vconduv8dfv64qi },
  { 0x225a59, CODE_FOR_vconduv64qiv32hi },
  { 0x225a5a, CODE_FOR_vconduv32hiv32hi },
  { 0x225a5b, CODE_FOR_vconduv16siv32hi },
  { 0x225a5c, CODE_FOR_vconduv8div32hi },
  { 0x225a74, CODE_FOR_vconduv32hfv32hi },
  { 0x225a75, CODE_FOR_vconduv16sfv32hi },
  { 0x225a76, CODE_FOR_vconduv8dfv32hi },
  { 0x225b59, CODE_FOR_vconduv64qiv16si },
  { 0x225b5a, CODE_FOR_vconduv32hiv16si },
  { 0x225b5b, CODE_FOR_vconduv16siv16si },
  { 0x225b5c, CODE_FOR_vconduv8div16si },
  { 0x225b75, CODE_FOR_vconduv16sfv16si },
  { 0x225b76, CODE_FOR_vconduv8dfv16si },
  { 0x225c59, CODE_FOR_vconduv64qiv8di },
  { 0x225c5a, CODE_FOR_vconduv32hiv8di },
  { 0x225c5b, CODE_FOR_vconduv16siv8di },
  { 0x225c5c, CODE_FOR_vconduv8div8di },
  { 0x225c75, CODE_FOR_vconduv16sfv8di },
  { 0x225c76, CODE_FOR_vconduv8dfv8di },
  { 0x235252, CODE_FOR_vcondeqv2div2di },
  { 0x23526d, CODE_FOR_vcondeqv2dfv2di },
  { 0x240f50, CODE_FOR_vcond_mask_v8hiqi },
  { 0x240f51, CODE_FOR_vcond_mask_v4siqi },
  { 0x240f52, CODE_FOR_vcond_mask_v2diqi },
  { 0x240f56, CODE_FOR_vcond_mask_v8siqi },
  { 0x240f57, CODE_FOR_vcond_mask_v4diqi },
  { 0x240f5c, CODE_FOR_vcond_mask_v8diqi },
  { 0x240f6a, CODE_FOR_vcond_mask_v8bfqi },
  { 0x240f6b, CODE_FOR_vcond_mask_v8hfqi },
  { 0x240f6c, CODE_FOR_vcond_mask_v4sfqi },
  { 0x240f6d, CODE_FOR_vcond_mask_v2dfqi },
  { 0x240f70, CODE_FOR_vcond_mask_v8sfqi },
  { 0x240f71, CODE_FOR_vcond_mask_v4dfqi },
  { 0x240f76, CODE_FOR_vcond_mask_v8dfqi },
  { 0x24104f, CODE_FOR_vcond_mask_v16qihi },
  { 0x241055, CODE_FOR_vcond_mask_v16hihi },
  { 0x24105b, CODE_FOR_vcond_mask_v16sihi },
  { 0x24106e, CODE_FOR_vcond_mask_v16bfhi },
  { 0x24106f, CODE_FOR_vcond_mask_v16hfhi },
  { 0x241075, CODE_FOR_vcond_mask_v16sfhi },
  { 0x241154, CODE_FOR_vcond_mask_v32qisi },
  { 0x24115a, CODE_FOR_vcond_mask_v32hisi },
  { 0x241173, CODE_FOR_vcond_mask_v32bfsi },
  { 0x241174, CODE_FOR_vcond_mask_v32hfsi },
  { 0x241259, CODE_FOR_vcond_mask_v64qidi },
  { 0x244444, CODE_FOR_vcond_mask_v2qiv2qi },
  { 0x244545, CODE_FOR_vcond_mask_v4qiv4qi },
  { 0x244646, CODE_FOR_vcond_mask_v2hiv2hi },
  { 0x244848, CODE_FOR_vcond_mask_v8qiv8qi },
  { 0x244949, CODE_FOR_vcond_mask_v4hiv4hi },
  { 0x244a4a, CODE_FOR_vcond_mask_v2siv2si },
  { 0x244a68, CODE_FOR_vcond_mask_v2sfv2si },
  { 0x244f4f, CODE_FOR_vcond_mask_v16qiv16qi },
  { 0x245050, CODE_FOR_vcond_mask_v8hiv8hi },
  { 0x245151, CODE_FOR_vcond_mask_v4siv4si },
  { 0x24516c, CODE_FOR_vcond_mask_v4sfv4si },
  { 0x245252, CODE_FOR_vcond_mask_v2div2di },
  { 0x24526d, CODE_FOR_vcond_mask_v2dfv2di },
  { 0x245353, CODE_FOR_vcond_mask_v1tiv1ti },
  { 0x245454, CODE_FOR_vcond_mask_v32qiv32qi },
  { 0x245555, CODE_FOR_vcond_mask_v16hiv16hi },
  { 0x245656, CODE_FOR_vcond_mask_v8siv8si },
  { 0x245670, CODE_FOR_vcond_mask_v8sfv8si },
  { 0x245757, CODE_FOR_vcond_mask_v4div4di },
  { 0x245771, CODE_FOR_vcond_mask_v4dfv4di },
  { 0x250f50, CODE_FOR_vec_cmpv8hiqi },
  { 0x250f51, CODE_FOR_vec_cmpv4siqi },
  { 0x250f52, CODE_FOR_vec_cmpv2diqi },
  { 0x250f56, CODE_FOR_vec_cmpv8siqi },
  { 0x250f57, CODE_FOR_vec_cmpv4diqi },
  { 0x250f5c, CODE_FOR_vec_cmpv8diqi },
  { 0x250f6b, CODE_FOR_vec_cmpv8hfqi },
  { 0x250f6c, CODE_FOR_vec_cmpv4sfqi },
  { 0x250f6d, CODE_FOR_vec_cmpv2dfqi },
  { 0x250f70, CODE_FOR_vec_cmpv8sfqi },
  { 0x250f71, CODE_FOR_vec_cmpv4dfqi },
  { 0x250f76, CODE_FOR_vec_cmpv8dfqi },
  { 0x25104f, CODE_FOR_vec_cmpv16qihi },
  { 0x251055, CODE_FOR_vec_cmpv16hihi },
  { 0x25105b, CODE_FOR_vec_cmpv16sihi },
  { 0x25106f, CODE_FOR_vec_cmpv16hfhi },
  { 0x251075, CODE_FOR_vec_cmpv16sfhi },
  { 0x251154, CODE_FOR_vec_cmpv32qisi },
  { 0x25115a, CODE_FOR_vec_cmpv32hisi },
  { 0x251174, CODE_FOR_vec_cmpv32hfsi },
  { 0x251259, CODE_FOR_vec_cmpv64qidi },
  { 0x254444, CODE_FOR_vec_cmpv2qiv2qi },
  { 0x254545, CODE_FOR_vec_cmpv4qiv4qi },
  { 0x254646, CODE_FOR_vec_cmpv2hiv2hi },
  { 0x254848, CODE_FOR_vec_cmpv8qiv8qi },
  { 0x254949, CODE_FOR_vec_cmpv4hiv4hi },
  { 0x254a4a, CODE_FOR_vec_cmpv2siv2si },
  { 0x254a68, CODE_FOR_vec_cmpv2sfv2si },
  { 0x254f4f, CODE_FOR_vec_cmpv16qiv16qi },
  { 0x255050, CODE_FOR_vec_cmpv8hiv8hi },
  { 0x255151, CODE_FOR_vec_cmpv4siv4si },
  { 0x25516c, CODE_FOR_vec_cmpv4sfv4si },
  { 0x255252, CODE_FOR_vec_cmpv2div2di },
  { 0x25526d, CODE_FOR_vec_cmpv2dfv2di },
  { 0x255454, CODE_FOR_vec_cmpv32qiv32qi },
  { 0x255555, CODE_FOR_vec_cmpv16hiv16hi },
  { 0x255656, CODE_FOR_vec_cmpv8siv8si },
  { 0x255670, CODE_FOR_vec_cmpv8sfv8si },
  { 0x255757, CODE_FOR_vec_cmpv4div4di },
  { 0x255771, CODE_FOR_vec_cmpv4dfv4di },
  { 0x260f50, CODE_FOR_vec_cmpuv8hiqi },
  { 0x260f51, CODE_FOR_vec_cmpuv4siqi },
  { 0x260f52, CODE_FOR_vec_cmpuv2diqi },
  { 0x260f56, CODE_FOR_vec_cmpuv8siqi },
  { 0x260f57, CODE_FOR_vec_cmpuv4diqi },
  { 0x260f5c, CODE_FOR_vec_cmpuv8diqi },
  { 0x26104f, CODE_FOR_vec_cmpuv16qihi },
  { 0x261055, CODE_FOR_vec_cmpuv16hihi },
  { 0x26105b, CODE_FOR_vec_cmpuv16sihi },
  { 0x261154, CODE_FOR_vec_cmpuv32qisi },
  { 0x26115a, CODE_FOR_vec_cmpuv32hisi },
  { 0x261259, CODE_FOR_vec_cmpuv64qidi },
  { 0x264444, CODE_FOR_vec_cmpuv2qiv2qi },
  { 0x264545, CODE_FOR_vec_cmpuv4qiv4qi },
  { 0x264646, CODE_FOR_vec_cmpuv2hiv2hi },
  { 0x264848, CODE_FOR_vec_cmpuv8qiv8qi },
  { 0x264949, CODE_FOR_vec_cmpuv4hiv4hi },
  { 0x264a4a, CODE_FOR_vec_cmpuv2siv2si },
  { 0x264f4f, CODE_FOR_vec_cmpuv16qiv16qi },
  { 0x265050, CODE_FOR_vec_cmpuv8hiv8hi },
  { 0x265151, CODE_FOR_vec_cmpuv4siv4si },
  { 0x265252, CODE_FOR_vec_cmpuv2div2di },
  { 0x265454, CODE_FOR_vec_cmpuv32qiv32qi },
  { 0x265555, CODE_FOR_vec_cmpuv16hiv16hi },
  { 0x265656, CODE_FOR_vec_cmpuv8siv8si },
  { 0x265757, CODE_FOR_vec_cmpuv4div4di },
  { 0x275252, CODE_FOR_vec_cmpeqv2div2di },
  { 0x275353, CODE_FOR_vec_cmpeqv1tiv1ti },
  { 0x280f50, CODE_FOR_maskloadv8hiqi },
  { 0x280f51, CODE_FOR_maskloadv4siqi },
  { 0x280f52, CODE_FOR_maskloadv2diqi },
  { 0x280f56, CODE_FOR_maskloadv8siqi },
  { 0x280f57, CODE_FOR_maskloadv4diqi },
  { 0x280f5c, CODE_FOR_maskloadv8diqi },
  { 0x280f6a, CODE_FOR_maskloadv8bfqi },
  { 0x280f6b, CODE_FOR_maskloadv8hfqi },
  { 0x280f6c, CODE_FOR_maskloadv4sfqi },
  { 0x280f6d, CODE_FOR_maskloadv2dfqi },
  { 0x280f70, CODE_FOR_maskloadv8sfqi },
  { 0x280f71, CODE_FOR_maskloadv4dfqi },
  { 0x280f76, CODE_FOR_maskloadv8dfqi },
  { 0x28104f, CODE_FOR_maskloadv16qihi },
  { 0x281055, CODE_FOR_maskloadv16hihi },
  { 0x28105b, CODE_FOR_maskloadv16sihi },
  { 0x28106e, CODE_FOR_maskloadv16bfhi },
  { 0x28106f, CODE_FOR_maskloadv16hfhi },
  { 0x281075, CODE_FOR_maskloadv16sfhi },
  { 0x281154, CODE_FOR_maskloadv32qisi },
  { 0x28115a, CODE_FOR_maskloadv32hisi },
  { 0x281173, CODE_FOR_maskloadv32bfsi },
  { 0x281174, CODE_FOR_maskloadv32hfsi },
  { 0x281259, CODE_FOR_maskloadv64qidi },
  { 0x285151, CODE_FOR_maskloadv4siv4si },
  { 0x28516c, CODE_FOR_maskloadv4sfv4si },
  { 0x285252, CODE_FOR_maskloadv2div2di },
  { 0x28526d, CODE_FOR_maskloadv2dfv2di },
  { 0x285656, CODE_FOR_maskloadv8siv8si },
  { 0x285670, CODE_FOR_maskloadv8sfv8si },
  { 0x285757, CODE_FOR_maskloadv4div4di },
  { 0x285771, CODE_FOR_maskloadv4dfv4di },
  { 0x290f50, CODE_FOR_maskstorev8hiqi },
  { 0x290f51, CODE_FOR_maskstorev4siqi },
  { 0x290f52, CODE_FOR_maskstorev2diqi },
  { 0x290f56, CODE_FOR_maskstorev8siqi },
  { 0x290f57, CODE_FOR_maskstorev4diqi },
  { 0x290f5c, CODE_FOR_maskstorev8diqi },
  { 0x290f6a, CODE_FOR_maskstorev8bfqi },
  { 0x290f6b, CODE_FOR_maskstorev8hfqi },
  { 0x290f6c, CODE_FOR_maskstorev4sfqi },
  { 0x290f6d, CODE_FOR_maskstorev2dfqi },
  { 0x290f70, CODE_FOR_maskstorev8sfqi },
  { 0x290f71, CODE_FOR_maskstorev4dfqi },
  { 0x290f76, CODE_FOR_maskstorev8dfqi },
  { 0x29104f, CODE_FOR_maskstorev16qihi },
  { 0x291055, CODE_FOR_maskstorev16hihi },
  { 0x29105b, CODE_FOR_maskstorev16sihi },
  { 0x29106e, CODE_FOR_maskstorev16bfhi },
  { 0x29106f, CODE_FOR_maskstorev16hfhi },
  { 0x291075, CODE_FOR_maskstorev16sfhi },
  { 0x291154, CODE_FOR_maskstorev32qisi },
  { 0x29115a, CODE_FOR_maskstorev32hisi },
  { 0x291173, CODE_FOR_maskstorev32bfsi },
  { 0x291174, CODE_FOR_maskstorev32hfsi },
  { 0x291259, CODE_FOR_maskstorev64qidi },
  { 0x295151, CODE_FOR_maskstorev4siv4si },
  { 0x29516c, CODE_FOR_maskstorev4sfv4si },
  { 0x295252, CODE_FOR_maskstorev2div2di },
  { 0x29526d, CODE_FOR_maskstorev2dfv2di },
  { 0x295656, CODE_FOR_maskstorev8siv8si },
  { 0x295670, CODE_FOR_maskstorev8sfv8si },
  { 0x295757, CODE_FOR_maskstorev4div4di },
  { 0x295771, CODE_FOR_maskstorev4dfv4di },
  { 0x2e0f45, CODE_FOR_vec_extractv4qiqi },
  { 0x2e0f48, CODE_FOR_vec_extractv8qiqi },
  { 0x2e0f4f, CODE_FOR_vec_extractv16qiqi },
  { 0x2e0f54, CODE_FOR_vec_extractv32qiqi },
  { 0x2e0f59, CODE_FOR_vec_extractv64qiqi },
  { 0x2e1046, CODE_FOR_vec_extractv2hihi },
  { 0x2e1049, CODE_FOR_vec_extractv4hihi },
  { 0x2e1050, CODE_FOR_vec_extractv8hihi },
  { 0x2e1055, CODE_FOR_vec_extractv16hihi },
  { 0x2e105a, CODE_FOR_vec_extractv32hihi },
  { 0x2e114a, CODE_FOR_vec_extractv2sisi },
  { 0x2e1151, CODE_FOR_vec_extractv4sisi },
  { 0x2e1156, CODE_FOR_vec_extractv8sisi },
  { 0x2e115b, CODE_FOR_vec_extractv16sisi },
  { 0x2e1252, CODE_FOR_vec_extractv2didi },
  { 0x2e1257, CODE_FOR_vec_extractv4didi },
  { 0x2e125c, CODE_FOR_vec_extractv8didi },
  { 0x2e1358, CODE_FOR_vec_extractv2titi },
  { 0x2e135d, CODE_FOR_vec_extractv4titi },
  { 0x2e2b6b, CODE_FOR_vec_extractv8hfhf },
  { 0x2e2b6f, CODE_FOR_vec_extractv16hfhf },
  { 0x2e2b74, CODE_FOR_vec_extractv32hfhf },
  { 0x2e2c6a, CODE_FOR_vec_extractv8bfbf },
  { 0x2e2c6e, CODE_FOR_vec_extractv16bfbf },
  { 0x2e2c73, CODE_FOR_vec_extractv32bfbf },
  { 0x2e2d68, CODE_FOR_vec_extractv2sfsf },
  { 0x2e2d6c, CODE_FOR_vec_extractv4sfsf },
  { 0x2e2d70, CODE_FOR_vec_extractv8sfsf },
  { 0x2e2d75, CODE_FOR_vec_extractv16sfsf },
  { 0x2e2e6d, CODE_FOR_vec_extractv2dfdf },
  { 0x2e2e71, CODE_FOR_vec_extractv4dfdf },
  { 0x2e2e76, CODE_FOR_vec_extractv8dfdf },
  { 0x2e4f54, CODE_FOR_vec_extractv32qiv16qi },
  { 0x2e5055, CODE_FOR_vec_extractv16hiv8hi },
  { 0x2e5156, CODE_FOR_vec_extractv8siv4si },
  { 0x2e5257, CODE_FOR_vec_extractv4div2di },
  { 0x2e5459, CODE_FOR_vec_extractv64qiv32qi },
  { 0x2e555a, CODE_FOR_vec_extractv32hiv16hi },
  { 0x2e565b, CODE_FOR_vec_extractv16siv8si },
  { 0x2e575c, CODE_FOR_vec_extractv8div4di },
  { 0x2e6a6e, CODE_FOR_vec_extractv16bfv8bf },
  { 0x2e6b6f, CODE_FOR_vec_extractv16hfv8hf },
  { 0x2e6c70, CODE_FOR_vec_extractv8sfv4sf },
  { 0x2e6d71, CODE_FOR_vec_extractv4dfv2df },
  { 0x2e6e73, CODE_FOR_vec_extractv32bfv16bf },
  { 0x2e6f74, CODE_FOR_vec_extractv32hfv16hf },
  { 0x2e7075, CODE_FOR_vec_extractv16sfv8sf },
  { 0x2e7176, CODE_FOR_vec_extractv8dfv4df },
  { 0x2f0f45, CODE_FOR_vec_initv4qiqi },
  { 0x2f0f48, CODE_FOR_vec_initv8qiqi },
  { 0x2f0f4f, CODE_FOR_vec_initv16qiqi },
  { 0x2f0f54, CODE_FOR_vec_initv32qiqi },
  { 0x2f0f59, CODE_FOR_vec_initv64qiqi },
  { 0x2f1046, CODE_FOR_vec_initv2hihi },
  { 0x2f1049, CODE_FOR_vec_initv4hihi },
  { 0x2f1050, CODE_FOR_vec_initv8hihi },
  { 0x2f1055, CODE_FOR_vec_initv16hihi },
  { 0x2f105a, CODE_FOR_vec_initv32hihi },
  { 0x2f114a, CODE_FOR_vec_initv2sisi },
  { 0x2f1151, CODE_FOR_vec_initv4sisi },
  { 0x2f1156, CODE_FOR_vec_initv8sisi },
  { 0x2f115b, CODE_FOR_vec_initv16sisi },
  { 0x2f1252, CODE_FOR_vec_initv2didi },
  { 0x2f1257, CODE_FOR_vec_initv4didi },
  { 0x2f125c, CODE_FOR_vec_initv8didi },
  { 0x2f1358, CODE_FOR_vec_initv2titi },
  { 0x2f135d, CODE_FOR_vec_initv4titi },
  { 0x2f2b6b, CODE_FOR_vec_initv8hfhf },
  { 0x2f2b6f, CODE_FOR_vec_initv16hfhf },
  { 0x2f2b74, CODE_FOR_vec_initv32hfhf },
  { 0x2f2c6a, CODE_FOR_vec_initv8bfbf },
  { 0x2f2c6e, CODE_FOR_vec_initv16bfbf },
  { 0x2f2c73, CODE_FOR_vec_initv32bfbf },
  { 0x2f2d68, CODE_FOR_vec_initv2sfsf },
  { 0x2f2d6c, CODE_FOR_vec_initv4sfsf },
  { 0x2f2d70, CODE_FOR_vec_initv8sfsf },
  { 0x2f2d75, CODE_FOR_vec_initv16sfsf },
  { 0x2f2e6d, CODE_FOR_vec_initv2dfdf },
  { 0x2f2e71, CODE_FOR_vec_initv4dfdf },
  { 0x2f2e76, CODE_FOR_vec_initv8dfdf },
  { 0x2f484f, CODE_FOR_vec_initv16qiv8qi },
  { 0x2f4950, CODE_FOR_vec_initv8hiv4hi },
  { 0x2f4a51, CODE_FOR_vec_initv4siv2si },
  { 0x2f4f54, CODE_FOR_vec_initv32qiv16qi },
  { 0x2f5055, CODE_FOR_vec_initv16hiv8hi },
  { 0x2f5156, CODE_FOR_vec_initv8siv4si },
  { 0x2f5257, CODE_FOR_vec_initv4div2di },
  { 0x2f5459, CODE_FOR_vec_initv64qiv32qi },
  { 0x2f555a, CODE_FOR_vec_initv32hiv16hi },
  { 0x2f565b, CODE_FOR_vec_initv16siv8si },
  { 0x2f575c, CODE_FOR_vec_initv8div4di },
  { 0x2f585d, CODE_FOR_vec_initv4tiv2ti },
  { 0x2f666a, CODE_FOR_vec_initv8bfv4bf },
  { 0x2f676b, CODE_FOR_vec_initv8hfv4hf },
  { 0x2f686c, CODE_FOR_vec_initv4sfv2sf },
  { 0x2f6a6e, CODE_FOR_vec_initv16bfv8bf },
  { 0x2f6b6f, CODE_FOR_vec_initv16hfv8hf },
  { 0x2f6c70, CODE_FOR_vec_initv8sfv4sf },
  { 0x2f6d71, CODE_FOR_vec_initv4dfv2df },
  { 0x2f6e73, CODE_FOR_vec_initv32bfv16bf },
  { 0x2f6f74, CODE_FOR_vec_initv32hfv16hf },
  { 0x2f7075, CODE_FOR_vec_initv16sfv8sf },
  { 0x2f7176, CODE_FOR_vec_initv8dfv4df },
  { 0x31000f, CODE_FOR_addqi3 },
  { 0x310010, CODE_FOR_addhi3 },
  { 0x310011, CODE_FOR_addsi3 },
  { 0x310012, CODE_FOR_adddi3 },
  { 0x310013, CODE_FOR_addti3 },
  { 0x31002b, CODE_FOR_addhf3 },
  { 0x31002d, CODE_FOR_addsf3 },
  { 0x31002e, CODE_FOR_adddf3 },
  { 0x31002f, CODE_FOR_addxf3 },
  { 0x310044, CODE_FOR_addv2qi3 },
  { 0x310045, CODE_FOR_addv4qi3 },
  { 0x310046, CODE_FOR_addv2hi3 },
  { 0x310048, CODE_FOR_addv8qi3 },
  { 0x310049, CODE_FOR_addv4hi3 },
  { 0x31004a, CODE_FOR_addv2si3 },
  { 0x31004f, CODE_FOR_addv16qi3 },
  { 0x310050, CODE_FOR_addv8hi3 },
  { 0x310051, CODE_FOR_addv4si3 },
  { 0x310052, CODE_FOR_addv2di3 },
  { 0x310054, CODE_FOR_addv32qi3 },
  { 0x310055, CODE_FOR_addv16hi3 },
  { 0x310056, CODE_FOR_addv8si3 },
  { 0x310057, CODE_FOR_addv4di3 },
  { 0x310059, CODE_FOR_addv64qi3 },
  { 0x31005a, CODE_FOR_addv32hi3 },
  { 0x31005b, CODE_FOR_addv16si3 },
  { 0x31005c, CODE_FOR_addv8di3 },
  { 0x310064, CODE_FOR_addv2hf3 },
  { 0x310067, CODE_FOR_addv4hf3 },
  { 0x310068, CODE_FOR_addv2sf3 },
  { 0x31006b, CODE_FOR_addv8hf3 },
  { 0x31006c, CODE_FOR_addv4sf3 },
  { 0x31006d, CODE_FOR_addv2df3 },
  { 0x31006f, CODE_FOR_addv16hf3 },
  { 0x310070, CODE_FOR_addv8sf3 },
  { 0x310071, CODE_FOR_addv4df3 },
  { 0x310074, CODE_FOR_addv32hf3 },
  { 0x310075, CODE_FOR_addv16sf3 },
  { 0x310076, CODE_FOR_addv8df3 },
  { 0x35000f, CODE_FOR_subqi3 },
  { 0x350010, CODE_FOR_subhi3 },
  { 0x350011, CODE_FOR_subsi3 },
  { 0x350012, CODE_FOR_subdi3 },
  { 0x350013, CODE_FOR_subti3 },
  { 0x35002b, CODE_FOR_subhf3 },
  { 0x35002d, CODE_FOR_subsf3 },
  { 0x35002e, CODE_FOR_subdf3 },
  { 0x35002f, CODE_FOR_subxf3 },
  { 0x350044, CODE_FOR_subv2qi3 },
  { 0x350045, CODE_FOR_subv4qi3 },
  { 0x350046, CODE_FOR_subv2hi3 },
  { 0x350048, CODE_FOR_subv8qi3 },
  { 0x350049, CODE_FOR_subv4hi3 },
  { 0x35004a, CODE_FOR_subv2si3 },
  { 0x35004f, CODE_FOR_subv16qi3 },
  { 0x350050, CODE_FOR_subv8hi3 },
  { 0x350051, CODE_FOR_subv4si3 },
  { 0x350052, CODE_FOR_subv2di3 },
  { 0x350054, CODE_FOR_subv32qi3 },
  { 0x350055, CODE_FOR_subv16hi3 },
  { 0x350056, CODE_FOR_subv8si3 },
  { 0x350057, CODE_FOR_subv4di3 },
  { 0x350059, CODE_FOR_subv64qi3 },
  { 0x35005a, CODE_FOR_subv32hi3 },
  { 0x35005b, CODE_FOR_subv16si3 },
  { 0x35005c, CODE_FOR_subv8di3 },
  { 0x350064, CODE_FOR_subv2hf3 },
  { 0x350067, CODE_FOR_subv4hf3 },
  { 0x350068, CODE_FOR_subv2sf3 },
  { 0x35006b, CODE_FOR_subv8hf3 },
  { 0x35006c, CODE_FOR_subv4sf3 },
  { 0x35006d, CODE_FOR_subv2df3 },
  { 0x35006f, CODE_FOR_subv16hf3 },
  { 0x350070, CODE_FOR_subv8sf3 },
  { 0x350071, CODE_FOR_subv4df3 },
  { 0x350074, CODE_FOR_subv32hf3 },
  { 0x350075, CODE_FOR_subv16sf3 },
  { 0x350076, CODE_FOR_subv8df3 },
  { 0x39000f, CODE_FOR_mulqi3 },
  { 0x390010, CODE_FOR_mulhi3 },
  { 0x390011, CODE_FOR_mulsi3 },
  { 0x390012, CODE_FOR_muldi3 },
  { 0x39002b, CODE_FOR_mulhf3 },
  { 0x39002d, CODE_FOR_mulsf3 },
  { 0x39002e, CODE_FOR_muldf3 },
  { 0x39002f, CODE_FOR_mulxf3 },
  { 0x390046, CODE_FOR_mulv2hi3 },
  { 0x390048, CODE_FOR_mulv8qi3 },
  { 0x390049, CODE_FOR_mulv4hi3 },
  { 0x39004f, CODE_FOR_mulv16qi3 },
  { 0x390050, CODE_FOR_mulv8hi3 },
  { 0x390051, CODE_FOR_mulv4si3 },
  { 0x390052, CODE_FOR_mulv2di3 },
  { 0x390054, CODE_FOR_mulv32qi3 },
  { 0x390055, CODE_FOR_mulv16hi3 },
  { 0x390056, CODE_FOR_mulv8si3 },
  { 0x390057, CODE_FOR_mulv4di3 },
  { 0x390059, CODE_FOR_mulv64qi3 },
  { 0x39005a, CODE_FOR_mulv32hi3 },
  { 0x39005b, CODE_FOR_mulv16si3 },
  { 0x39005c, CODE_FOR_mulv8di3 },
  { 0x390064, CODE_FOR_mulv2hf3 },
  { 0x390067, CODE_FOR_mulv4hf3 },
  { 0x390068, CODE_FOR_mulv2sf3 },
  { 0x39006b, CODE_FOR_mulv8hf3 },
  { 0x39006c, CODE_FOR_mulv4sf3 },
  { 0x39006d, CODE_FOR_mulv2df3 },
  { 0x39006f, CODE_FOR_mulv16hf3 },
  { 0x390070, CODE_FOR_mulv8sf3 },
  { 0x390071, CODE_FOR_mulv4df3 },
  { 0x390074, CODE_FOR_mulv32hf3 },
  { 0x390075, CODE_FOR_mulv16sf3 },
  { 0x390076, CODE_FOR_mulv8df3 },
  { 0x3d002b, CODE_FOR_divhf3 },
  { 0x3d002d, CODE_FOR_divsf3 },
  { 0x3d002e, CODE_FOR_divdf3 },
  { 0x3d002f, CODE_FOR_divxf3 },
  { 0x3d0064, CODE_FOR_divv2hf3 },
  { 0x3d0067, CODE_FOR_divv4hf3 },
  { 0x3d0068, CODE_FOR_divv2sf3 },
  { 0x3d006b, CODE_FOR_divv8hf3 },
  { 0x3d006c, CODE_FOR_divv4sf3 },
  { 0x3d006d, CODE_FOR_divv2df3 },
  { 0x3d006f, CODE_FOR_divv16hf3 },
  { 0x3d0070, CODE_FOR_divv8sf3 },
  { 0x3d0071, CODE_FOR_divv4df3 },
  { 0x3d0074, CODE_FOR_divv32hf3 },
  { 0x3d0075, CODE_FOR_divv16sf3 },
  { 0x3d0076, CODE_FOR_divv8df3 },
  { 0x42000f, CODE_FOR_divmodqi4 },
  { 0x420010, CODE_FOR_divmodhi4 },
  { 0x420011, CODE_FOR_divmodsi4 },
  { 0x420012, CODE_FOR_divmoddi4 },
  { 0x43000f, CODE_FOR_udivmodqi4 },
  { 0x430010, CODE_FOR_udivmodhi4 },
  { 0x430011, CODE_FOR_udivmodsi4 },
  { 0x430012, CODE_FOR_udivmoddi4 },
  { 0x47000f, CODE_FOR_andqi3 },
  { 0x470010, CODE_FOR_andhi3 },
  { 0x470011, CODE_FOR_andsi3 },
  { 0x470012, CODE_FOR_anddi3 },
  { 0x470013, CODE_FOR_andti3 },
  { 0x47002d, CODE_FOR_andsf3 },
  { 0x47002e, CODE_FOR_anddf3 },
  { 0x470030, CODE_FOR_andtf3 },
  { 0x470044, CODE_FOR_andv2qi3 },
  { 0x470045, CODE_FOR_andv4qi3 },
  { 0x470046, CODE_FOR_andv2hi3 },
  { 0x470048, CODE_FOR_andv8qi3 },
  { 0x470049, CODE_FOR_andv4hi3 },
  { 0x47004a, CODE_FOR_andv2si3 },
  { 0x47004f, CODE_FOR_andv16qi3 },
  { 0x470050, CODE_FOR_andv8hi3 },
  { 0x470051, CODE_FOR_andv4si3 },
  { 0x470052, CODE_FOR_andv2di3 },
  { 0x470053, CODE_FOR_andv1ti3 },
  { 0x470054, CODE_FOR_andv32qi3 },
  { 0x470055, CODE_FOR_andv16hi3 },
  { 0x470056, CODE_FOR_andv8si3 },
  { 0x470057, CODE_FOR_andv4di3 },
  { 0x470059, CODE_FOR_andv64qi3 },
  { 0x47005a, CODE_FOR_andv32hi3 },
  { 0x47005b, CODE_FOR_andv16si3 },
  { 0x47005c, CODE_FOR_andv8di3 },
  { 0x470068, CODE_FOR_andv2sf3 },
  { 0x47006b, CODE_FOR_andv8hf3 },
  { 0x47006c, CODE_FOR_andv4sf3 },
  { 0x47006d, CODE_FOR_andv2df3 },
  { 0x47006f, CODE_FOR_andv16hf3 },
  { 0x470070, CODE_FOR_andv8sf3 },
  { 0x470071, CODE_FOR_andv4df3 },
  { 0x470074, CODE_FOR_andv32hf3 },
  { 0x470075, CODE_FOR_andv16sf3 },
  { 0x470076, CODE_FOR_andv8df3 },
  { 0x48000f, CODE_FOR_iorqi3 },
  { 0x480010, CODE_FOR_iorhi3 },
  { 0x480011, CODE_FOR_iorsi3 },
  { 0x480012, CODE_FOR_iordi3 },
  { 0x480013, CODE_FOR_iorti3 },
  { 0x48002d, CODE_FOR_iorsf3 },
  { 0x48002e, CODE_FOR_iordf3 },
  { 0x480030, CODE_FOR_iortf3 },
  { 0x480044, CODE_FOR_iorv2qi3 },
  { 0x480045, CODE_FOR_iorv4qi3 },
  { 0x480046, CODE_FOR_iorv2hi3 },
  { 0x480048, CODE_FOR_iorv8qi3 },
  { 0x480049, CODE_FOR_iorv4hi3 },
  { 0x48004a, CODE_FOR_iorv2si3 },
  { 0x48004f, CODE_FOR_iorv16qi3 },
  { 0x480050, CODE_FOR_iorv8hi3 },
  { 0x480051, CODE_FOR_iorv4si3 },
  { 0x480052, CODE_FOR_iorv2di3 },
  { 0x480053, CODE_FOR_iorv1ti3 },
  { 0x480054, CODE_FOR_iorv32qi3 },
  { 0x480055, CODE_FOR_iorv16hi3 },
  { 0x480056, CODE_FOR_iorv8si3 },
  { 0x480057, CODE_FOR_iorv4di3 },
  { 0x480059, CODE_FOR_iorv64qi3 },
  { 0x48005a, CODE_FOR_iorv32hi3 },
  { 0x48005b, CODE_FOR_iorv16si3 },
  { 0x48005c, CODE_FOR_iorv8di3 },
  { 0x480068, CODE_FOR_iorv2sf3 },
  { 0x48006b, CODE_FOR_iorv8hf3 },
  { 0x48006c, CODE_FOR_iorv4sf3 },
  { 0x48006d, CODE_FOR_iorv2df3 },
  { 0x48006f, CODE_FOR_iorv16hf3 },
  { 0x480070, CODE_FOR_iorv8sf3 },
  { 0x480071, CODE_FOR_iorv4df3 },
  { 0x480074, CODE_FOR_iorv32hf3 },
  { 0x480075, CODE_FOR_iorv16sf3 },
  { 0x480076, CODE_FOR_iorv8df3 },
  { 0x49000f, CODE_FOR_xorqi3 },
  { 0x490010, CODE_FOR_xorhi3 },
  { 0x490011, CODE_FOR_xorsi3 },
  { 0x490012, CODE_FOR_xordi3 },
  { 0x490013, CODE_FOR_xorti3 },
  { 0x49002d, CODE_FOR_xorsf3 },
  { 0x49002e, CODE_FOR_xordf3 },
  { 0x490030, CODE_FOR_xortf3 },
  { 0x490044, CODE_FOR_xorv2qi3 },
  { 0x490045, CODE_FOR_xorv4qi3 },
  { 0x490046, CODE_FOR_xorv2hi3 },
  { 0x490048, CODE_FOR_xorv8qi3 },
  { 0x490049, CODE_FOR_xorv4hi3 },
  { 0x49004a, CODE_FOR_xorv2si3 },
  { 0x49004f, CODE_FOR_xorv16qi3 },
  { 0x490050, CODE_FOR_xorv8hi3 },
  { 0x490051, CODE_FOR_xorv4si3 },
  { 0x490052, CODE_FOR_xorv2di3 },
  { 0x490053, CODE_FOR_xorv1ti3 },
  { 0x490054, CODE_FOR_xorv32qi3 },
  { 0x490055, CODE_FOR_xorv16hi3 },
  { 0x490056, CODE_FOR_xorv8si3 },
  { 0x490057, CODE_FOR_xorv4di3 },
  { 0x490059, CODE_FOR_xorv64qi3 },
  { 0x49005a, CODE_FOR_xorv32hi3 },
  { 0x49005b, CODE_FOR_xorv16si3 },
  { 0x49005c, CODE_FOR_xorv8di3 },
  { 0x490068, CODE_FOR_xorv2sf3 },
  { 0x49006b, CODE_FOR_xorv8hf3 },
  { 0x49006c, CODE_FOR_xorv4sf3 },
  { 0x49006d, CODE_FOR_xorv2df3 },
  { 0x49006f, CODE_FOR_xorv16hf3 },
  { 0x490070, CODE_FOR_xorv8sf3 },
  { 0x490071, CODE_FOR_xorv4df3 },
  { 0x490074, CODE_FOR_xorv32hf3 },
  { 0x490075, CODE_FOR_xorv16sf3 },
  { 0x490076, CODE_FOR_xorv8df3 },
  { 0x4a000f, CODE_FOR_ashlqi3 },
  { 0x4a0010, CODE_FOR_ashlhi3 },
  { 0x4a0011, CODE_FOR_ashlsi3 },
  { 0x4a0012, CODE_FOR_ashldi3 },
  { 0x4a0013, CODE_FOR_ashlti3 },
  { 0x4a0044, CODE_FOR_ashlv2qi3 },
  { 0x4a0046, CODE_FOR_ashlv2hi3 },
  { 0x4a0049, CODE_FOR_ashlv4hi3 },
  { 0x4a004a, CODE_FOR_ashlv2si3 },
  { 0x4a004f, CODE_FOR_ashlv16qi3 },
  { 0x4a0050, CODE_FOR_ashlv8hi3 },
  { 0x4a0051, CODE_FOR_ashlv4si3 },
  { 0x4a0052, CODE_FOR_ashlv2di3 },
  { 0x4a0053, CODE_FOR_ashlv1ti3 },
  { 0x4a0054, CODE_FOR_ashlv32qi3 },
  { 0x4a0055, CODE_FOR_ashlv16hi3 },
  { 0x4a0056, CODE_FOR_ashlv8si3 },
  { 0x4a0057, CODE_FOR_ashlv4di3 },
  { 0x4a0059, CODE_FOR_ashlv64qi3 },
  { 0x4a005a, CODE_FOR_ashlv32hi3 },
  { 0x4a005b, CODE_FOR_ashlv16si3 },
  { 0x4a005c, CODE_FOR_ashlv8di3 },
  { 0x4d000f, CODE_FOR_ashrqi3 },
  { 0x4d0010, CODE_FOR_ashrhi3 },
  { 0x4d0011, CODE_FOR_ashrsi3 },
  { 0x4d0012, CODE_FOR_ashrdi3 },
  { 0x4d0013, CODE_FOR_ashrti3 },
  { 0x4d0044, CODE_FOR_ashrv2qi3 },
  { 0x4d0046, CODE_FOR_ashrv2hi3 },
  { 0x4d0049, CODE_FOR_ashrv4hi3 },
  { 0x4d004a, CODE_FOR_ashrv2si3 },
  { 0x4d004f, CODE_FOR_ashrv16qi3 },
  { 0x4d0050, CODE_FOR_ashrv8hi3 },
  { 0x4d0051, CODE_FOR_ashrv4si3 },
  { 0x4d0052, CODE_FOR_ashrv2di3 },
  { 0x4d0053, CODE_FOR_ashrv1ti3 },
  { 0x4d0054, CODE_FOR_ashrv32qi3 },
  { 0x4d0055, CODE_FOR_ashrv16hi3 },
  { 0x4d0056, CODE_FOR_ashrv8si3 },
  { 0x4d0057, CODE_FOR_ashrv4di3 },
  { 0x4d0059, CODE_FOR_ashrv64qi3 },
  { 0x4d005a, CODE_FOR_ashrv32hi3 },
  { 0x4d005b, CODE_FOR_ashrv16si3 },
  { 0x4d005c, CODE_FOR_ashrv8di3 },
  { 0x4e000f, CODE_FOR_lshrqi3 },
  { 0x4e0010, CODE_FOR_lshrhi3 },
  { 0x4e0011, CODE_FOR_lshrsi3 },
  { 0x4e0012, CODE_FOR_lshrdi3 },
  { 0x4e0013, CODE_FOR_lshrti3 },
  { 0x4e0044, CODE_FOR_lshrv2qi3 },
  { 0x4e0046, CODE_FOR_lshrv2hi3 },
  { 0x4e0049, CODE_FOR_lshrv4hi3 },
  { 0x4e004a, CODE_FOR_lshrv2si3 },
  { 0x4e004f, CODE_FOR_lshrv16qi3 },
  { 0x4e0050, CODE_FOR_lshrv8hi3 },
  { 0x4e0051, CODE_FOR_lshrv4si3 },
  { 0x4e0052, CODE_FOR_lshrv2di3 },
  { 0x4e0053, CODE_FOR_lshrv1ti3 },
  { 0x4e0054, CODE_FOR_lshrv32qi3 },
  { 0x4e0055, CODE_FOR_lshrv16hi3 },
  { 0x4e0056, CODE_FOR_lshrv8si3 },
  { 0x4e0057, CODE_FOR_lshrv4di3 },
  { 0x4e0059, CODE_FOR_lshrv64qi3 },
  { 0x4e005a, CODE_FOR_lshrv32hi3 },
  { 0x4e005b, CODE_FOR_lshrv16si3 },
  { 0x4e005c, CODE_FOR_lshrv8di3 },
  { 0x4f000f, CODE_FOR_rotlqi3 },
  { 0x4f0010, CODE_FOR_rotlhi3 },
  { 0x4f0011, CODE_FOR_rotlsi3 },
  { 0x4f0012, CODE_FOR_rotldi3 },
  { 0x4f0013, CODE_FOR_rotlti3 },
  { 0x4f004f, CODE_FOR_rotlv16qi3 },
  { 0x4f0050, CODE_FOR_rotlv8hi3 },
  { 0x4f0051, CODE_FOR_rotlv4si3 },
  { 0x4f0052, CODE_FOR_rotlv2di3 },
  { 0x4f0053, CODE_FOR_rotlv1ti3 },
  { 0x50000f, CODE_FOR_rotrqi3 },
  { 0x500010, CODE_FOR_rotrhi3 },
  { 0x500011, CODE_FOR_rotrsi3 },
  { 0x500012, CODE_FOR_rotrdi3 },
  { 0x500013, CODE_FOR_rotrti3 },
  { 0x50004f, CODE_FOR_rotrv16qi3 },
  { 0x500050, CODE_FOR_rotrv8hi3 },
  { 0x500051, CODE_FOR_rotrv4si3 },
  { 0x500052, CODE_FOR_rotrv2di3 },
  { 0x500053, CODE_FOR_rotrv1ti3 },
  { 0x510048, CODE_FOR_vashlv8qi3 },
  { 0x51004f, CODE_FOR_vashlv16qi3 },
  { 0x510050, CODE_FOR_vashlv8hi3 },
  { 0x510051, CODE_FOR_vashlv4si3 },
  { 0x510052, CODE_FOR_vashlv2di3 },
  { 0x510054, CODE_FOR_vashlv32qi3 },
  { 0x510055, CODE_FOR_vashlv16hi3 },
  { 0x510056, CODE_FOR_vashlv8si3 },
  { 0x510057, CODE_FOR_vashlv4di3 },
  { 0x510059, CODE_FOR_vashlv64qi3 },
  { 0x51005a, CODE_FOR_vashlv32hi3 },
  { 0x51005b, CODE_FOR_vashlv16si3 },
  { 0x51005c, CODE_FOR_vashlv8di3 },
  { 0x520048, CODE_FOR_vashrv8qi3 },
  { 0x52004f, CODE_FOR_vashrv16qi3 },
  { 0x520050, CODE_FOR_vashrv8hi3 },
  { 0x520051, CODE_FOR_vashrv4si3 },
  { 0x520052, CODE_FOR_vashrv2di3 },
  { 0x520054, CODE_FOR_vashrv32qi3 },
  { 0x520055, CODE_FOR_vashrv16hi3 },
  { 0x520056, CODE_FOR_vashrv8si3 },
  { 0x520057, CODE_FOR_vashrv4di3 },
  { 0x520059, CODE_FOR_vashrv64qi3 },
  { 0x52005a, CODE_FOR_vashrv32hi3 },
  { 0x52005b, CODE_FOR_vashrv16si3 },
  { 0x52005c, CODE_FOR_vashrv8di3 },
  { 0x530048, CODE_FOR_vlshrv8qi3 },
  { 0x53004f, CODE_FOR_vlshrv16qi3 },
  { 0x530050, CODE_FOR_vlshrv8hi3 },
  { 0x530051, CODE_FOR_vlshrv4si3 },
  { 0x530052, CODE_FOR_vlshrv2di3 },
  { 0x530054, CODE_FOR_vlshrv32qi3 },
  { 0x530055, CODE_FOR_vlshrv16hi3 },
  { 0x530056, CODE_FOR_vlshrv8si3 },
  { 0x530057, CODE_FOR_vlshrv4di3 },
  { 0x530059, CODE_FOR_vlshrv64qi3 },
  { 0x53005a, CODE_FOR_vlshrv32hi3 },
  { 0x53005b, CODE_FOR_vlshrv16si3 },
  { 0x53005c, CODE_FOR_vlshrv8di3 },
  { 0x54004f, CODE_FOR_vrotlv16qi3 },
  { 0x540050, CODE_FOR_vrotlv8hi3 },
  { 0x540051, CODE_FOR_vrotlv4si3 },
  { 0x540052, CODE_FOR_vrotlv2di3 },
  { 0x55004f, CODE_FOR_vrotrv16qi3 },
  { 0x550050, CODE_FOR_vrotrv8hi3 },
  { 0x550051, CODE_FOR_vrotrv4si3 },
  { 0x550052, CODE_FOR_vrotrv2di3 },
  { 0x56000f, CODE_FOR_sminqi3 },
  { 0x560010, CODE_FOR_sminhi3 },
  { 0x560011, CODE_FOR_sminsi3 },
  { 0x560012, CODE_FOR_smindi3 },
  { 0x560013, CODE_FOR_sminti3 },
  { 0x56002b, CODE_FOR_sminhf3 },
  { 0x56002d, CODE_FOR_sminsf3 },
  { 0x56002e, CODE_FOR_smindf3 },
  { 0x560044, CODE_FOR_sminv2qi3 },
  { 0x560045, CODE_FOR_sminv4qi3 },
  { 0x560046, CODE_FOR_sminv2hi3 },
  { 0x560048, CODE_FOR_sminv8qi3 },
  { 0x560049, CODE_FOR_sminv4hi3 },
  { 0x56004a, CODE_FOR_sminv2si3 },
  { 0x56004f, CODE_FOR_sminv16qi3 },
  { 0x560050, CODE_FOR_sminv8hi3 },
  { 0x560051, CODE_FOR_sminv4si3 },
  { 0x560052, CODE_FOR_sminv2di3 },
  { 0x560054, CODE_FOR_sminv32qi3 },
  { 0x560055, CODE_FOR_sminv16hi3 },
  { 0x560056, CODE_FOR_sminv8si3 },
  { 0x560057, CODE_FOR_sminv4di3 },
  { 0x560059, CODE_FOR_sminv64qi3 },
  { 0x56005a, CODE_FOR_sminv32hi3 },
  { 0x56005b, CODE_FOR_sminv16si3 },
  { 0x56005c, CODE_FOR_sminv8di3 },
  { 0x560068, CODE_FOR_sminv2sf3 },
  { 0x56006b, CODE_FOR_sminv8hf3 },
  { 0x56006c, CODE_FOR_sminv4sf3 },
  { 0x56006d, CODE_FOR_sminv2df3 },
  { 0x56006f, CODE_FOR_sminv16hf3 },
  { 0x560070, CODE_FOR_sminv8sf3 },
  { 0x560071, CODE_FOR_sminv4df3 },
  { 0x560074, CODE_FOR_sminv32hf3 },
  { 0x560075, CODE_FOR_sminv16sf3 },
  { 0x560076, CODE_FOR_sminv8df3 },
  { 0x57000f, CODE_FOR_smaxqi3 },
  { 0x570010, CODE_FOR_smaxhi3 },
  { 0x570011, CODE_FOR_smaxsi3 },
  { 0x570012, CODE_FOR_smaxdi3 },
  { 0x570013, CODE_FOR_smaxti3 },
  { 0x57002b, CODE_FOR_smaxhf3 },
  { 0x57002d, CODE_FOR_smaxsf3 },
  { 0x57002e, CODE_FOR_smaxdf3 },
  { 0x570044, CODE_FOR_smaxv2qi3 },
  { 0x570045, CODE_FOR_smaxv4qi3 },
  { 0x570046, CODE_FOR_smaxv2hi3 },
  { 0x570048, CODE_FOR_smaxv8qi3 },
  { 0x570049, CODE_FOR_smaxv4hi3 },
  { 0x57004a, CODE_FOR_smaxv2si3 },
  { 0x57004f, CODE_FOR_smaxv16qi3 },
  { 0x570050, CODE_FOR_smaxv8hi3 },
  { 0x570051, CODE_FOR_smaxv4si3 },
  { 0x570052, CODE_FOR_smaxv2di3 },
  { 0x570054, CODE_FOR_smaxv32qi3 },
  { 0x570055, CODE_FOR_smaxv16hi3 },
  { 0x570056, CODE_FOR_smaxv8si3 },
  { 0x570057, CODE_FOR_smaxv4di3 },
  { 0x570059, CODE_FOR_smaxv64qi3 },
  { 0x57005a, CODE_FOR_smaxv32hi3 },
  { 0x57005b, CODE_FOR_smaxv16si3 },
  { 0x57005c, CODE_FOR_smaxv8di3 },
  { 0x570068, CODE_FOR_smaxv2sf3 },
  { 0x57006b, CODE_FOR_smaxv8hf3 },
  { 0x57006c, CODE_FOR_smaxv4sf3 },
  { 0x57006d, CODE_FOR_smaxv2df3 },
  { 0x57006f, CODE_FOR_smaxv16hf3 },
  { 0x570070, CODE_FOR_smaxv8sf3 },
  { 0x570071, CODE_FOR_smaxv4df3 },
  { 0x570074, CODE_FOR_smaxv32hf3 },
  { 0x570075, CODE_FOR_smaxv16sf3 },
  { 0x570076, CODE_FOR_smaxv8df3 },
  { 0x58000f, CODE_FOR_uminqi3 },
  { 0x580010, CODE_FOR_uminhi3 },
  { 0x580011, CODE_FOR_uminsi3 },
  { 0x580012, CODE_FOR_umindi3 },
  { 0x580013, CODE_FOR_uminti3 },
  { 0x580044, CODE_FOR_uminv2qi3 },
  { 0x580045, CODE_FOR_uminv4qi3 },
  { 0x580046, CODE_FOR_uminv2hi3 },
  { 0x580048, CODE_FOR_uminv8qi3 },
  { 0x580049, CODE_FOR_uminv4hi3 },
  { 0x58004a, CODE_FOR_uminv2si3 },
  { 0x58004f, CODE_FOR_uminv16qi3 },
  { 0x580050, CODE_FOR_uminv8hi3 },
  { 0x580051, CODE_FOR_uminv4si3 },
  { 0x580052, CODE_FOR_uminv2di3 },
  { 0x580054, CODE_FOR_uminv32qi3 },
  { 0x580055, CODE_FOR_uminv16hi3 },
  { 0x580056, CODE_FOR_uminv8si3 },
  { 0x580057, CODE_FOR_uminv4di3 },
  { 0x580059, CODE_FOR_uminv64qi3 },
  { 0x58005a, CODE_FOR_uminv32hi3 },
  { 0x58005b, CODE_FOR_uminv16si3 },
  { 0x58005c, CODE_FOR_uminv8di3 },
  { 0x59000f, CODE_FOR_umaxqi3 },
  { 0x590010, CODE_FOR_umaxhi3 },
  { 0x590011, CODE_FOR_umaxsi3 },
  { 0x590012, CODE_FOR_umaxdi3 },
  { 0x590013, CODE_FOR_umaxti3 },
  { 0x590044, CODE_FOR_umaxv2qi3 },
  { 0x590045, CODE_FOR_umaxv4qi3 },
  { 0x590046, CODE_FOR_umaxv2hi3 },
  { 0x590048, CODE_FOR_umaxv8qi3 },
  { 0x590049, CODE_FOR_umaxv4hi3 },
  { 0x59004a, CODE_FOR_umaxv2si3 },
  { 0x59004f, CODE_FOR_umaxv16qi3 },
  { 0x590050, CODE_FOR_umaxv8hi3 },
  { 0x590051, CODE_FOR_umaxv4si3 },
  { 0x590052, CODE_FOR_umaxv2di3 },
  { 0x590054, CODE_FOR_umaxv32qi3 },
  { 0x590055, CODE_FOR_umaxv16hi3 },
  { 0x590056, CODE_FOR_umaxv8si3 },
  { 0x590057, CODE_FOR_umaxv4di3 },
  { 0x590059, CODE_FOR_umaxv64qi3 },
  { 0x59005a, CODE_FOR_umaxv32hi3 },
  { 0x59005b, CODE_FOR_umaxv16si3 },
  { 0x59005c, CODE_FOR_umaxv8di3 },
  { 0x5a000f, CODE_FOR_negqi2 },
  { 0x5a0010, CODE_FOR_neghi2 },
  { 0x5a0011, CODE_FOR_negsi2 },
  { 0x5a0012, CODE_FOR_negdi2 },
  { 0x5a0013, CODE_FOR_negti2 },
  { 0x5a002b, CODE_FOR_neghf2 },
  { 0x5a002d, CODE_FOR_negsf2 },
  { 0x5a002e, CODE_FOR_negdf2 },
  { 0x5a002f, CODE_FOR_negxf2 },
  { 0x5a0030, CODE_FOR_negtf2 },
  { 0x5a0044, CODE_FOR_negv2qi2 },
  { 0x5a0045, CODE_FOR_negv4qi2 },
  { 0x5a0046, CODE_FOR_negv2hi2 },
  { 0x5a0048, CODE_FOR_negv8qi2 },
  { 0x5a0049, CODE_FOR_negv4hi2 },
  { 0x5a004a, CODE_FOR_negv2si2 },
  { 0x5a004f, CODE_FOR_negv16qi2 },
  { 0x5a0050, CODE_FOR_negv8hi2 },
  { 0x5a0051, CODE_FOR_negv4si2 },
  { 0x5a0052, CODE_FOR_negv2di2 },
  { 0x5a0054, CODE_FOR_negv32qi2 },
  { 0x5a0055, CODE_FOR_negv16hi2 },
  { 0x5a0056, CODE_FOR_negv8si2 },
  { 0x5a0057, CODE_FOR_negv4di2 },
  { 0x5a0059, CODE_FOR_negv64qi2 },
  { 0x5a005a, CODE_FOR_negv32hi2 },
  { 0x5a005b, CODE_FOR_negv16si2 },
  { 0x5a005c, CODE_FOR_negv8di2 },
  { 0x5a0068, CODE_FOR_negv2sf2 },
  { 0x5a006b, CODE_FOR_negv8hf2 },
  { 0x5a006c, CODE_FOR_negv4sf2 },
  { 0x5a006d, CODE_FOR_negv2df2 },
  { 0x5a006f, CODE_FOR_negv16hf2 },
  { 0x5a0070, CODE_FOR_negv8sf2 },
  { 0x5a0071, CODE_FOR_negv4df2 },
  { 0x5a0074, CODE_FOR_negv32hf2 },
  { 0x5a0075, CODE_FOR_negv16sf2 },
  { 0x5a0076, CODE_FOR_negv8df2 },
  { 0x5e000f, CODE_FOR_absqi2 },
  { 0x5e0010, CODE_FOR_abshi2 },
  { 0x5e0011, CODE_FOR_abssi2 },
  { 0x5e0012, CODE_FOR_absdi2 },
  { 0x5e0013, CODE_FOR_absti2 },
  { 0x5e002b, CODE_FOR_abshf2 },
  { 0x5e002d, CODE_FOR_abssf2 },
  { 0x5e002e, CODE_FOR_absdf2 },
  { 0x5e002f, CODE_FOR_absxf2 },
  { 0x5e0030, CODE_FOR_abstf2 },
  { 0x5e0044, CODE_FOR_absv2qi2 },
  { 0x5e0045, CODE_FOR_absv4qi2 },
  { 0x5e0046, CODE_FOR_absv2hi2 },
  { 0x5e0048, CODE_FOR_absv8qi2 },
  { 0x5e0049, CODE_FOR_absv4hi2 },
  { 0x5e004a, CODE_FOR_absv2si2 },
  { 0x5e004f, CODE_FOR_absv16qi2 },
  { 0x5e0050, CODE_FOR_absv8hi2 },
  { 0x5e0051, CODE_FOR_absv4si2 },
  { 0x5e0052, CODE_FOR_absv2di2 },
  { 0x5e0054, CODE_FOR_absv32qi2 },
  { 0x5e0055, CODE_FOR_absv16hi2 },
  { 0x5e0056, CODE_FOR_absv8si2 },
  { 0x5e0057, CODE_FOR_absv4di2 },
  { 0x5e0059, CODE_FOR_absv64qi2 },
  { 0x5e005a, CODE_FOR_absv32hi2 },
  { 0x5e005b, CODE_FOR_absv16si2 },
  { 0x5e005c, CODE_FOR_absv8di2 },
  { 0x5e0068, CODE_FOR_absv2sf2 },
  { 0x5e006b, CODE_FOR_absv8hf2 },
  { 0x5e006c, CODE_FOR_absv4sf2 },
  { 0x5e006d, CODE_FOR_absv2df2 },
  { 0x5e006f, CODE_FOR_absv16hf2 },
  { 0x5e0070, CODE_FOR_absv8sf2 },
  { 0x5e0071, CODE_FOR_absv4df2 },
  { 0x5e0074, CODE_FOR_absv32hf2 },
  { 0x5e0075, CODE_FOR_absv16sf2 },
  { 0x5e0076, CODE_FOR_absv8df2 },
  { 0x60000f, CODE_FOR_one_cmplqi2 },
  { 0x600010, CODE_FOR_one_cmplhi2 },
  { 0x600011, CODE_FOR_one_cmplsi2 },
  { 0x600012, CODE_FOR_one_cmpldi2 },
  { 0x600013, CODE_FOR_one_cmplti2 },
  { 0x600044, CODE_FOR_one_cmplv2qi2 },
  { 0x600045, CODE_FOR_one_cmplv4qi2 },
  { 0x600046, CODE_FOR_one_cmplv2hi2 },
  { 0x600048, CODE_FOR_one_cmplv8qi2 },
  { 0x600049, CODE_FOR_one_cmplv4hi2 },
  { 0x60004a, CODE_FOR_one_cmplv2si2 },
  { 0x60004f, CODE_FOR_one_cmplv16qi2 },
  { 0x600050, CODE_FOR_one_cmplv8hi2 },
  { 0x600051, CODE_FOR_one_cmplv4si2 },
  { 0x600052, CODE_FOR_one_cmplv2di2 },
  { 0x600053, CODE_FOR_one_cmplv1ti2 },
  { 0x600054, CODE_FOR_one_cmplv32qi2 },
  { 0x600055, CODE_FOR_one_cmplv16hi2 },
  { 0x600056, CODE_FOR_one_cmplv8si2 },
  { 0x600057, CODE_FOR_one_cmplv4di2 },
  { 0x600059, CODE_FOR_one_cmplv64qi2 },
  { 0x60005a, CODE_FOR_one_cmplv32hi2 },
  { 0x60005b, CODE_FOR_one_cmplv16si2 },
  { 0x60005c, CODE_FOR_one_cmplv8di2 },
  { 0x610010, CODE_FOR_bswaphi2 },
  { 0x610011, CODE_FOR_bswapsi2 },
  { 0x610012, CODE_FOR_bswapdi2 },
  { 0x620011, CODE_FOR_ffssi2 },
  { 0x620012, CODE_FOR_ffsdi2 },
  { 0x630011, CODE_FOR_clzsi2 },
  { 0x630012, CODE_FOR_clzdi2 },
  { 0x630051, CODE_FOR_clzv4si2 },
  { 0x630052, CODE_FOR_clzv2di2 },
  { 0x630056, CODE_FOR_clzv8si2 },
  { 0x630057, CODE_FOR_clzv4di2 },
  { 0x63005b, CODE_FOR_clzv16si2 },
  { 0x63005c, CODE_FOR_clzv8di2 },
  { 0x640011, CODE_FOR_ctzsi2 },
  { 0x640012, CODE_FOR_ctzdi2 },
  { 0x660010, CODE_FOR_popcounthi2 },
  { 0x660011, CODE_FOR_popcountsi2 },
  { 0x660012, CODE_FOR_popcountdi2 },
  { 0x66004f, CODE_FOR_popcountv16qi2 },
  { 0x660050, CODE_FOR_popcountv8hi2 },
  { 0x660051, CODE_FOR_popcountv4si2 },
  { 0x660052, CODE_FOR_popcountv2di2 },
  { 0x660054, CODE_FOR_popcountv32qi2 },
  { 0x660055, CODE_FOR_popcountv16hi2 },
  { 0x660056, CODE_FOR_popcountv8si2 },
  { 0x660057, CODE_FOR_popcountv4di2 },
  { 0x660059, CODE_FOR_popcountv64qi2 },
  { 0x66005a, CODE_FOR_popcountv32hi2 },
  { 0x66005b, CODE_FOR_popcountv16si2 },
  { 0x66005c, CODE_FOR_popcountv8di2 },
  { 0x67000f, CODE_FOR_parityqi2 },
  { 0x670010, CODE_FOR_parityhi2 },
  { 0x670011, CODE_FOR_paritysi2 },
  { 0x670012, CODE_FOR_paritydi2 },
  { 0x72002b, CODE_FOR_sqrthf2 },
  { 0x72002d, CODE_FOR_sqrtsf2 },
  { 0x72002e, CODE_FOR_sqrtdf2 },
  { 0x72002f, CODE_FOR_sqrtxf2 },
  { 0x720068, CODE_FOR_sqrtv2sf2 },
  { 0x72006b, CODE_FOR_sqrtv8hf2 },
  { 0x72006c, CODE_FOR_sqrtv4sf2 },
  { 0x72006d, CODE_FOR_sqrtv2df2 },
  { 0x72006f, CODE_FOR_sqrtv16hf2 },
  { 0x720070, CODE_FOR_sqrtv8sf2 },
  { 0x720071, CODE_FOR_sqrtv4df2 },
  { 0x720074, CODE_FOR_sqrtv32hf2 },
  { 0x720075, CODE_FOR_sqrtv16sf2 },
  { 0x720076, CODE_FOR_sqrtv8df2 },
  { 0x81000f, CODE_FOR_movqi },
  { 0x810010, CODE_FOR_movhi },
  { 0x810011, CODE_FOR_movsi },
  { 0x810012, CODE_FOR_movdi },
  { 0x810013, CODE_FOR_movti },
  { 0x810014, CODE_FOR_movoi },
  { 0x810015, CODE_FOR_movxi },
  { 0x810016, CODE_FOR_movp2qi },
  { 0x810017, CODE_FOR_movp2hi },
  { 0x81002b, CODE_FOR_movhf },
  { 0x81002c, CODE_FOR_movbf },
  { 0x81002d, CODE_FOR_movsf },
  { 0x81002e, CODE_FOR_movdf },
  { 0x81002f, CODE_FOR_movxf },
  { 0x810030, CODE_FOR_movtf },
  { 0x810039, CODE_FOR_movcdi },
  { 0x810044, CODE_FOR_movv2qi },
  { 0x810045, CODE_FOR_movv4qi },
  { 0x810046, CODE_FOR_movv2hi },
  { 0x810047, CODE_FOR_movv1si },
  { 0x810048, CODE_FOR_movv8qi },
  { 0x810049, CODE_FOR_movv4hi },
  { 0x81004a, CODE_FOR_movv2si },
  { 0x81004b, CODE_FOR_movv1di },
  { 0x81004f, CODE_FOR_movv16qi },
  { 0x810050, CODE_FOR_movv8hi },
  { 0x810051, CODE_FOR_movv4si },
  { 0x810052, CODE_FOR_movv2di },
  { 0x810053, CODE_FOR_movv1ti },
  { 0x810054, CODE_FOR_movv32qi },
  { 0x810055, CODE_FOR_movv16hi },
  { 0x810056, CODE_FOR_movv8si },
  { 0x810057, CODE_FOR_movv4di },
  { 0x810058, CODE_FOR_movv2ti },
  { 0x810059, CODE_FOR_movv64qi },
  { 0x81005a, CODE_FOR_movv32hi },
  { 0x81005b, CODE_FOR_movv16si },
  { 0x81005c, CODE_FOR_movv8di },
  { 0x81005d, CODE_FOR_movv4ti },
  { 0x810063, CODE_FOR_movv64si },
  { 0x810064, CODE_FOR_movv2hf },
  { 0x810065, CODE_FOR_movv2bf },
  { 0x810066, CODE_FOR_movv4bf },
  { 0x810067, CODE_FOR_movv4hf },
  { 0x810068, CODE_FOR_movv2sf },
  { 0x81006a, CODE_FOR_movv8bf },
  { 0x81006b, CODE_FOR_movv8hf },
  { 0x81006c, CODE_FOR_movv4sf },
  { 0x81006d, CODE_FOR_movv2df },
  { 0x81006e, CODE_FOR_movv16bf },
  { 0x81006f, CODE_FOR_movv16hf },
  { 0x810070, CODE_FOR_movv8sf },
  { 0x810071, CODE_FOR_movv4df },
  { 0x810073, CODE_FOR_movv32bf },
  { 0x810074, CODE_FOR_movv32hf },
  { 0x810075, CODE_FOR_movv16sf },
  { 0x810076, CODE_FOR_movv8df },
  { 0x81007f, CODE_FOR_movv64sf },
  { 0x82000f, CODE_FOR_movstrictqi },
  { 0x820010, CODE_FOR_movstricthi },
  { 0x830044, CODE_FOR_movmisalignv2qi },
  { 0x830045, CODE_FOR_movmisalignv4qi },
  { 0x830046, CODE_FOR_movmisalignv2hi },
  { 0x830047, CODE_FOR_movmisalignv1si },
  { 0x830048, CODE_FOR_movmisalignv8qi },
  { 0x830049, CODE_FOR_movmisalignv4hi },
  { 0x83004a, CODE_FOR_movmisalignv2si },
  { 0x83004b, CODE_FOR_movmisalignv1di },
  { 0x83004f, CODE_FOR_movmisalignv16qi },
  { 0x830050, CODE_FOR_movmisalignv8hi },
  { 0x830051, CODE_FOR_movmisalignv4si },
  { 0x830052, CODE_FOR_movmisalignv2di },
  { 0x830053, CODE_FOR_movmisalignv1ti },
  { 0x830054, CODE_FOR_movmisalignv32qi },
  { 0x830055, CODE_FOR_movmisalignv16hi },
  { 0x830056, CODE_FOR_movmisalignv8si },
  { 0x830057, CODE_FOR_movmisalignv4di },
  { 0x830058, CODE_FOR_movmisalignv2ti },
  { 0x830059, CODE_FOR_movmisalignv64qi },
  { 0x83005a, CODE_FOR_movmisalignv32hi },
  { 0x83005b, CODE_FOR_movmisalignv16si },
  { 0x83005c, CODE_FOR_movmisalignv8di },
  { 0x83005d, CODE_FOR_movmisalignv4ti },
  { 0x830064, CODE_FOR_movmisalignv2hf },
  { 0x830065, CODE_FOR_movmisalignv2bf },
  { 0x830066, CODE_FOR_movmisalignv4bf },
  { 0x830067, CODE_FOR_movmisalignv4hf },
  { 0x830068, CODE_FOR_movmisalignv2sf },
  { 0x83006a, CODE_FOR_movmisalignv8bf },
  { 0x83006b, CODE_FOR_movmisalignv8hf },
  { 0x83006c, CODE_FOR_movmisalignv4sf },
  { 0x83006d, CODE_FOR_movmisalignv2df },
  { 0x83006e, CODE_FOR_movmisalignv16bf },
  { 0x83006f, CODE_FOR_movmisalignv16hf },
  { 0x830070, CODE_FOR_movmisalignv8sf },
  { 0x830071, CODE_FOR_movmisalignv4df },
  { 0x830073, CODE_FOR_movmisalignv32bf },
  { 0x830074, CODE_FOR_movmisalignv32hf },
  { 0x830075, CODE_FOR_movmisalignv16sf },
  { 0x830076, CODE_FOR_movmisalignv8df },
  { 0x840011, CODE_FOR_storentsi },
  { 0x840012, CODE_FOR_storentdi },
  { 0x84002d, CODE_FOR_storentsf },
  { 0x84002e, CODE_FOR_storentdf },
  { 0x840052, CODE_FOR_storentv2di },
  { 0x840057, CODE_FOR_storentv4di },
  { 0x84005c, CODE_FOR_storentv8di },
  { 0x84006c, CODE_FOR_storentv4sf },
  { 0x84006d, CODE_FOR_storentv2df },
  { 0x840070, CODE_FOR_storentv8sf },
  { 0x840071, CODE_FOR_storentv4df },
  { 0x840075, CODE_FOR_storentv16sf },
  { 0x840076, CODE_FOR_storentv8df },
  { 0x850010, CODE_FOR_insvhi },
  { 0x850011, CODE_FOR_insvsi },
  { 0x850012, CODE_FOR_insvdi },
  { 0x860010, CODE_FOR_extvhi },
  { 0x860011, CODE_FOR_extvsi },
  { 0x870010, CODE_FOR_extzvhi },
  { 0x870011, CODE_FOR_extzvsi },
  { 0x870012, CODE_FOR_extzvdi },
  { 0x8e0002, CODE_FOR_cbranchcc4 },
  { 0x8e000f, CODE_FOR_cbranchqi4 },
  { 0x8e0010, CODE_FOR_cbranchhi4 },
  { 0x8e0011, CODE_FOR_cbranchsi4 },
  { 0x8e0012, CODE_FOR_cbranchdi4 },
  { 0x8e0013, CODE_FOR_cbranchti4 },
  { 0x8e0014, CODE_FOR_cbranchoi4 },
  { 0x8e002b, CODE_FOR_cbranchhf4 },
  { 0x8e002c, CODE_FOR_cbranchbf4 },
  { 0x8e002d, CODE_FOR_cbranchsf4 },
  { 0x8e002e, CODE_FOR_cbranchdf4 },
  { 0x8e002f, CODE_FOR_cbranchxf4 },
  { 0x8e0051, CODE_FOR_cbranchv4si4 },
  { 0x8e0052, CODE_FOR_cbranchv2di4 },
  { 0x8e0056, CODE_FOR_cbranchv8si4 },
  { 0x8e0057, CODE_FOR_cbranchv4di4 },
  { 0x91000f, CODE_FOR_addqicc },
  { 0x910010, CODE_FOR_addhicc },
  { 0x910011, CODE_FOR_addsicc },
  { 0x910012, CODE_FOR_adddicc },
  { 0x94000f, CODE_FOR_movqicc },
  { 0x940010, CODE_FOR_movhicc },
  { 0x940011, CODE_FOR_movsicc },
  { 0x940012, CODE_FOR_movdicc },
  { 0x94002b, CODE_FOR_movhfcc },
  { 0x94002d, CODE_FOR_movsfcc },
  { 0x94002e, CODE_FOR_movdfcc },
  { 0x94002f, CODE_FOR_movxfcc },
  { 0x95004f, CODE_FOR_cond_addv16qi },
  { 0x950050, CODE_FOR_cond_addv8hi },
  { 0x950051, CODE_FOR_cond_addv4si },
  { 0x950052, CODE_FOR_cond_addv2di },
  { 0x950054, CODE_FOR_cond_addv32qi },
  { 0x950055, CODE_FOR_cond_addv16hi },
  { 0x950056, CODE_FOR_cond_addv8si },
  { 0x950057, CODE_FOR_cond_addv4di },
  { 0x950059, CODE_FOR_cond_addv64qi },
  { 0x95005a, CODE_FOR_cond_addv32hi },
  { 0x95005b, CODE_FOR_cond_addv16si },
  { 0x95005c, CODE_FOR_cond_addv8di },
  { 0x95006b, CODE_FOR_cond_addv8hf },
  { 0x95006c, CODE_FOR_cond_addv4sf },
  { 0x95006d, CODE_FOR_cond_addv2df },
  { 0x95006f, CODE_FOR_cond_addv16hf },
  { 0x950070, CODE_FOR_cond_addv8sf },
  { 0x950071, CODE_FOR_cond_addv4df },
  { 0x950074, CODE_FOR_cond_addv32hf },
  { 0x950075, CODE_FOR_cond_addv16sf },
  { 0x950076, CODE_FOR_cond_addv8df },
  { 0x96004f, CODE_FOR_cond_subv16qi },
  { 0x960050, CODE_FOR_cond_subv8hi },
  { 0x960051, CODE_FOR_cond_subv4si },
  { 0x960052, CODE_FOR_cond_subv2di },
  { 0x960054, CODE_FOR_cond_subv32qi },
  { 0x960055, CODE_FOR_cond_subv16hi },
  { 0x960056, CODE_FOR_cond_subv8si },
  { 0x960057, CODE_FOR_cond_subv4di },
  { 0x960059, CODE_FOR_cond_subv64qi },
  { 0x96005a, CODE_FOR_cond_subv32hi },
  { 0x96005b, CODE_FOR_cond_subv16si },
  { 0x96005c, CODE_FOR_cond_subv8di },
  { 0x96006b, CODE_FOR_cond_subv8hf },
  { 0x96006c, CODE_FOR_cond_subv4sf },
  { 0x96006d, CODE_FOR_cond_subv2df },
  { 0x96006f, CODE_FOR_cond_subv16hf },
  { 0x960070, CODE_FOR_cond_subv8sf },
  { 0x960071, CODE_FOR_cond_subv4df },
  { 0x960074, CODE_FOR_cond_subv32hf },
  { 0x960075, CODE_FOR_cond_subv16sf },
  { 0x960076, CODE_FOR_cond_subv8df },
  { 0x970050, CODE_FOR_cond_mulv8hi },
  { 0x970051, CODE_FOR_cond_mulv4si },
  { 0x970052, CODE_FOR_cond_mulv2di },
  { 0x970055, CODE_FOR_cond_mulv16hi },
  { 0x970056, CODE_FOR_cond_mulv8si },
  { 0x970057, CODE_FOR_cond_mulv4di },
  { 0x97005a, CODE_FOR_cond_mulv32hi },
  { 0x97005b, CODE_FOR_cond_mulv16si },
  { 0x97005c, CODE_FOR_cond_mulv8di },
  { 0x97006b, CODE_FOR_cond_mulv8hf },
  { 0x97006c, CODE_FOR_cond_mulv4sf },
  { 0x97006d, CODE_FOR_cond_mulv2df },
  { 0x97006f, CODE_FOR_cond_mulv16hf },
  { 0x970070, CODE_FOR_cond_mulv8sf },
  { 0x970071, CODE_FOR_cond_mulv4df },
  { 0x970074, CODE_FOR_cond_mulv32hf },
  { 0x970075, CODE_FOR_cond_mulv16sf },
  { 0x970076, CODE_FOR_cond_mulv8df },
  { 0x98006b, CODE_FOR_cond_divv8hf },
  { 0x98006c, CODE_FOR_cond_divv4sf },
  { 0x98006d, CODE_FOR_cond_divv2df },
  { 0x98006f, CODE_FOR_cond_divv16hf },
  { 0x980070, CODE_FOR_cond_divv8sf },
  { 0x980071, CODE_FOR_cond_divv4df },
  { 0x980074, CODE_FOR_cond_divv32hf },
  { 0x980075, CODE_FOR_cond_divv16sf },
  { 0x980076, CODE_FOR_cond_divv8df },
  { 0x9c0051, CODE_FOR_cond_andv4si },
  { 0x9c0052, CODE_FOR_cond_andv2di },
  { 0x9c0056, CODE_FOR_cond_andv8si },
  { 0x9c0057, CODE_FOR_cond_andv4di },
  { 0x9c005b, CODE_FOR_cond_andv16si },
  { 0x9c005c, CODE_FOR_cond_andv8di },
  { 0x9d0051, CODE_FOR_cond_iorv4si },
  { 0x9d0052, CODE_FOR_cond_iorv2di },
  { 0x9d0056, CODE_FOR_cond_iorv8si },
  { 0x9d0057, CODE_FOR_cond_iorv4di },
  { 0x9d005b, CODE_FOR_cond_iorv16si },
  { 0x9d005c, CODE_FOR_cond_iorv8di },
  { 0x9e0051, CODE_FOR_cond_xorv4si },
  { 0x9e0052, CODE_FOR_cond_xorv2di },
  { 0x9e0056, CODE_FOR_cond_xorv8si },
  { 0x9e0057, CODE_FOR_cond_xorv4di },
  { 0x9e005b, CODE_FOR_cond_xorv16si },
  { 0x9e005c, CODE_FOR_cond_xorv8di },
  { 0x9f0050, CODE_FOR_cond_ashlv8hi },
  { 0x9f0051, CODE_FOR_cond_ashlv4si },
  { 0x9f0052, CODE_FOR_cond_ashlv2di },
  { 0x9f0055, CODE_FOR_cond_ashlv16hi },
  { 0x9f0056, CODE_FOR_cond_ashlv8si },
  { 0x9f0057, CODE_FOR_cond_ashlv4di },
  { 0x9f005a, CODE_FOR_cond_ashlv32hi },
  { 0x9f005b, CODE_FOR_cond_ashlv16si },
  { 0x9f005c, CODE_FOR_cond_ashlv8di },
  { 0xa00050, CODE_FOR_cond_ashrv8hi },
  { 0xa00051, CODE_FOR_cond_ashrv4si },
  { 0xa00052, CODE_FOR_cond_ashrv2di },
  { 0xa00055, CODE_FOR_cond_ashrv16hi },
  { 0xa00056, CODE_FOR_cond_ashrv8si },
  { 0xa00057, CODE_FOR_cond_ashrv4di },
  { 0xa0005a, CODE_FOR_cond_ashrv32hi },
  { 0xa0005b, CODE_FOR_cond_ashrv16si },
  { 0xa0005c, CODE_FOR_cond_ashrv8di },
  { 0xa10050, CODE_FOR_cond_lshrv8hi },
  { 0xa10051, CODE_FOR_cond_lshrv4si },
  { 0xa10052, CODE_FOR_cond_lshrv2di },
  { 0xa10055, CODE_FOR_cond_lshrv16hi },
  { 0xa10056, CODE_FOR_cond_lshrv8si },
  { 0xa10057, CODE_FOR_cond_lshrv4di },
  { 0xa1005a, CODE_FOR_cond_lshrv32hi },
  { 0xa1005b, CODE_FOR_cond_lshrv16si },
  { 0xa1005c, CODE_FOR_cond_lshrv8di },
  { 0xa2004f, CODE_FOR_cond_sminv16qi },
  { 0xa20050, CODE_FOR_cond_sminv8hi },
  { 0xa20051, CODE_FOR_cond_sminv4si },
  { 0xa20052, CODE_FOR_cond_sminv2di },
  { 0xa20054, CODE_FOR_cond_sminv32qi },
  { 0xa20055, CODE_FOR_cond_sminv16hi },
  { 0xa20056, CODE_FOR_cond_sminv8si },
  { 0xa20057, CODE_FOR_cond_sminv4di },
  { 0xa20059, CODE_FOR_cond_sminv64qi },
  { 0xa2005a, CODE_FOR_cond_sminv32hi },
  { 0xa2005b, CODE_FOR_cond_sminv16si },
  { 0xa2005c, CODE_FOR_cond_sminv8di },
  { 0xa2006b, CODE_FOR_cond_sminv8hf },
  { 0xa2006c, CODE_FOR_cond_sminv4sf },
  { 0xa2006d, CODE_FOR_cond_sminv2df },
  { 0xa2006f, CODE_FOR_cond_sminv16hf },
  { 0xa20070, CODE_FOR_cond_sminv8sf },
  { 0xa20071, CODE_FOR_cond_sminv4df },
  { 0xa20074, CODE_FOR_cond_sminv32hf },
  { 0xa20075, CODE_FOR_cond_sminv16sf },
  { 0xa20076, CODE_FOR_cond_sminv8df },
  { 0xa3004f, CODE_FOR_cond_smaxv16qi },
  { 0xa30050, CODE_FOR_cond_smaxv8hi },
  { 0xa30051, CODE_FOR_cond_smaxv4si },
  { 0xa30052, CODE_FOR_cond_smaxv2di },
  { 0xa30054, CODE_FOR_cond_smaxv32qi },
  { 0xa30055, CODE_FOR_cond_smaxv16hi },
  { 0xa30056, CODE_FOR_cond_smaxv8si },
  { 0xa30057, CODE_FOR_cond_smaxv4di },
  { 0xa30059, CODE_FOR_cond_smaxv64qi },
  { 0xa3005a, CODE_FOR_cond_smaxv32hi },
  { 0xa3005b, CODE_FOR_cond_smaxv16si },
  { 0xa3005c, CODE_FOR_cond_smaxv8di },
  { 0xa3006b, CODE_FOR_cond_smaxv8hf },
  { 0xa3006c, CODE_FOR_cond_smaxv4sf },
  { 0xa3006d, CODE_FOR_cond_smaxv2df },
  { 0xa3006f, CODE_FOR_cond_smaxv16hf },
  { 0xa30070, CODE_FOR_cond_smaxv8sf },
  { 0xa30071, CODE_FOR_cond_smaxv4df },
  { 0xa30074, CODE_FOR_cond_smaxv32hf },
  { 0xa30075, CODE_FOR_cond_smaxv16sf },
  { 0xa30076, CODE_FOR_cond_smaxv8df },
  { 0xa4004f, CODE_FOR_cond_uminv16qi },
  { 0xa40050, CODE_FOR_cond_uminv8hi },
  { 0xa40051, CODE_FOR_cond_uminv4si },
  { 0xa40052, CODE_FOR_cond_uminv2di },
  { 0xa40054, CODE_FOR_cond_uminv32qi },
  { 0xa40055, CODE_FOR_cond_uminv16hi },
  { 0xa40056, CODE_FOR_cond_uminv8si },
  { 0xa40057, CODE_FOR_cond_uminv4di },
  { 0xa40059, CODE_FOR_cond_uminv64qi },
  { 0xa4005a, CODE_FOR_cond_uminv32hi },
  { 0xa4005b, CODE_FOR_cond_uminv16si },
  { 0xa4005c, CODE_FOR_cond_uminv8di },
  { 0xa5004f, CODE_FOR_cond_umaxv16qi },
  { 0xa50050, CODE_FOR_cond_umaxv8hi },
  { 0xa50051, CODE_FOR_cond_umaxv4si },
  { 0xa50052, CODE_FOR_cond_umaxv2di },
  { 0xa50054, CODE_FOR_cond_umaxv32qi },
  { 0xa50055, CODE_FOR_cond_umaxv16hi },
  { 0xa50056, CODE_FOR_cond_umaxv8si },
  { 0xa50057, CODE_FOR_cond_umaxv4di },
  { 0xa50059, CODE_FOR_cond_umaxv64qi },
  { 0xa5005a, CODE_FOR_cond_umaxv32hi },
  { 0xa5005b, CODE_FOR_cond_umaxv16si },
  { 0xa5005c, CODE_FOR_cond_umaxv8di },
  { 0xa8006b, CODE_FOR_cond_fmav8hf },
  { 0xa8006c, CODE_FOR_cond_fmav4sf },
  { 0xa8006d, CODE_FOR_cond_fmav2df },
  { 0xa8006f, CODE_FOR_cond_fmav16hf },
  { 0xa80070, CODE_FOR_cond_fmav8sf },
  { 0xa80071, CODE_FOR_cond_fmav4df },
  { 0xa80074, CODE_FOR_cond_fmav32hf },
  { 0xa80075, CODE_FOR_cond_fmav16sf },
  { 0xa80076, CODE_FOR_cond_fmav8df },
  { 0xa9006b, CODE_FOR_cond_fmsv8hf },
  { 0xa9006c, CODE_FOR_cond_fmsv4sf },
  { 0xa9006d, CODE_FOR_cond_fmsv2df },
  { 0xa9006f, CODE_FOR_cond_fmsv16hf },
  { 0xa90070, CODE_FOR_cond_fmsv8sf },
  { 0xa90071, CODE_FOR_cond_fmsv4df },
  { 0xa90074, CODE_FOR_cond_fmsv32hf },
  { 0xa90075, CODE_FOR_cond_fmsv16sf },
  { 0xa90076, CODE_FOR_cond_fmsv8df },
  { 0xaa006b, CODE_FOR_cond_fnmav8hf },
  { 0xaa006c, CODE_FOR_cond_fnmav4sf },
  { 0xaa006d, CODE_FOR_cond_fnmav2df },
  { 0xaa006f, CODE_FOR_cond_fnmav16hf },
  { 0xaa0070, CODE_FOR_cond_fnmav8sf },
  { 0xaa0071, CODE_FOR_cond_fnmav4df },
  { 0xaa0074, CODE_FOR_cond_fnmav32hf },
  { 0xaa0075, CODE_FOR_cond_fnmav16sf },
  { 0xaa0076, CODE_FOR_cond_fnmav8df },
  { 0xab006b, CODE_FOR_cond_fnmsv8hf },
  { 0xab006c, CODE_FOR_cond_fnmsv4sf },
  { 0xab006d, CODE_FOR_cond_fnmsv2df },
  { 0xab006f, CODE_FOR_cond_fnmsv16hf },
  { 0xab0070, CODE_FOR_cond_fnmsv8sf },
  { 0xab0071, CODE_FOR_cond_fnmsv4df },
  { 0xab0074, CODE_FOR_cond_fnmsv32hf },
  { 0xab0075, CODE_FOR_cond_fnmsv16sf },
  { 0xab0076, CODE_FOR_cond_fnmsv8df },
  { 0xae0002, CODE_FOR_cstorecc4 },
  { 0xae000f, CODE_FOR_cstoreqi4 },
  { 0xae0010, CODE_FOR_cstorehi4 },
  { 0xae0011, CODE_FOR_cstoresi4 },
  { 0xae0012, CODE_FOR_cstoredi4 },
  { 0xae0013, CODE_FOR_cstoreti4 },
  { 0xae002b, CODE_FOR_cstorehf4 },
  { 0xae002c, CODE_FOR_cstorebf4 },
  { 0xae002d, CODE_FOR_cstoresf4 },
  { 0xae002e, CODE_FOR_cstoredf4 },
  { 0xae002f, CODE_FOR_cstorexf4 },
  { 0xb0000f, CODE_FOR_addvqi4 },
  { 0xb00010, CODE_FOR_addvhi4 },
  { 0xb00011, CODE_FOR_addvsi4 },
  { 0xb00012, CODE_FOR_addvdi4 },
  { 0xb00013, CODE_FOR_addvti4 },
  { 0xb1000f, CODE_FOR_subvqi4 },
  { 0xb10010, CODE_FOR_subvhi4 },
  { 0xb10011, CODE_FOR_subvsi4 },
  { 0xb10012, CODE_FOR_subvdi4 },
  { 0xb10013, CODE_FOR_subvti4 },
  { 0xb2000f, CODE_FOR_mulvqi4 },
  { 0xb20010, CODE_FOR_mulvhi4 },
  { 0xb20011, CODE_FOR_mulvsi4 },
  { 0xb20012, CODE_FOR_mulvdi4 },
  { 0xb3000f, CODE_FOR_uaddvqi4 },
  { 0xb30010, CODE_FOR_uaddvhi4 },
  { 0xb30011, CODE_FOR_uaddvsi4 },
  { 0xb30012, CODE_FOR_uaddvdi4 },
  { 0xb30013, CODE_FOR_uaddvti4 },
  { 0xb4000f, CODE_FOR_usubvqi4 },
  { 0xb40010, CODE_FOR_usubvhi4 },
  { 0xb40011, CODE_FOR_usubvsi4 },
  { 0xb40012, CODE_FOR_usubvdi4 },
  { 0xb5000f, CODE_FOR_umulvqi4 },
  { 0xb50010, CODE_FOR_umulvhi4 },
  { 0xb50011, CODE_FOR_umulvsi4 },
  { 0xb50012, CODE_FOR_umulvdi4 },
  { 0xb6000f, CODE_FOR_negvqi3 },
  { 0xb60010, CODE_FOR_negvhi3 },
  { 0xb60011, CODE_FOR_negvsi3 },
  { 0xb60012, CODE_FOR_negvdi3 },
  { 0xb8002d, CODE_FOR_spaceshipsf3 },
  { 0xb8002e, CODE_FOR_spaceshipdf3 },
  { 0xb8002f, CODE_FOR_spaceshipxf3 },
  { 0xb90011, CODE_FOR_smulsi3_highpart },
  { 0xb90012, CODE_FOR_smuldi3_highpart },
  { 0xb90046, CODE_FOR_smulv2hi3_highpart },
  { 0xb90049, CODE_FOR_smulv4hi3_highpart },
  { 0xb90050, CODE_FOR_smulv8hi3_highpart },
  { 0xb90055, CODE_FOR_smulv16hi3_highpart },
  { 0xb9005a, CODE_FOR_smulv32hi3_highpart },
  { 0xba0011, CODE_FOR_umulsi3_highpart },
  { 0xba0012, CODE_FOR_umuldi3_highpart },
  { 0xba0046, CODE_FOR_umulv2hi3_highpart },
  { 0xba0049, CODE_FOR_umulv4hi3_highpart },
  { 0xba0050, CODE_FOR_umulv8hi3_highpart },
  { 0xba0055, CODE_FOR_umulv16hi3_highpart },
  { 0xba005a, CODE_FOR_umulv32hi3_highpart },
  { 0xbb0011, CODE_FOR_cmpmemsi },
  { 0xbd0011, CODE_FOR_cmpstrnsi },
  { 0xbe0011, CODE_FOR_cpymemsi },
  { 0xbe0012, CODE_FOR_cpymemdi },
  { 0xc00011, CODE_FOR_setmemsi },
  { 0xc00012, CODE_FOR_setmemdi },
  { 0xc10011, CODE_FOR_strlensi },
  { 0xc10012, CODE_FOR_strlendi },
  { 0xc3002b, CODE_FOR_fmahf4 },
  { 0xc3002d, CODE_FOR_fmasf4 },
  { 0xc3002e, CODE_FOR_fmadf4 },
  { 0xc30068, CODE_FOR_fmav2sf4 },
  { 0xc3006b, CODE_FOR_fmav8hf4 },
  { 0xc3006c, CODE_FOR_fmav4sf4 },
  { 0xc3006d, CODE_FOR_fmav2df4 },
  { 0xc3006f, CODE_FOR_fmav16hf4 },
  { 0xc30070, CODE_FOR_fmav8sf4 },
  { 0xc30071, CODE_FOR_fmav4df4 },
  { 0xc30074, CODE_FOR_fmav32hf4 },
  { 0xc30075, CODE_FOR_fmav16sf4 },
  { 0xc30076, CODE_FOR_fmav8df4 },
  { 0xc4002b, CODE_FOR_fmshf4 },
  { 0xc4002d, CODE_FOR_fmssf4 },
  { 0xc4002e, CODE_FOR_fmsdf4 },
  { 0xc40068, CODE_FOR_fmsv2sf4 },
  { 0xc4006b, CODE_FOR_fmsv8hf4 },
  { 0xc4006c, CODE_FOR_fmsv4sf4 },
  { 0xc4006d, CODE_FOR_fmsv2df4 },
  { 0xc4006f, CODE_FOR_fmsv16hf4 },
  { 0xc40070, CODE_FOR_fmsv8sf4 },
  { 0xc40071, CODE_FOR_fmsv4df4 },
  { 0xc40074, CODE_FOR_fmsv32hf4 },
  { 0xc40075, CODE_FOR_fmsv16sf4 },
  { 0xc40076, CODE_FOR_fmsv8df4 },
  { 0xc5002b, CODE_FOR_fnmahf4 },
  { 0xc5002d, CODE_FOR_fnmasf4 },
  { 0xc5002e, CODE_FOR_fnmadf4 },
  { 0xc50068, CODE_FOR_fnmav2sf4 },
  { 0xc5006b, CODE_FOR_fnmav8hf4 },
  { 0xc5006c, CODE_FOR_fnmav4sf4 },
  { 0xc5006d, CODE_FOR_fnmav2df4 },
  { 0xc5006f, CODE_FOR_fnmav16hf4 },
  { 0xc50070, CODE_FOR_fnmav8sf4 },
  { 0xc50071, CODE_FOR_fnmav4df4 },
  { 0xc50074, CODE_FOR_fnmav32hf4 },
  { 0xc50075, CODE_FOR_fnmav16sf4 },
  { 0xc50076, CODE_FOR_fnmav8df4 },
  { 0xc6002b, CODE_FOR_fnmshf4 },
  { 0xc6002d, CODE_FOR_fnmssf4 },
  { 0xc6002e, CODE_FOR_fnmsdf4 },
  { 0xc60068, CODE_FOR_fnmsv2sf4 },
  { 0xc6006b, CODE_FOR_fnmsv8hf4 },
  { 0xc6006c, CODE_FOR_fnmsv4sf4 },
  { 0xc6006d, CODE_FOR_fnmsv2df4 },
  { 0xc6006f, CODE_FOR_fnmsv16hf4 },
  { 0xc60070, CODE_FOR_fnmsv8sf4 },
  { 0xc60071, CODE_FOR_fnmsv4df4 },
  { 0xc60074, CODE_FOR_fnmsv32hf4 },
  { 0xc60075, CODE_FOR_fnmsv16sf4 },
  { 0xc60076, CODE_FOR_fnmsv8df4 },
  { 0xc7002b, CODE_FOR_rinthf2 },
  { 0xc7002d, CODE_FOR_rintsf2 },
  { 0xc7002e, CODE_FOR_rintdf2 },
  { 0xc7002f, CODE_FOR_rintxf2 },
  { 0xc70068, CODE_FOR_rintv2sf2 },
  { 0xc7006b, CODE_FOR_rintv8hf2 },
  { 0xc7006c, CODE_FOR_rintv4sf2 },
  { 0xc7006d, CODE_FOR_rintv2df2 },
  { 0xc7006f, CODE_FOR_rintv16hf2 },
  { 0xc70070, CODE_FOR_rintv8sf2 },
  { 0xc70071, CODE_FOR_rintv4df2 },
  { 0xc70074, CODE_FOR_rintv32hf2 },
  { 0xc70075, CODE_FOR_rintv16sf2 },
  { 0xc70076, CODE_FOR_rintv8df2 },
  { 0xc8002d, CODE_FOR_roundsf2 },
  { 0xc8002e, CODE_FOR_rounddf2 },
  { 0xc8002f, CODE_FOR_roundxf2 },
  { 0xc80068, CODE_FOR_roundv2sf2 },
  { 0xc8006c, CODE_FOR_roundv4sf2 },
  { 0xc8006d, CODE_FOR_roundv2df2 },
  { 0xc80070, CODE_FOR_roundv8sf2 },
  { 0xc80071, CODE_FOR_roundv4df2 },
  { 0xc80075, CODE_FOR_roundv16sf2 },
  { 0xc80076, CODE_FOR_roundv8df2 },
  { 0xc9002b, CODE_FOR_roundevenhf2 },
  { 0xc9002d, CODE_FOR_roundevensf2 },
  { 0xc9002e, CODE_FOR_roundevendf2 },
  { 0xc9002f, CODE_FOR_roundevenxf2 },
  { 0xca002b, CODE_FOR_floorhf2 },
  { 0xca002d, CODE_FOR_floorsf2 },
  { 0xca002e, CODE_FOR_floordf2 },
  { 0xca002f, CODE_FOR_floorxf2 },
  { 0xca0068, CODE_FOR_floorv2sf2 },
  { 0xca006b, CODE_FOR_floorv8hf2 },
  { 0xca006c, CODE_FOR_floorv4sf2 },
  { 0xca006d, CODE_FOR_floorv2df2 },
  { 0xca006f, CODE_FOR_floorv16hf2 },
  { 0xca0070, CODE_FOR_floorv8sf2 },
  { 0xca0071, CODE_FOR_floorv4df2 },
  { 0xca0074, CODE_FOR_floorv32hf2 },
  { 0xca0075, CODE_FOR_floorv16sf2 },
  { 0xca0076, CODE_FOR_floorv8df2 },
  { 0xcb002b, CODE_FOR_ceilhf2 },
  { 0xcb002d, CODE_FOR_ceilsf2 },
  { 0xcb002e, CODE_FOR_ceildf2 },
  { 0xcb002f, CODE_FOR_ceilxf2 },
  { 0xcb0068, CODE_FOR_ceilv2sf2 },
  { 0xcb006b, CODE_FOR_ceilv8hf2 },
  { 0xcb006c, CODE_FOR_ceilv4sf2 },
  { 0xcb006d, CODE_FOR_ceilv2df2 },
  { 0xcb006f, CODE_FOR_ceilv16hf2 },
  { 0xcb0070, CODE_FOR_ceilv8sf2 },
  { 0xcb0071, CODE_FOR_ceilv4df2 },
  { 0xcb0074, CODE_FOR_ceilv32hf2 },
  { 0xcb0075, CODE_FOR_ceilv16sf2 },
  { 0xcb0076, CODE_FOR_ceilv8df2 },
  { 0xcc002b, CODE_FOR_btrunchf2 },
  { 0xcc002d, CODE_FOR_btruncsf2 },
  { 0xcc002e, CODE_FOR_btruncdf2 },
  { 0xcc002f, CODE_FOR_btruncxf2 },
  { 0xcc0068, CODE_FOR_btruncv2sf2 },
  { 0xcc006b, CODE_FOR_btruncv8hf2 },
  { 0xcc006c, CODE_FOR_btruncv4sf2 },
  { 0xcc006d, CODE_FOR_btruncv2df2 },
  { 0xcc006f, CODE_FOR_btruncv16hf2 },
  { 0xcc0070, CODE_FOR_btruncv8sf2 },
  { 0xcc0071, CODE_FOR_btruncv4df2 },
  { 0xcc0074, CODE_FOR_btruncv32hf2 },
  { 0xcc0075, CODE_FOR_btruncv16sf2 },
  { 0xcc0076, CODE_FOR_btruncv8df2 },
  { 0xcd002b, CODE_FOR_nearbyinthf2 },
  { 0xcd002d, CODE_FOR_nearbyintsf2 },
  { 0xcd002e, CODE_FOR_nearbyintdf2 },
  { 0xcd002f, CODE_FOR_nearbyintxf2 },
  { 0xcd0068, CODE_FOR_nearbyintv2sf2 },
  { 0xcd006b, CODE_FOR_nearbyintv8hf2 },
  { 0xcd006c, CODE_FOR_nearbyintv4sf2 },
  { 0xcd006d, CODE_FOR_nearbyintv2df2 },
  { 0xcd006f, CODE_FOR_nearbyintv16hf2 },
  { 0xcd0070, CODE_FOR_nearbyintv8sf2 },
  { 0xcd0071, CODE_FOR_nearbyintv4df2 },
  { 0xcd0074, CODE_FOR_nearbyintv32hf2 },
  { 0xcd0075, CODE_FOR_nearbyintv16sf2 },
  { 0xcd0076, CODE_FOR_nearbyintv8df2 },
  { 0xce002d, CODE_FOR_acossf2 },
  { 0xce002e, CODE_FOR_acosdf2 },
  { 0xce002f, CODE_FOR_acosxf2 },
  { 0xcf002d, CODE_FOR_acoshsf2 },
  { 0xcf002e, CODE_FOR_acoshdf2 },
  { 0xcf002f, CODE_FOR_acoshxf2 },
  { 0xd0002d, CODE_FOR_asinsf2 },
  { 0xd0002e, CODE_FOR_asindf2 },
  { 0xd0002f, CODE_FOR_asinxf2 },
  { 0xd1002d, CODE_FOR_asinhsf2 },
  { 0xd1002e, CODE_FOR_asinhdf2 },
  { 0xd1002f, CODE_FOR_asinhxf2 },
  { 0xd2002d, CODE_FOR_atan2sf3 },
  { 0xd2002e, CODE_FOR_atan2df3 },
  { 0xd2002f, CODE_FOR_atan2xf3 },
  { 0xd3002d, CODE_FOR_atansf2 },
  { 0xd3002e, CODE_FOR_atandf2 },
  { 0xd3002f, CODE_FOR_atanxf2 },
  { 0xd4002d, CODE_FOR_atanhsf2 },
  { 0xd4002e, CODE_FOR_atanhdf2 },
  { 0xd4002f, CODE_FOR_atanhxf2 },
  { 0xd5002b, CODE_FOR_copysignhf3 },
  { 0xd5002d, CODE_FOR_copysignsf3 },
  { 0xd5002e, CODE_FOR_copysigndf3 },
  { 0xd50030, CODE_FOR_copysigntf3 },
  { 0xd50068, CODE_FOR_copysignv2sf3 },
  { 0xd5006b, CODE_FOR_copysignv8hf3 },
  { 0xd5006c, CODE_FOR_copysignv4sf3 },
  { 0xd5006d, CODE_FOR_copysignv2df3 },
  { 0xd5006f, CODE_FOR_copysignv16hf3 },
  { 0xd50070, CODE_FOR_copysignv8sf3 },
  { 0xd50071, CODE_FOR_copysignv4df3 },
  { 0xd50074, CODE_FOR_copysignv32hf3 },
  { 0xd50075, CODE_FOR_copysignv16sf3 },
  { 0xd50076, CODE_FOR_copysignv8df3 },
  { 0xd6002b, CODE_FOR_xorsignhf3 },
  { 0xd6002d, CODE_FOR_xorsignsf3 },
  { 0xd6002e, CODE_FOR_xorsigndf3 },
  { 0xd60068, CODE_FOR_xorsignv2sf3 },
  { 0xd6006b, CODE_FOR_xorsignv8hf3 },
  { 0xd6006c, CODE_FOR_xorsignv4sf3 },
  { 0xd6006d, CODE_FOR_xorsignv2df3 },
  { 0xd6006f, CODE_FOR_xorsignv16hf3 },
  { 0xd60070, CODE_FOR_xorsignv8sf3 },
  { 0xd60071, CODE_FOR_xorsignv4df3 },
  { 0xd60074, CODE_FOR_xorsignv32hf3 },
  { 0xd60075, CODE_FOR_xorsignv16sf3 },
  { 0xd60076, CODE_FOR_xorsignv8df3 },
  { 0xd9006b, CODE_FOR_cmulv8hf3 },
  { 0xd9006f, CODE_FOR_cmulv16hf3 },
  { 0xd90074, CODE_FOR_cmulv32hf3 },
  { 0xda006b, CODE_FOR_cmul_conjv8hf3 },
  { 0xda006f, CODE_FOR_cmul_conjv16hf3 },
  { 0xda0074, CODE_FOR_cmul_conjv32hf3 },
  { 0xdb006b, CODE_FOR_cmlav8hf4 },
  { 0xdb006f, CODE_FOR_cmlav16hf4 },
  { 0xdb0074, CODE_FOR_cmlav32hf4 },
  { 0xdc006b, CODE_FOR_cmla_conjv8hf4 },
  { 0xdc006f, CODE_FOR_cmla_conjv16hf4 },
  { 0xdc0074, CODE_FOR_cmla_conjv32hf4 },
  { 0xdf002d, CODE_FOR_cossf2 },
  { 0xdf002e, CODE_FOR_cosdf2 },
  { 0xdf002f, CODE_FOR_cosxf2 },
  { 0xe0002d, CODE_FOR_coshsf2 },
  { 0xe0002e, CODE_FOR_coshdf2 },
  { 0xe0002f, CODE_FOR_coshxf2 },
  { 0xe1002d, CODE_FOR_exp10sf2 },
  { 0xe1002e, CODE_FOR_exp10df2 },
  { 0xe1002f, CODE_FOR_exp10xf2 },
  { 0xe2002d, CODE_FOR_exp2sf2 },
  { 0xe2002e, CODE_FOR_exp2df2 },
  { 0xe2002f, CODE_FOR_exp2xf2 },
  { 0xe20075, CODE_FOR_exp2v16sf2 },
  { 0xe20076, CODE_FOR_exp2v8df2 },
  { 0xe3002d, CODE_FOR_expsf2 },
  { 0xe3002e, CODE_FOR_expdf2 },
  { 0xe3002f, CODE_FOR_expxf2 },
  { 0xe4002d, CODE_FOR_expm1sf2 },
  { 0xe4002e, CODE_FOR_expm1df2 },
  { 0xe4002f, CODE_FOR_expm1xf2 },
  { 0xe5002d, CODE_FOR_fmodsf3 },
  { 0xe5002e, CODE_FOR_fmoddf3 },
  { 0xe5002f, CODE_FOR_fmodxf3 },
  { 0xe6002d, CODE_FOR_hypotsf3 },
  { 0xe6002e, CODE_FOR_hypotdf3 },
  { 0xe7002d, CODE_FOR_ilogbsf2 },
  { 0xe7002e, CODE_FOR_ilogbdf2 },
  { 0xe7002f, CODE_FOR_ilogbxf2 },
  { 0xe9002f, CODE_FOR_issignalingxf2 },
  { 0xea002d, CODE_FOR_ldexpsf3 },
  { 0xea002e, CODE_FOR_ldexpdf3 },
  { 0xea002f, CODE_FOR_ldexpxf3 },
  { 0xeb002d, CODE_FOR_log10sf2 },
  { 0xeb002e, CODE_FOR_log10df2 },
  { 0xeb002f, CODE_FOR_log10xf2 },
  { 0xec002d, CODE_FOR_log1psf2 },
  { 0xec002e, CODE_FOR_log1pdf2 },
  { 0xec002f, CODE_FOR_log1pxf2 },
  { 0xed002d, CODE_FOR_log2sf2 },
  { 0xed002e, CODE_FOR_log2df2 },
  { 0xed002f, CODE_FOR_log2xf2 },
  { 0xee002d, CODE_FOR_logsf2 },
  { 0xee002e, CODE_FOR_logdf2 },
  { 0xee002f, CODE_FOR_logxf2 },
  { 0xef002d, CODE_FOR_logbsf2 },
  { 0xef002e, CODE_FOR_logbdf2 },
  { 0xef002f, CODE_FOR_logbxf2 },
  { 0xf1002d, CODE_FOR_remaindersf3 },
  { 0xf1002e, CODE_FOR_remainderdf3 },
  { 0xf1002f, CODE_FOR_remainderxf3 },
  { 0xf2002b, CODE_FOR_rsqrthf2 },
  { 0xf2002d, CODE_FOR_rsqrtsf2 },
  { 0xf2006b, CODE_FOR_rsqrtv8hf2 },
  { 0xf2006c, CODE_FOR_rsqrtv4sf2 },
  { 0xf2006f, CODE_FOR_rsqrtv16hf2 },
  { 0xf20070, CODE_FOR_rsqrtv8sf2 },
  { 0xf20074, CODE_FOR_rsqrtv32hf2 },
  { 0xf20075, CODE_FOR_rsqrtv16sf2 },
  { 0xf3002d, CODE_FOR_scalbsf3 },
  { 0xf3002e, CODE_FOR_scalbdf3 },
  { 0xf3002f, CODE_FOR_scalbxf3 },
  { 0xf4002d, CODE_FOR_signbitsf2 },
  { 0xf4002e, CODE_FOR_signbitdf2 },
  { 0xf4002f, CODE_FOR_signbitxf2 },
  { 0xf40030, CODE_FOR_signbittf2 },
  { 0xf40068, CODE_FOR_signbitv2sf2 },
  { 0xf4006c, CODE_FOR_signbitv4sf2 },
  { 0xf40070, CODE_FOR_signbitv8sf2 },
  { 0xf40075, CODE_FOR_signbitv16sf2 },
  { 0xf5002d, CODE_FOR_significandsf2 },
  { 0xf5002e, CODE_FOR_significanddf2 },
  { 0xf5002f, CODE_FOR_significandxf2 },
  { 0xf6002d, CODE_FOR_sinsf2 },
  { 0xf6002e, CODE_FOR_sindf2 },
  { 0xf6002f, CODE_FOR_sinxf2 },
  { 0xf7002d, CODE_FOR_sincossf3 },
  { 0xf7002e, CODE_FOR_sincosdf3 },
  { 0xf7002f, CODE_FOR_sincosxf3 },
  { 0xf8002d, CODE_FOR_sinhsf2 },
  { 0xf8002e, CODE_FOR_sinhdf2 },
  { 0xf8002f, CODE_FOR_sinhxf2 },
  { 0xf9002d, CODE_FOR_tansf2 },
  { 0xf9002e, CODE_FOR_tandf2 },
  { 0xf9002f, CODE_FOR_tanxf2 },
  { 0xfa002d, CODE_FOR_tanhsf2 },
  { 0xfa002e, CODE_FOR_tanhdf2 },
  { 0xfa002f, CODE_FOR_tanhxf2 },
  { 0x1020045, CODE_FOR_reduc_smax_scal_v4qi },
  { 0x1020049, CODE_FOR_reduc_smax_scal_v4hi },
  { 0x102004f, CODE_FOR_reduc_smax_scal_v16qi },
  { 0x1020050, CODE_FOR_reduc_smax_scal_v8hi },
  { 0x1020051, CODE_FOR_reduc_smax_scal_v4si },
  { 0x1020052, CODE_FOR_reduc_smax_scal_v2di },
  { 0x1020054, CODE_FOR_reduc_smax_scal_v32qi },
  { 0x1020055, CODE_FOR_reduc_smax_scal_v16hi },
  { 0x1020056, CODE_FOR_reduc_smax_scal_v8si },
  { 0x1020057, CODE_FOR_reduc_smax_scal_v4di },
  { 0x1020059, CODE_FOR_reduc_smax_scal_v64qi },
  { 0x102005a, CODE_FOR_reduc_smax_scal_v32hi },
  { 0x102005b, CODE_FOR_reduc_smax_scal_v16si },
  { 0x102005c, CODE_FOR_reduc_smax_scal_v8di },
  { 0x102006b, CODE_FOR_reduc_smax_scal_v8hf },
  { 0x102006c, CODE_FOR_reduc_smax_scal_v4sf },
  { 0x102006d, CODE_FOR_reduc_smax_scal_v2df },
  { 0x102006f, CODE_FOR_reduc_smax_scal_v16hf },
  { 0x1020070, CODE_FOR_reduc_smax_scal_v8sf },
  { 0x1020071, CODE_FOR_reduc_smax_scal_v4df },
  { 0x1020074, CODE_FOR_reduc_smax_scal_v32hf },
  { 0x1020075, CODE_FOR_reduc_smax_scal_v16sf },
  { 0x1020076, CODE_FOR_reduc_smax_scal_v8df },
  { 0x1030045, CODE_FOR_reduc_smin_scal_v4qi },
  { 0x1030049, CODE_FOR_reduc_smin_scal_v4hi },
  { 0x103004f, CODE_FOR_reduc_smin_scal_v16qi },
  { 0x1030050, CODE_FOR_reduc_smin_scal_v8hi },
  { 0x1030051, CODE_FOR_reduc_smin_scal_v4si },
  { 0x1030052, CODE_FOR_reduc_smin_scal_v2di },
  { 0x1030054, CODE_FOR_reduc_smin_scal_v32qi },
  { 0x1030055, CODE_FOR_reduc_smin_scal_v16hi },
  { 0x1030056, CODE_FOR_reduc_smin_scal_v8si },
  { 0x1030057, CODE_FOR_reduc_smin_scal_v4di },
  { 0x1030059, CODE_FOR_reduc_smin_scal_v64qi },
  { 0x103005a, CODE_FOR_reduc_smin_scal_v32hi },
  { 0x103005b, CODE_FOR_reduc_smin_scal_v16si },
  { 0x103005c, CODE_FOR_reduc_smin_scal_v8di },
  { 0x103006b, CODE_FOR_reduc_smin_scal_v8hf },
  { 0x103006c, CODE_FOR_reduc_smin_scal_v4sf },
  { 0x103006d, CODE_FOR_reduc_smin_scal_v2df },
  { 0x103006f, CODE_FOR_reduc_smin_scal_v16hf },
  { 0x1030070, CODE_FOR_reduc_smin_scal_v8sf },
  { 0x1030071, CODE_FOR_reduc_smin_scal_v4df },
  { 0x1030074, CODE_FOR_reduc_smin_scal_v32hf },
  { 0x1030075, CODE_FOR_reduc_smin_scal_v16sf },
  { 0x1030076, CODE_FOR_reduc_smin_scal_v8df },
  { 0x1040045, CODE_FOR_reduc_plus_scal_v4qi },
  { 0x1040048, CODE_FOR_reduc_plus_scal_v8qi },
  { 0x1040049, CODE_FOR_reduc_plus_scal_v4hi },
  { 0x104004f, CODE_FOR_reduc_plus_scal_v16qi },
  { 0x1040054, CODE_FOR_reduc_plus_scal_v32qi },
  { 0x1040059, CODE_FOR_reduc_plus_scal_v64qi },
  { 0x104006b, CODE_FOR_reduc_plus_scal_v8hf },
  { 0x104006c, CODE_FOR_reduc_plus_scal_v4sf },
  { 0x104006d, CODE_FOR_reduc_plus_scal_v2df },
  { 0x104006f, CODE_FOR_reduc_plus_scal_v16hf },
  { 0x1040070, CODE_FOR_reduc_plus_scal_v8sf },
  { 0x1040071, CODE_FOR_reduc_plus_scal_v4df },
  { 0x1040074, CODE_FOR_reduc_plus_scal_v32hf },
  { 0x1040075, CODE_FOR_reduc_plus_scal_v16sf },
  { 0x1040076, CODE_FOR_reduc_plus_scal_v8df },
  { 0x1050045, CODE_FOR_reduc_umax_scal_v4qi },
  { 0x1050049, CODE_FOR_reduc_umax_scal_v4hi },
  { 0x1050054, CODE_FOR_reduc_umax_scal_v32qi },
  { 0x1050055, CODE_FOR_reduc_umax_scal_v16hi },
  { 0x1050056, CODE_FOR_reduc_umax_scal_v8si },
  { 0x1050057, CODE_FOR_reduc_umax_scal_v4di },
  { 0x1050059, CODE_FOR_reduc_umax_scal_v64qi },
  { 0x105005a, CODE_FOR_reduc_umax_scal_v32hi },
  { 0x105005b, CODE_FOR_reduc_umax_scal_v16si },
  { 0x105005c, CODE_FOR_reduc_umax_scal_v8di },
  { 0x1060045, CODE_FOR_reduc_umin_scal_v4qi },
  { 0x1060049, CODE_FOR_reduc_umin_scal_v4hi },
  { 0x1060050, CODE_FOR_reduc_umin_scal_v8hi },
  { 0x1060054, CODE_FOR_reduc_umin_scal_v32qi },
  { 0x1060055, CODE_FOR_reduc_umin_scal_v16hi },
  { 0x1060056, CODE_FOR_reduc_umin_scal_v8si },
  { 0x1060057, CODE_FOR_reduc_umin_scal_v4di },
  { 0x1060059, CODE_FOR_reduc_umin_scal_v64qi },
  { 0x106005a, CODE_FOR_reduc_umin_scal_v32hi },
  { 0x106005b, CODE_FOR_reduc_umin_scal_v16si },
  { 0x106005c, CODE_FOR_reduc_umin_scal_v8di },
  { 0x1110044, CODE_FOR_uavgv2qi3_ceil },
  { 0x1110045, CODE_FOR_uavgv4qi3_ceil },
  { 0x1110046, CODE_FOR_uavgv2hi3_ceil },
  { 0x1110048, CODE_FOR_uavgv8qi3_ceil },
  { 0x1110049, CODE_FOR_uavgv4hi3_ceil },
  { 0x111004f, CODE_FOR_uavgv16qi3_ceil },
  { 0x1110050, CODE_FOR_uavgv8hi3_ceil },
  { 0x1110054, CODE_FOR_uavgv32qi3_ceil },
  { 0x1110055, CODE_FOR_uavgv16hi3_ceil },
  { 0x1110059, CODE_FOR_uavgv64qi3_ceil },
  { 0x111005a, CODE_FOR_uavgv32hi3_ceil },
  { 0x112004f, CODE_FOR_sdot_prodv16qi },
  { 0x1120050, CODE_FOR_sdot_prodv8hi },
  { 0x1120051, CODE_FOR_sdot_prodv4si },
  { 0x1120054, CODE_FOR_sdot_prodv32qi },
  { 0x1120055, CODE_FOR_sdot_prodv16hi },
  { 0x112005a, CODE_FOR_sdot_prodv32hi },
  { 0x114004f, CODE_FOR_udot_prodv16qi },
  { 0x1140054, CODE_FOR_udot_prodv32qi },
  { 0x115004f, CODE_FOR_usdot_prodv16qi },
  { 0x1150054, CODE_FOR_usdot_prodv32qi },
  { 0x1150059, CODE_FOR_usdot_prodv64qi },
  { 0x1170048, CODE_FOR_usadv8qi },
  { 0x117004f, CODE_FOR_usadv16qi },
  { 0x1170054, CODE_FOR_usadv32qi },
  { 0x1170059, CODE_FOR_usadv64qi },
  { 0x11a0046, CODE_FOR_smulhrsv2hi3 },
  { 0x11a0049, CODE_FOR_smulhrsv4hi3 },
  { 0x11a0050, CODE_FOR_smulhrsv8hi3 },
  { 0x11a0055, CODE_FOR_smulhrsv16hi3 },
  { 0x11a005a, CODE_FOR_smulhrsv32hi3 },
  { 0x11e006d, CODE_FOR_vec_pack_sfix_trunc_v2df },
  { 0x11e0071, CODE_FOR_vec_pack_sfix_trunc_v4df },
  { 0x11e0076, CODE_FOR_vec_pack_sfix_trunc_v8df },
  { 0x120000f, CODE_FOR_vec_pack_trunc_qi },
  { 0x1200010, CODE_FOR_vec_pack_trunc_hi },
  { 0x1200011, CODE_FOR_vec_pack_trunc_si },
  { 0x1200046, CODE_FOR_vec_pack_trunc_v2hi },
  { 0x1200049, CODE_FOR_vec_pack_trunc_v4hi },
  { 0x120004a, CODE_FOR_vec_pack_trunc_v2si },
  { 0x1200050, CODE_FOR_vec_pack_trunc_v8hi },
  { 0x1200051, CODE_FOR_vec_pack_trunc_v4si },
  { 0x1200052, CODE_FOR_vec_pack_trunc_v2di },
  { 0x1200055, CODE_FOR_vec_pack_trunc_v16hi },
  { 0x1200056, CODE_FOR_vec_pack_trunc_v8si },
  { 0x1200057, CODE_FOR_vec_pack_trunc_v4di },
  { 0x120005a, CODE_FOR_vec_pack_trunc_v32hi },
  { 0x120005b, CODE_FOR_vec_pack_trunc_v16si },
  { 0x120005c, CODE_FOR_vec_pack_trunc_v8di },
  { 0x120006d, CODE_FOR_vec_pack_trunc_v2df },
  { 0x1200071, CODE_FOR_vec_pack_trunc_v4df },
  { 0x1200076, CODE_FOR_vec_pack_trunc_v8df },
  { 0x121006d, CODE_FOR_vec_pack_ufix_trunc_v2df },
  { 0x1210071, CODE_FOR_vec_pack_ufix_trunc_v4df },
  { 0x1210076, CODE_FOR_vec_pack_ufix_trunc_v8df },
  { 0x122000f, CODE_FOR_vec_pack_sbool_trunc_qi },
  { 0x1240052, CODE_FOR_vec_packs_float_v2di },
  { 0x1240057, CODE_FOR_vec_packs_float_v4di },
  { 0x124005c, CODE_FOR_vec_packs_float_v8di },
  { 0x1250052, CODE_FOR_vec_packu_float_v2di },
  { 0x1250057, CODE_FOR_vec_packu_float_v4di },
  { 0x125005c, CODE_FOR_vec_packu_float_v8di },
  { 0x126004f, CODE_FOR_vec_permv16qi },
  { 0x1260050, CODE_FOR_vec_permv8hi },
  { 0x1260051, CODE_FOR_vec_permv4si },
  { 0x1260052, CODE_FOR_vec_permv2di },
  { 0x1260054, CODE_FOR_vec_permv32qi },
  { 0x1260055, CODE_FOR_vec_permv16hi },
  { 0x1260056, CODE_FOR_vec_permv8si },
  { 0x1260057, CODE_FOR_vec_permv4di },
  { 0x1260059, CODE_FOR_vec_permv64qi },
  { 0x126005a, CODE_FOR_vec_permv32hi },
  { 0x126005b, CODE_FOR_vec_permv16si },
  { 0x126005c, CODE_FOR_vec_permv8di },
  { 0x126006b, CODE_FOR_vec_permv8hf },
  { 0x126006c, CODE_FOR_vec_permv4sf },
  { 0x126006d, CODE_FOR_vec_permv2df },
  { 0x126006f, CODE_FOR_vec_permv16hf },
  { 0x1260070, CODE_FOR_vec_permv8sf },
  { 0x1260071, CODE_FOR_vec_permv4df },
  { 0x1260074, CODE_FOR_vec_permv32hf },
  { 0x1260075, CODE_FOR_vec_permv16sf },
  { 0x1260076, CODE_FOR_vec_permv8df },
  { 0x1280045, CODE_FOR_vec_setv4qi },
  { 0x1280046, CODE_FOR_vec_setv2hi },
  { 0x1280048, CODE_FOR_vec_setv8qi },
  { 0x1280049, CODE_FOR_vec_setv4hi },
  { 0x128004a, CODE_FOR_vec_setv2si },
  { 0x128004f, CODE_FOR_vec_setv16qi },
  { 0x1280050, CODE_FOR_vec_setv8hi },
  { 0x1280051, CODE_FOR_vec_setv4si },
  { 0x1280052, CODE_FOR_vec_setv2di },
  { 0x1280054, CODE_FOR_vec_setv32qi },
  { 0x1280055, CODE_FOR_vec_setv16hi },
  { 0x1280056, CODE_FOR_vec_setv8si },
  { 0x1280057, CODE_FOR_vec_setv4di },
  { 0x1280059, CODE_FOR_vec_setv64qi },
  { 0x128005a, CODE_FOR_vec_setv32hi },
  { 0x128005b, CODE_FOR_vec_setv16si },
  { 0x128005c, CODE_FOR_vec_setv8di },
  { 0x1280068, CODE_FOR_vec_setv2sf },
  { 0x128006a, CODE_FOR_vec_setv8bf },
  { 0x128006b, CODE_FOR_vec_setv8hf },
  { 0x128006c, CODE_FOR_vec_setv4sf },
  { 0x128006d, CODE_FOR_vec_setv2df },
  { 0x128006e, CODE_FOR_vec_setv16bf },
  { 0x128006f, CODE_FOR_vec_setv16hf },
  { 0x1280070, CODE_FOR_vec_setv8sf },
  { 0x1280071, CODE_FOR_vec_setv4df },
  { 0x1280073, CODE_FOR_vec_setv32bf },
  { 0x1280074, CODE_FOR_vec_setv32hf },
  { 0x1280075, CODE_FOR_vec_setv16sf },
  { 0x1280076, CODE_FOR_vec_setv8df },
  { 0x129004f, CODE_FOR_vec_shl_v16qi },
  { 0x1290050, CODE_FOR_vec_shl_v8hi },
  { 0x1290051, CODE_FOR_vec_shl_v4si },
  { 0x1290052, CODE_FOR_vec_shl_v2di },
  { 0x129006c, CODE_FOR_vec_shl_v4sf },
  { 0x129006d, CODE_FOR_vec_shl_v2df },
  { 0x12a004f, CODE_FOR_vec_shr_v16qi },
  { 0x12a0050, CODE_FOR_vec_shr_v8hi },
  { 0x12a0051, CODE_FOR_vec_shr_v4si },
  { 0x12a0052, CODE_FOR_vec_shr_v2di },
  { 0x12a006c, CODE_FOR_vec_shr_v4sf },
  { 0x12a006d, CODE_FOR_vec_shr_v2df },
  { 0x12b006c, CODE_FOR_vec_unpack_sfix_trunc_hi_v4sf },
  { 0x12b0070, CODE_FOR_vec_unpack_sfix_trunc_hi_v8sf },
  { 0x12b0075, CODE_FOR_vec_unpack_sfix_trunc_hi_v16sf },
  { 0x12c006c, CODE_FOR_vec_unpack_sfix_trunc_lo_v4sf },
  { 0x12c0070, CODE_FOR_vec_unpack_sfix_trunc_lo_v8sf },
  { 0x12c0075, CODE_FOR_vec_unpack_sfix_trunc_lo_v16sf },
  { 0x12d006c, CODE_FOR_vec_unpack_ufix_trunc_hi_v4sf },
  { 0x12d0070, CODE_FOR_vec_unpack_ufix_trunc_hi_v8sf },
  { 0x12d0075, CODE_FOR_vec_unpack_ufix_trunc_hi_v16sf },
  { 0x12e006c, CODE_FOR_vec_unpack_ufix_trunc_lo_v4sf },
  { 0x12e0070, CODE_FOR_vec_unpack_ufix_trunc_lo_v8sf },
  { 0x12e0075, CODE_FOR_vec_unpack_ufix_trunc_lo_v16sf },
  { 0x12f0050, CODE_FOR_vec_unpacks_float_hi_v8hi },
  { 0x12f0051, CODE_FOR_vec_unpacks_float_hi_v4si },
  { 0x12f0055, CODE_FOR_vec_unpacks_float_hi_v16hi },
  { 0x12f0056, CODE_FOR_vec_unpacks_float_hi_v8si },
  { 0x12f005a, CODE_FOR_vec_unpacks_float_hi_v32hi },
  { 0x12f005b, CODE_FOR_vec_unpacks_float_hi_v16si },
  { 0x1300050, CODE_FOR_vec_unpacks_float_lo_v8hi },
  { 0x1300051, CODE_FOR_vec_unpacks_float_lo_v4si },
  { 0x1300055, CODE_FOR_vec_unpacks_float_lo_v16hi },
  { 0x1300056, CODE_FOR_vec_unpacks_float_lo_v8si },
  { 0x130005a, CODE_FOR_vec_unpacks_float_lo_v32hi },
  { 0x130005b, CODE_FOR_vec_unpacks_float_lo_v16si },
  { 0x1310010, CODE_FOR_vec_unpacks_hi_hi },
  { 0x1310011, CODE_FOR_vec_unpacks_hi_si },
  { 0x1310012, CODE_FOR_vec_unpacks_hi_di },
  { 0x1310045, CODE_FOR_vec_unpacks_hi_v4qi },
  { 0x1310048, CODE_FOR_vec_unpacks_hi_v8qi },
  { 0x1310049, CODE_FOR_vec_unpacks_hi_v4hi },
  { 0x131004f, CODE_FOR_vec_unpacks_hi_v16qi },
  { 0x1310050, CODE_FOR_vec_unpacks_hi_v8hi },
  { 0x1310051, CODE_FOR_vec_unpacks_hi_v4si },
  { 0x1310054, CODE_FOR_vec_unpacks_hi_v32qi },
  { 0x1310055, CODE_FOR_vec_unpacks_hi_v16hi },
  { 0x1310056, CODE_FOR_vec_unpacks_hi_v8si },
  { 0x1310059, CODE_FOR_vec_unpacks_hi_v64qi },
  { 0x131005a, CODE_FOR_vec_unpacks_hi_v32hi },
  { 0x131005b, CODE_FOR_vec_unpacks_hi_v16si },
  { 0x131006c, CODE_FOR_vec_unpacks_hi_v4sf },
  { 0x1310070, CODE_FOR_vec_unpacks_hi_v8sf },
  { 0x1310075, CODE_FOR_vec_unpacks_hi_v16sf },
  { 0x1320010, CODE_FOR_vec_unpacks_lo_hi },
  { 0x1320011, CODE_FOR_vec_unpacks_lo_si },
  { 0x1320012, CODE_FOR_vec_unpacks_lo_di },
  { 0x1320045, CODE_FOR_vec_unpacks_lo_v4qi },
  { 0x1320048, CODE_FOR_vec_unpacks_lo_v8qi },
  { 0x1320049, CODE_FOR_vec_unpacks_lo_v4hi },
  { 0x132004f, CODE_FOR_vec_unpacks_lo_v16qi },
  { 0x1320050, CODE_FOR_vec_unpacks_lo_v8hi },
  { 0x1320051, CODE_FOR_vec_unpacks_lo_v4si },
  { 0x1320054, CODE_FOR_vec_unpacks_lo_v32qi },
  { 0x1320055, CODE_FOR_vec_unpacks_lo_v16hi },
  { 0x1320056, CODE_FOR_vec_unpacks_lo_v8si },
  { 0x1320059, CODE_FOR_vec_unpacks_lo_v64qi },
  { 0x132005a, CODE_FOR_vec_unpacks_lo_v32hi },
  { 0x132005b, CODE_FOR_vec_unpacks_lo_v16si },
  { 0x132006c, CODE_FOR_vec_unpacks_lo_v4sf },
  { 0x1320070, CODE_FOR_vec_unpacks_lo_v8sf },
  { 0x1320075, CODE_FOR_vec_unpacks_lo_v16sf },
  { 0x133000f, CODE_FOR_vec_unpacks_sbool_hi_qi },
  { 0x134000f, CODE_FOR_vec_unpacks_sbool_lo_qi },
  { 0x1350050, CODE_FOR_vec_unpacku_float_hi_v8hi },
  { 0x1350051, CODE_FOR_vec_unpacku_float_hi_v4si },
  { 0x1350055, CODE_FOR_vec_unpacku_float_hi_v16hi },
  { 0x1350056, CODE_FOR_vec_unpacku_float_hi_v8si },
  { 0x135005a, CODE_FOR_vec_unpacku_float_hi_v32hi },
  { 0x135005b, CODE_FOR_vec_unpacku_float_hi_v16si },
  { 0x1360050, CODE_FOR_vec_unpacku_float_lo_v8hi },
  { 0x1360051, CODE_FOR_vec_unpacku_float_lo_v4si },
  { 0x1360055, CODE_FOR_vec_unpacku_float_lo_v16hi },
  { 0x1360056, CODE_FOR_vec_unpacku_float_lo_v8si },
  { 0x136005a, CODE_FOR_vec_unpacku_float_lo_v32hi },
  { 0x136005b, CODE_FOR_vec_unpacku_float_lo_v16si },
  { 0x1370045, CODE_FOR_vec_unpacku_hi_v4qi },
  { 0x1370048, CODE_FOR_vec_unpacku_hi_v8qi },
  { 0x1370049, CODE_FOR_vec_unpacku_hi_v4hi },
  { 0x137004f, CODE_FOR_vec_unpacku_hi_v16qi },
  { 0x1370050, CODE_FOR_vec_unpacku_hi_v8hi },
  { 0x1370051, CODE_FOR_vec_unpacku_hi_v4si },
  { 0x1370054, CODE_FOR_vec_unpacku_hi_v32qi },
  { 0x1370055, CODE_FOR_vec_unpacku_hi_v16hi },
  { 0x1370056, CODE_FOR_vec_unpacku_hi_v8si },
  { 0x1370059, CODE_FOR_vec_unpacku_hi_v64qi },
  { 0x137005a, CODE_FOR_vec_unpacku_hi_v32hi },
  { 0x137005b, CODE_FOR_vec_unpacku_hi_v16si },
  { 0x1380045, CODE_FOR_vec_unpacku_lo_v4qi },
  { 0x1380048, CODE_FOR_vec_unpacku_lo_v8qi },
  { 0x1380049, CODE_FOR_vec_unpacku_lo_v4hi },
  { 0x138004f, CODE_FOR_vec_unpacku_lo_v16qi },
  { 0x1380050, CODE_FOR_vec_unpacku_lo_v8hi },
  { 0x1380051, CODE_FOR_vec_unpacku_lo_v4si },
  { 0x1380054, CODE_FOR_vec_unpacku_lo_v32qi },
  { 0x1380055, CODE_FOR_vec_unpacku_lo_v16hi },
  { 0x1380056, CODE_FOR_vec_unpacku_lo_v8si },
  { 0x1380059, CODE_FOR_vec_unpacku_lo_v64qi },
  { 0x138005a, CODE_FOR_vec_unpacku_lo_v32hi },
  { 0x138005b, CODE_FOR_vec_unpacku_lo_v16si },
  { 0x1390051, CODE_FOR_vec_widen_smult_even_v4si },
  { 0x1390056, CODE_FOR_vec_widen_smult_even_v8si },
  { 0x139005b, CODE_FOR_vec_widen_smult_even_v16si },
  { 0x13a004f, CODE_FOR_vec_widen_smult_hi_v16qi },
  { 0x13a0050, CODE_FOR_vec_widen_smult_hi_v8hi },
  { 0x13a0051, CODE_FOR_vec_widen_smult_hi_v4si },
  { 0x13a0054, CODE_FOR_vec_widen_smult_hi_v32qi },
  { 0x13a0055, CODE_FOR_vec_widen_smult_hi_v16hi },
  { 0x13a0056, CODE_FOR_vec_widen_smult_hi_v8si },
  { 0x13b004f, CODE_FOR_vec_widen_smult_lo_v16qi },
  { 0x13b0050, CODE_FOR_vec_widen_smult_lo_v8hi },
  { 0x13b0051, CODE_FOR_vec_widen_smult_lo_v4si },
  { 0x13b0054, CODE_FOR_vec_widen_smult_lo_v32qi },
  { 0x13b0055, CODE_FOR_vec_widen_smult_lo_v16hi },
  { 0x13b0056, CODE_FOR_vec_widen_smult_lo_v8si },
  { 0x13c0051, CODE_FOR_vec_widen_smult_odd_v4si },
  { 0x13c0056, CODE_FOR_vec_widen_smult_odd_v8si },
  { 0x13c005b, CODE_FOR_vec_widen_smult_odd_v16si },
  { 0x1430051, CODE_FOR_vec_widen_umult_even_v4si },
  { 0x1430056, CODE_FOR_vec_widen_umult_even_v8si },
  { 0x143005b, CODE_FOR_vec_widen_umult_even_v16si },
  { 0x144004f, CODE_FOR_vec_widen_umult_hi_v16qi },
  { 0x1440050, CODE_FOR_vec_widen_umult_hi_v8hi },
  { 0x1440051, CODE_FOR_vec_widen_umult_hi_v4si },
  { 0x1440054, CODE_FOR_vec_widen_umult_hi_v32qi },
  { 0x1440055, CODE_FOR_vec_widen_umult_hi_v16hi },
  { 0x1440056, CODE_FOR_vec_widen_umult_hi_v8si },
  { 0x145004f, CODE_FOR_vec_widen_umult_lo_v16qi },
  { 0x1450050, CODE_FOR_vec_widen_umult_lo_v8hi },
  { 0x1450051, CODE_FOR_vec_widen_umult_lo_v4si },
  { 0x1450054, CODE_FOR_vec_widen_umult_lo_v32qi },
  { 0x1450055, CODE_FOR_vec_widen_umult_lo_v16hi },
  { 0x1450056, CODE_FOR_vec_widen_umult_lo_v8si },
  { 0x1460051, CODE_FOR_vec_widen_umult_odd_v4si },
  { 0x1460056, CODE_FOR_vec_widen_umult_odd_v8si },
  { 0x146005b, CODE_FOR_vec_widen_umult_odd_v16si },
  { 0x14d0068, CODE_FOR_vec_addsubv2sf3 },
  { 0x14d006c, CODE_FOR_vec_addsubv4sf3 },
  { 0x14d006d, CODE_FOR_vec_addsubv2df3 },
  { 0x14d0070, CODE_FOR_vec_addsubv8sf3 },
  { 0x14d0071, CODE_FOR_vec_addsubv4df3 },
  { 0x14e006c, CODE_FOR_vec_fmaddsubv4sf4 },
  { 0x14e006d, CODE_FOR_vec_fmaddsubv2df4 },
  { 0x14e0070, CODE_FOR_vec_fmaddsubv8sf4 },
  { 0x14e0071, CODE_FOR_vec_fmaddsubv4df4 },
  { 0x14e0075, CODE_FOR_vec_fmaddsubv16sf4 },
  { 0x14e0076, CODE_FOR_vec_fmaddsubv8df4 },
  { 0x14f006c, CODE_FOR_vec_fmsubaddv4sf4 },
  { 0x14f006d, CODE_FOR_vec_fmsubaddv2df4 },
  { 0x14f0070, CODE_FOR_vec_fmsubaddv8sf4 },
  { 0x14f0071, CODE_FOR_vec_fmsubaddv4df4 },
  { 0x14f0075, CODE_FOR_vec_fmsubaddv16sf4 },
  { 0x14f0076, CODE_FOR_vec_fmsubaddv8df4 },
  { 0x158000f, CODE_FOR_atomic_addqi },
  { 0x1580010, CODE_FOR_atomic_addhi },
  { 0x1580011, CODE_FOR_atomic_addsi },
  { 0x1580012, CODE_FOR_atomic_adddi },
  { 0x159000f, CODE_FOR_atomic_and_fetchqi },
  { 0x1590010, CODE_FOR_atomic_and_fetchhi },
  { 0x1590011, CODE_FOR_atomic_and_fetchsi },
  { 0x1590012, CODE_FOR_atomic_and_fetchdi },
  { 0x1590013, CODE_FOR_atomic_and_fetchti },
  { 0x15a000f, CODE_FOR_atomic_andqi },
  { 0x15a0010, CODE_FOR_atomic_andhi },
  { 0x15a0011, CODE_FOR_atomic_andsi },
  { 0x15a0012, CODE_FOR_atomic_anddi },
  { 0x15b0010, CODE_FOR_atomic_bit_test_and_sethi },
  { 0x15b0011, CODE_FOR_atomic_bit_test_and_setsi },
  { 0x15b0012, CODE_FOR_atomic_bit_test_and_setdi },
  { 0x15c0010, CODE_FOR_atomic_bit_test_and_complementhi },
  { 0x15c0011, CODE_FOR_atomic_bit_test_and_complementsi },
  { 0x15c0012, CODE_FOR_atomic_bit_test_and_complementdi },
  { 0x15d0010, CODE_FOR_atomic_bit_test_and_resethi },
  { 0x15d0011, CODE_FOR_atomic_bit_test_and_resetsi },
  { 0x15d0012, CODE_FOR_atomic_bit_test_and_resetdi },
  { 0x15e000f, CODE_FOR_atomic_compare_and_swapqi },
  { 0x15e0010, CODE_FOR_atomic_compare_and_swaphi },
  { 0x15e0011, CODE_FOR_atomic_compare_and_swapsi },
  { 0x15e0012, CODE_FOR_atomic_compare_and_swapdi },
  { 0x15e0013, CODE_FOR_atomic_compare_and_swapti },
  { 0x15f000f, CODE_FOR_atomic_exchangeqi },
  { 0x15f0010, CODE_FOR_atomic_exchangehi },
  { 0x15f0011, CODE_FOR_atomic_exchangesi },
  { 0x15f0012, CODE_FOR_atomic_exchangedi },
  { 0x160000f, CODE_FOR_atomic_fetch_addqi },
  { 0x1600010, CODE_FOR_atomic_fetch_addhi },
  { 0x1600011, CODE_FOR_atomic_fetch_addsi },
  { 0x1600012, CODE_FOR_atomic_fetch_adddi },
  { 0x161000f, CODE_FOR_atomic_fetch_andqi },
  { 0x1610010, CODE_FOR_atomic_fetch_andhi },
  { 0x1610011, CODE_FOR_atomic_fetch_andsi },
  { 0x1610012, CODE_FOR_atomic_fetch_anddi },
  { 0x1610013, CODE_FOR_atomic_fetch_andti },
  { 0x162000f, CODE_FOR_atomic_fetch_nandqi },
  { 0x1620010, CODE_FOR_atomic_fetch_nandhi },
  { 0x1620011, CODE_FOR_atomic_fetch_nandsi },
  { 0x1620012, CODE_FOR_atomic_fetch_nanddi },
  { 0x1620013, CODE_FOR_atomic_fetch_nandti },
  { 0x163000f, CODE_FOR_atomic_fetch_orqi },
  { 0x1630010, CODE_FOR_atomic_fetch_orhi },
  { 0x1630011, CODE_FOR_atomic_fetch_orsi },
  { 0x1630012, CODE_FOR_atomic_fetch_ordi },
  { 0x1630013, CODE_FOR_atomic_fetch_orti },
  { 0x165000f, CODE_FOR_atomic_fetch_xorqi },
  { 0x1650010, CODE_FOR_atomic_fetch_xorhi },
  { 0x1650011, CODE_FOR_atomic_fetch_xorsi },
  { 0x1650012, CODE_FOR_atomic_fetch_xordi },
  { 0x1650013, CODE_FOR_atomic_fetch_xorti },
  { 0x166000f, CODE_FOR_atomic_loadqi },
  { 0x1660010, CODE_FOR_atomic_loadhi },
  { 0x1660011, CODE_FOR_atomic_loadsi },
  { 0x1660012, CODE_FOR_atomic_loaddi },
  { 0x167000f, CODE_FOR_atomic_nand_fetchqi },
  { 0x1670010, CODE_FOR_atomic_nand_fetchhi },
  { 0x1670011, CODE_FOR_atomic_nand_fetchsi },
  { 0x1670012, CODE_FOR_atomic_nand_fetchdi },
  { 0x1670013, CODE_FOR_atomic_nand_fetchti },
  { 0x169000f, CODE_FOR_atomic_or_fetchqi },
  { 0x1690010, CODE_FOR_atomic_or_fetchhi },
  { 0x1690011, CODE_FOR_atomic_or_fetchsi },
  { 0x1690012, CODE_FOR_atomic_or_fetchdi },
  { 0x1690013, CODE_FOR_atomic_or_fetchti },
  { 0x16a000f, CODE_FOR_atomic_orqi },
  { 0x16a0010, CODE_FOR_atomic_orhi },
  { 0x16a0011, CODE_FOR_atomic_orsi },
  { 0x16a0012, CODE_FOR_atomic_ordi },
  { 0x16b000f, CODE_FOR_atomic_storeqi },
  { 0x16b0010, CODE_FOR_atomic_storehi },
  { 0x16b0011, CODE_FOR_atomic_storesi },
  { 0x16b0012, CODE_FOR_atomic_storedi },
  { 0x16d000f, CODE_FOR_atomic_subqi },
  { 0x16d0010, CODE_FOR_atomic_subhi },
  { 0x16d0011, CODE_FOR_atomic_subsi },
  { 0x16d0012, CODE_FOR_atomic_subdi },
  { 0x16e000f, CODE_FOR_atomic_xor_fetchqi },
  { 0x16e0010, CODE_FOR_atomic_xor_fetchhi },
  { 0x16e0011, CODE_FOR_atomic_xor_fetchsi },
  { 0x16e0012, CODE_FOR_atomic_xor_fetchdi },
  { 0x16e0013, CODE_FOR_atomic_xor_fetchti },
  { 0x16f000f, CODE_FOR_atomic_xorqi },
  { 0x16f0010, CODE_FOR_atomic_xorhi },
  { 0x16f0011, CODE_FOR_atomic_xorsi },
  { 0x16f0012, CODE_FOR_atomic_xordi },
  { 0x170000f, CODE_FOR_atomic_add_fetch_cmp_0qi },
  { 0x1700010, CODE_FOR_atomic_add_fetch_cmp_0hi },
  { 0x1700011, CODE_FOR_atomic_add_fetch_cmp_0si },
  { 0x1700012, CODE_FOR_atomic_add_fetch_cmp_0di },
  { 0x171000f, CODE_FOR_atomic_sub_fetch_cmp_0qi },
  { 0x1710010, CODE_FOR_atomic_sub_fetch_cmp_0hi },
  { 0x1710011, CODE_FOR_atomic_sub_fetch_cmp_0si },
  { 0x1710012, CODE_FOR_atomic_sub_fetch_cmp_0di },
  { 0x172000f, CODE_FOR_atomic_and_fetch_cmp_0qi },
  { 0x1720010, CODE_FOR_atomic_and_fetch_cmp_0hi },
  { 0x1720011, CODE_FOR_atomic_and_fetch_cmp_0si },
  { 0x1720012, CODE_FOR_atomic_and_fetch_cmp_0di },
  { 0x173000f, CODE_FOR_atomic_or_fetch_cmp_0qi },
  { 0x1730010, CODE_FOR_atomic_or_fetch_cmp_0hi },
  { 0x1730011, CODE_FOR_atomic_or_fetch_cmp_0si },
  { 0x1730012, CODE_FOR_atomic_or_fetch_cmp_0di },
  { 0x174000f, CODE_FOR_atomic_xor_fetch_cmp_0qi },
  { 0x1740010, CODE_FOR_atomic_xor_fetch_cmp_0hi },
  { 0x1740011, CODE_FOR_atomic_xor_fetch_cmp_0si },
  { 0x1740012, CODE_FOR_atomic_xor_fetch_cmp_0di },
  { 0x1750011, CODE_FOR_get_thread_pointersi },
  { 0x1750012, CODE_FOR_get_thread_pointerdi },
  { 0x179004f, CODE_FOR_vec_duplicatev16qi },
  { 0x1790050, CODE_FOR_vec_duplicatev8hi },
  { 0x1790051, CODE_FOR_vec_duplicatev4si },
  { 0x1790052, CODE_FOR_vec_duplicatev2di },
  { 0x1790054, CODE_FOR_vec_duplicatev32qi },
  { 0x1790055, CODE_FOR_vec_duplicatev16hi },
  { 0x1790056, CODE_FOR_vec_duplicatev8si },
  { 0x1790057, CODE_FOR_vec_duplicatev4di },
  { 0x1790059, CODE_FOR_vec_duplicatev64qi },
  { 0x179005a, CODE_FOR_vec_duplicatev32hi },
  { 0x179005b, CODE_FOR_vec_duplicatev16si },
  { 0x179005c, CODE_FOR_vec_duplicatev8di },
};

void
init_all_optabs (struct target_optabs *optabs)
{
  bool *ena = optabs->pat_enable;
  ena[0] = HAVE_extendqihi2;
  ena[1] = HAVE_extendqisi2;
  ena[2] = HAVE_extendqidi2;
  ena[3] = HAVE_extendhisi2;
  ena[4] = HAVE_extendhidi2;
  ena[5] = HAVE_extendsidi2;
  ena[6] = HAVE_extendditi2;
  ena[7] = HAVE_extendhfsf2;
  ena[8] = HAVE_extendhfdf2;
  ena[9] = HAVE_extendbfsf2;
  ena[10] = HAVE_extendsfdf2;
  ena[11] = HAVE_extendsfxf2;
  ena[12] = HAVE_extenddfxf2;
  ena[13] = HAVE_extendv2qiv2di2;
  ena[14] = HAVE_extendv4qiv4si2;
  ena[15] = HAVE_extendv4qiv4di2;
  ena[16] = HAVE_extendv2hiv2di2;
  ena[17] = HAVE_extendv8qiv8hi2;
  ena[18] = HAVE_extendv8qiv8si2;
  ena[19] = HAVE_extendv8qiv8di2;
  ena[20] = HAVE_extendv4hiv4si2;
  ena[21] = HAVE_extendv4hiv4di2;
  ena[22] = HAVE_extendv2siv2di2;
  ena[23] = HAVE_extendv16qiv16hi2;
  ena[24] = HAVE_extendv16qiv16si2;
  ena[25] = HAVE_extendv8hiv8si2;
  ena[26] = HAVE_extendv8hiv8di2;
  ena[27] = HAVE_extendv4siv4di2;
  ena[28] = HAVE_extendv32qiv32hi2;
  ena[29] = HAVE_extendv16hiv16si2;
  ena[30] = HAVE_extendv8siv8di2;
  ena[31] = HAVE_extendv2hfv2df2;
  ena[32] = HAVE_extendv4hfv4sf2;
  ena[33] = HAVE_extendv4hfv4df2;
  ena[34] = HAVE_extendv2sfv2df2;
  ena[35] = HAVE_extendv8hfv8sf2;
  ena[36] = HAVE_extendv8hfv8df2;
  ena[37] = HAVE_extendv4sfv4df2;
  ena[38] = HAVE_extendv16hfv16sf2;
  ena[39] = HAVE_extendv8sfv8df2;
  ena[40] = HAVE_truncsfhf2;
  ena[41] = HAVE_truncsfbf2;
  ena[42] = HAVE_truncdfhf2;
  ena[43] = HAVE_truncdfsf2;
  ena[44] = HAVE_truncxfsf2;
  ena[45] = HAVE_truncxfdf2;
  ena[46] = HAVE_truncv8hiv8qi2;
  ena[47] = HAVE_truncv4siv4qi2;
  ena[48] = HAVE_truncv4siv4hi2;
  ena[49] = HAVE_truncv2div2qi2;
  ena[50] = HAVE_truncv2div2hi2;
  ena[51] = HAVE_truncv2div2si2;
  ena[52] = HAVE_truncv16hiv16qi2;
  ena[53] = HAVE_truncv8siv8qi2;
  ena[54] = HAVE_truncv8siv8hi2;
  ena[55] = HAVE_truncv4div4qi2;
  ena[56] = HAVE_truncv4div4hi2;
  ena[57] = HAVE_truncv4div4si2;
  ena[58] = HAVE_truncv32hiv32qi2;
  ena[59] = HAVE_truncv16siv16qi2;
  ena[60] = HAVE_truncv16siv16hi2;
  ena[61] = HAVE_truncv8div8qi2;
  ena[62] = HAVE_truncv8div8hi2;
  ena[63] = HAVE_truncv8div8si2;
  ena[64] = HAVE_truncv4sfv4hf2;
  ena[65] = HAVE_truncv2dfv2hf2;
  ena[66] = HAVE_truncv2dfv2sf2;
  ena[67] = HAVE_truncv8sfv8hf2;
  ena[68] = HAVE_truncv4dfv4hf2;
  ena[69] = HAVE_truncv4dfv4sf2;
  ena[70] = HAVE_truncv16sfv16hf2;
  ena[71] = HAVE_truncv8dfv8hf2;
  ena[72] = HAVE_truncv8dfv8sf2;
  ena[73] = HAVE_zero_extendqihi2;
  ena[74] = HAVE_zero_extendqisi2;
  ena[75] = HAVE_zero_extendqidi2;
  ena[76] = HAVE_zero_extendhisi2;
  ena[77] = HAVE_zero_extendhidi2;
  ena[78] = HAVE_zero_extendsidi2;
  ena[79] = HAVE_zero_extendditi2;
  ena[80] = HAVE_zero_extendv2qiv2di2;
  ena[81] = HAVE_zero_extendv4qiv4si2;
  ena[82] = HAVE_zero_extendv4qiv4di2;
  ena[83] = HAVE_zero_extendv2hiv2di2;
  ena[84] = HAVE_zero_extendv8qiv8hi2;
  ena[85] = HAVE_zero_extendv8qiv8si2;
  ena[86] = HAVE_zero_extendv8qiv8di2;
  ena[87] = HAVE_zero_extendv4hiv4si2;
  ena[88] = HAVE_zero_extendv4hiv4di2;
  ena[89] = HAVE_zero_extendv2siv2di2;
  ena[90] = HAVE_zero_extendv16qiv16hi2;
  ena[91] = HAVE_zero_extendv16qiv16si2;
  ena[92] = HAVE_zero_extendv8hiv8si2;
  ena[93] = HAVE_zero_extendv8hiv8di2;
  ena[94] = HAVE_zero_extendv4siv4di2;
  ena[95] = HAVE_zero_extendv32qiv32hi2;
  ena[96] = HAVE_zero_extendv16hiv16si2;
  ena[97] = HAVE_zero_extendv8siv8di2;
  ena[98] = HAVE_floathisf2;
  ena[99] = HAVE_floathidf2;
  ena[100] = HAVE_floathixf2;
  ena[101] = HAVE_floatsihf2;
  ena[102] = HAVE_floatsisf2;
  ena[103] = HAVE_floatsidf2;
  ena[104] = HAVE_floatsixf2;
  ena[105] = HAVE_floatdihf2;
  ena[106] = HAVE_floatdisf2;
  ena[107] = HAVE_floatdidf2;
  ena[108] = HAVE_floatdixf2;
  ena[109] = HAVE_floatv2siv2sf2;
  ena[110] = HAVE_floatv2siv2df2;
  ena[111] = HAVE_floatv8hiv8hf2;
  ena[112] = HAVE_floatv4siv4hf2;
  ena[113] = HAVE_floatv4siv4sf2;
  ena[114] = HAVE_floatv4siv4df2;
  ena[115] = HAVE_floatv2div2hf2;
  ena[116] = HAVE_floatv2div2sf2;
  ena[117] = HAVE_floatv2div2df2;
  ena[118] = HAVE_floatv16hiv16hf2;
  ena[119] = HAVE_floatv8siv8hf2;
  ena[120] = HAVE_floatv8siv8sf2;
  ena[121] = HAVE_floatv8siv8df2;
  ena[122] = HAVE_floatv4div4hf2;
  ena[123] = HAVE_floatv4div4sf2;
  ena[124] = HAVE_floatv4div4df2;
  ena[125] = HAVE_floatv32hiv32hf2;
  ena[126] = HAVE_floatv16siv16hf2;
  ena[127] = HAVE_floatv16siv16sf2;
  ena[128] = HAVE_floatv8div8hf2;
  ena[129] = HAVE_floatv8div8sf2;
  ena[130] = HAVE_floatv8div8df2;
  ena[131] = HAVE_floatunsqisf2;
  ena[132] = HAVE_floatunsqidf2;
  ena[133] = HAVE_floatunshisf2;
  ena[134] = HAVE_floatunshidf2;
  ena[135] = HAVE_floatunssihf2;
  ena[136] = HAVE_floatunssisf2;
  ena[137] = HAVE_floatunssidf2;
  ena[138] = HAVE_floatunssixf2;
  ena[139] = HAVE_floatunsdihf2;
  ena[140] = HAVE_floatunsdisf2;
  ena[141] = HAVE_floatunsdidf2;
  ena[142] = HAVE_floatunsv2siv2sf2;
  ena[143] = HAVE_floatunsv2siv2df2;
  ena[144] = HAVE_floatunsv8hiv8hf2;
  ena[145] = HAVE_floatunsv4siv4hf2;
  ena[146] = HAVE_floatunsv4siv4sf2;
  ena[147] = HAVE_floatunsv4siv4df2;
  ena[148] = HAVE_floatunsv2div2hf2;
  ena[149] = HAVE_floatunsv2div2sf2;
  ena[150] = HAVE_floatunsv2div2df2;
  ena[151] = HAVE_floatunsv16hiv16hf2;
  ena[152] = HAVE_floatunsv8siv8hf2;
  ena[153] = HAVE_floatunsv8siv8sf2;
  ena[154] = HAVE_floatunsv8siv8df2;
  ena[155] = HAVE_floatunsv4div4hf2;
  ena[156] = HAVE_floatunsv4div4sf2;
  ena[157] = HAVE_floatunsv4div4df2;
  ena[158] = HAVE_floatunsv32hiv32hf2;
  ena[159] = HAVE_floatunsv16siv16hf2;
  ena[160] = HAVE_floatunsv16siv16sf2;
  ena[161] = HAVE_floatunsv8div8hf2;
  ena[162] = HAVE_floatunsv8div8sf2;
  ena[163] = HAVE_floatunsv8div8df2;
  ena[164] = HAVE_lrintsfsi2;
  ena[165] = HAVE_lrintsfdi2;
  ena[166] = HAVE_lrintdfsi2;
  ena[167] = HAVE_lrintdfdi2;
  ena[168] = HAVE_lrintxfhi2;
  ena[169] = HAVE_lrintxfsi2;
  ena[170] = HAVE_lrintxfdi2;
  ena[171] = HAVE_lrintv2sfv2si2;
  ena[172] = HAVE_lrintv4sfv4si2;
  ena[173] = HAVE_lrintv2dfv2di2;
  ena[174] = HAVE_lrintv8sfv8si2;
  ena[175] = HAVE_lrintv4dfv4di2;
  ena[176] = HAVE_lrintv16sfv16si2;
  ena[177] = HAVE_lrintv8dfv8di2;
  ena[178] = HAVE_lroundsfhi2;
  ena[179] = HAVE_lroundsfsi2;
  ena[180] = HAVE_lroundsfdi2;
  ena[181] = HAVE_lrounddfhi2;
  ena[182] = HAVE_lrounddfsi2;
  ena[183] = HAVE_lrounddfdi2;
  ena[184] = HAVE_lroundxfhi2;
  ena[185] = HAVE_lroundxfsi2;
  ena[186] = HAVE_lroundxfdi2;
  ena[187] = HAVE_lroundv2sfv2si2;
  ena[188] = HAVE_lroundv4sfv4si2;
  ena[189] = HAVE_lroundv2dfv2di2;
  ena[190] = HAVE_lroundv8sfv8si2;
  ena[191] = HAVE_lroundv4dfv4di2;
  ena[192] = HAVE_lroundv16sfv16si2;
  ena[193] = HAVE_lroundv8dfv8di2;
  ena[194] = HAVE_lfloorsfsi2;
  ena[195] = HAVE_lfloorsfdi2;
  ena[196] = HAVE_lfloordfsi2;
  ena[197] = HAVE_lfloordfdi2;
  ena[198] = HAVE_lfloorxfhi2;
  ena[199] = HAVE_lfloorxfsi2;
  ena[200] = HAVE_lfloorxfdi2;
  ena[201] = HAVE_lfloorv2sfv2si2;
  ena[202] = HAVE_lfloorv4sfv4si2;
  ena[203] = HAVE_lfloorv2dfv2di2;
  ena[204] = HAVE_lfloorv8sfv8si2;
  ena[205] = HAVE_lfloorv4dfv4di2;
  ena[206] = HAVE_lfloorv16sfv16si2;
  ena[207] = HAVE_lfloorv8dfv8di2;
  ena[208] = HAVE_lceilsfsi2;
  ena[209] = HAVE_lceilsfdi2;
  ena[210] = HAVE_lceildfsi2;
  ena[211] = HAVE_lceildfdi2;
  ena[212] = HAVE_lceilxfhi2;
  ena[213] = HAVE_lceilxfsi2;
  ena[214] = HAVE_lceilxfdi2;
  ena[215] = HAVE_lceilv2sfv2si2;
  ena[216] = HAVE_lceilv4sfv4si2;
  ena[217] = HAVE_lceilv2dfv2di2;
  ena[218] = HAVE_lceilv8sfv8si2;
  ena[219] = HAVE_lceilv4dfv4di2;
  ena[220] = HAVE_lceilv16sfv16si2;
  ena[221] = HAVE_lceilv8dfv8di2;
  ena[222] = HAVE_fix_trunchfsi2;
  ena[223] = HAVE_fix_trunchfdi2;
  ena[224] = HAVE_fix_truncsfhi2;
  ena[225] = HAVE_fix_truncsfsi2;
  ena[226] = HAVE_fix_truncsfdi2;
  ena[227] = HAVE_fix_truncdfhi2;
  ena[228] = HAVE_fix_truncdfsi2;
  ena[229] = HAVE_fix_truncdfdi2;
  ena[230] = HAVE_fix_truncxfhi2;
  ena[231] = HAVE_fix_truncxfsi2;
  ena[232] = HAVE_fix_truncxfdi2;
  ena[233] = HAVE_fix_truncv2hfv2di2;
  ena[234] = HAVE_fix_truncv4hfv4si2;
  ena[235] = HAVE_fix_truncv4hfv4di2;
  ena[236] = HAVE_fix_truncv2sfv2si2;
  ena[237] = HAVE_fix_truncv2sfv2di2;
  ena[238] = HAVE_fix_truncv8hfv8hi2;
  ena[239] = HAVE_fix_truncv8hfv8si2;
  ena[240] = HAVE_fix_truncv8hfv8di2;
  ena[241] = HAVE_fix_truncv4sfv4si2;
  ena[242] = HAVE_fix_truncv4sfv4di2;
  ena[243] = HAVE_fix_truncv2dfv2si2;
  ena[244] = HAVE_fix_truncv2dfv2di2;
  ena[245] = HAVE_fix_truncv16hfv16hi2;
  ena[246] = HAVE_fix_truncv16hfv16si2;
  ena[247] = HAVE_fix_truncv8sfv8si2;
  ena[248] = HAVE_fix_truncv8sfv8di2;
  ena[249] = HAVE_fix_truncv4dfv4si2;
  ena[250] = HAVE_fix_truncv4dfv4di2;
  ena[251] = HAVE_fix_truncv32hfv32hi2;
  ena[252] = HAVE_fix_truncv16sfv16si2;
  ena[253] = HAVE_fix_truncv8dfv8si2;
  ena[254] = HAVE_fix_truncv8dfv8di2;
  ena[255] = HAVE_fixuns_trunchfhi2;
  ena[256] = HAVE_fixuns_trunchfsi2;
  ena[257] = HAVE_fixuns_trunchfdi2;
  ena[258] = HAVE_fixuns_truncsfhi2;
  ena[259] = HAVE_fixuns_truncsfsi2;
  ena[260] = HAVE_fixuns_truncsfdi2;
  ena[261] = HAVE_fixuns_truncdfhi2;
  ena[262] = HAVE_fixuns_truncdfsi2;
  ena[263] = HAVE_fixuns_truncdfdi2;
  ena[264] = HAVE_fixuns_truncv2hfv2di2;
  ena[265] = HAVE_fixuns_truncv4hfv4si2;
  ena[266] = HAVE_fixuns_truncv4hfv4di2;
  ena[267] = HAVE_fixuns_truncv2sfv2si2;
  ena[268] = HAVE_fixuns_truncv2sfv2di2;
  ena[269] = HAVE_fixuns_truncv8hfv8hi2;
  ena[270] = HAVE_fixuns_truncv8hfv8si2;
  ena[271] = HAVE_fixuns_truncv8hfv8di2;
  ena[272] = HAVE_fixuns_truncv4sfv4si2;
  ena[273] = HAVE_fixuns_truncv4sfv4di2;
  ena[274] = HAVE_fixuns_truncv2dfv2si2;
  ena[275] = HAVE_fixuns_truncv2dfv2di2;
  ena[276] = HAVE_fixuns_truncv16hfv16hi2;
  ena[277] = HAVE_fixuns_truncv16hfv16si2;
  ena[278] = HAVE_fixuns_truncv8sfv8si2;
  ena[279] = HAVE_fixuns_truncv8sfv8di2;
  ena[280] = HAVE_fixuns_truncv4dfv4si2;
  ena[281] = HAVE_fixuns_truncv4dfv4di2;
  ena[282] = HAVE_fixuns_truncv32hfv32hi2;
  ena[283] = HAVE_fixuns_truncv16sfv16si2;
  ena[284] = HAVE_fixuns_truncv8dfv8si2;
  ena[285] = HAVE_fixuns_truncv8dfv8di2;
  ena[286] = HAVE_mulqihi3;
  ena[287] = HAVE_mulsidi3;
  ena[288] = HAVE_mulditi3;
  ena[289] = HAVE_umulqihi3;
  ena[290] = HAVE_umulsidi3;
  ena[291] = HAVE_umulditi3;
  ena[292] = HAVE_vcondv2qiv2qi;
  ena[293] = HAVE_vcondv4qiv4qi;
  ena[294] = HAVE_vcondv2hiv2hi;
  ena[295] = HAVE_vcondv8qiv8qi;
  ena[296] = HAVE_vcondv4hiv8qi;
  ena[297] = HAVE_vcondv2siv8qi;
  ena[298] = HAVE_vcondv2sfv8qi;
  ena[299] = HAVE_vcondv8qiv4hi;
  ena[300] = HAVE_vcondv4hiv4hi;
  ena[301] = HAVE_vcondv2siv4hi;
  ena[302] = HAVE_vcondv2sfv4hi;
  ena[303] = HAVE_vcondv8qiv2si;
  ena[304] = HAVE_vcondv4hiv2si;
  ena[305] = HAVE_vcondv2siv2si;
  ena[306] = HAVE_vcondv2sfv2si;
  ena[307] = HAVE_vcondv16qiv16qi;
  ena[308] = HAVE_vcondv8hiv16qi;
  ena[309] = HAVE_vcondv4siv16qi;
  ena[310] = HAVE_vcondv2div16qi;
  ena[311] = HAVE_vcondv4sfv16qi;
  ena[312] = HAVE_vcondv2dfv16qi;
  ena[313] = HAVE_vcondv16qiv8hi;
  ena[314] = HAVE_vcondv8hiv8hi;
  ena[315] = HAVE_vcondv4siv8hi;
  ena[316] = HAVE_vcondv2div8hi;
  ena[317] = HAVE_vcondv8bfv8hi;
  ena[318] = HAVE_vcondv8hfv8hi;
  ena[319] = HAVE_vcondv4sfv8hi;
  ena[320] = HAVE_vcondv2dfv8hi;
  ena[321] = HAVE_vcondv16qiv4si;
  ena[322] = HAVE_vcondv8hiv4si;
  ena[323] = HAVE_vcondv4siv4si;
  ena[324] = HAVE_vcondv2div4si;
  ena[325] = HAVE_vcondv4sfv4si;
  ena[326] = HAVE_vcondv2dfv4si;
  ena[327] = HAVE_vcondv2div2di;
  ena[328] = HAVE_vcondv2dfv2di;
  ena[329] = HAVE_vcondv32qiv32qi;
  ena[330] = HAVE_vcondv16hiv32qi;
  ena[331] = HAVE_vcondv8siv32qi;
  ena[332] = HAVE_vcondv4div32qi;
  ena[333] = HAVE_vcondv8sfv32qi;
  ena[334] = HAVE_vcondv4dfv32qi;
  ena[335] = HAVE_vcondv32qiv16hi;
  ena[336] = HAVE_vcondv16hiv16hi;
  ena[337] = HAVE_vcondv8siv16hi;
  ena[338] = HAVE_vcondv4div16hi;
  ena[339] = HAVE_vcondv16bfv16hi;
  ena[340] = HAVE_vcondv16hfv16hi;
  ena[341] = HAVE_vcondv8sfv16hi;
  ena[342] = HAVE_vcondv4dfv16hi;
  ena[343] = HAVE_vcondv32qiv8si;
  ena[344] = HAVE_vcondv16hiv8si;
  ena[345] = HAVE_vcondv8siv8si;
  ena[346] = HAVE_vcondv4div8si;
  ena[347] = HAVE_vcondv8sfv8si;
  ena[348] = HAVE_vcondv4dfv8si;
  ena[349] = HAVE_vcondv32qiv4di;
  ena[350] = HAVE_vcondv16hiv4di;
  ena[351] = HAVE_vcondv8siv4di;
  ena[352] = HAVE_vcondv4div4di;
  ena[353] = HAVE_vcondv8sfv4di;
  ena[354] = HAVE_vcondv4dfv4di;
  ena[355] = HAVE_vcondv64qiv64qi;
  ena[356] = HAVE_vcondv32hiv64qi;
  ena[357] = HAVE_vcondv16siv64qi;
  ena[358] = HAVE_vcondv8div64qi;
  ena[359] = HAVE_vcondv16sfv64qi;
  ena[360] = HAVE_vcondv8dfv64qi;
  ena[361] = HAVE_vcondv64qiv32hi;
  ena[362] = HAVE_vcondv32hiv32hi;
  ena[363] = HAVE_vcondv16siv32hi;
  ena[364] = HAVE_vcondv8div32hi;
  ena[365] = HAVE_vcondv32bfv32hi;
  ena[366] = HAVE_vcondv32hfv32hi;
  ena[367] = HAVE_vcondv16sfv32hi;
  ena[368] = HAVE_vcondv8dfv32hi;
  ena[369] = HAVE_vcondv64qiv16si;
  ena[370] = HAVE_vcondv32hiv16si;
  ena[371] = HAVE_vcondv16siv16si;
  ena[372] = HAVE_vcondv8div16si;
  ena[373] = HAVE_vcondv16sfv16si;
  ena[374] = HAVE_vcondv8dfv16si;
  ena[375] = HAVE_vcondv64qiv8di;
  ena[376] = HAVE_vcondv32hiv8di;
  ena[377] = HAVE_vcondv16siv8di;
  ena[378] = HAVE_vcondv8div8di;
  ena[379] = HAVE_vcondv16sfv8di;
  ena[380] = HAVE_vcondv8dfv8di;
  ena[381] = HAVE_vcondv2siv2sf;
  ena[382] = HAVE_vcondv2sfv2sf;
  ena[383] = HAVE_vcondv8hiv8hf;
  ena[384] = HAVE_vcondv8hfv8hf;
  ena[385] = HAVE_vcondv16qiv4sf;
  ena[386] = HAVE_vcondv8hiv4sf;
  ena[387] = HAVE_vcondv4siv4sf;
  ena[388] = HAVE_vcondv2div4sf;
  ena[389] = HAVE_vcondv4sfv4sf;
  ena[390] = HAVE_vcondv2dfv4sf;
  ena[391] = HAVE_vcondv16qiv2df;
  ena[392] = HAVE_vcondv8hiv2df;
  ena[393] = HAVE_vcondv4siv2df;
  ena[394] = HAVE_vcondv2div2df;
  ena[395] = HAVE_vcondv4sfv2df;
  ena[396] = HAVE_vcondv2dfv2df;
  ena[397] = HAVE_vcondv16hiv16hf;
  ena[398] = HAVE_vcondv16hfv16hf;
  ena[399] = HAVE_vcondv32qiv8sf;
  ena[400] = HAVE_vcondv16hiv8sf;
  ena[401] = HAVE_vcondv8siv8sf;
  ena[402] = HAVE_vcondv4div8sf;
  ena[403] = HAVE_vcondv8sfv8sf;
  ena[404] = HAVE_vcondv4dfv8sf;
  ena[405] = HAVE_vcondv32qiv4df;
  ena[406] = HAVE_vcondv16hiv4df;
  ena[407] = HAVE_vcondv8siv4df;
  ena[408] = HAVE_vcondv4div4df;
  ena[409] = HAVE_vcondv8sfv4df;
  ena[410] = HAVE_vcondv4dfv4df;
  ena[411] = HAVE_vcondv32hiv32hf;
  ena[412] = HAVE_vcondv32hfv32hf;
  ena[413] = HAVE_vcondv64qiv16sf;
  ena[414] = HAVE_vcondv32hiv16sf;
  ena[415] = HAVE_vcondv16siv16sf;
  ena[416] = HAVE_vcondv8div16sf;
  ena[417] = HAVE_vcondv16sfv16sf;
  ena[418] = HAVE_vcondv8dfv16sf;
  ena[419] = HAVE_vcondv64qiv8df;
  ena[420] = HAVE_vcondv32hiv8df;
  ena[421] = HAVE_vcondv16siv8df;
  ena[422] = HAVE_vcondv8div8df;
  ena[423] = HAVE_vcondv16sfv8df;
  ena[424] = HAVE_vcondv8dfv8df;
  ena[425] = HAVE_vconduv2qiv2qi;
  ena[426] = HAVE_vconduv4qiv4qi;
  ena[427] = HAVE_vconduv2hiv2hi;
  ena[428] = HAVE_vconduv8qiv8qi;
  ena[429] = HAVE_vconduv4hiv8qi;
  ena[430] = HAVE_vconduv2siv8qi;
  ena[431] = HAVE_vconduv2sfv8qi;
  ena[432] = HAVE_vconduv8qiv4hi;
  ena[433] = HAVE_vconduv4hiv4hi;
  ena[434] = HAVE_vconduv2siv4hi;
  ena[435] = HAVE_vconduv2sfv4hi;
  ena[436] = HAVE_vconduv8qiv2si;
  ena[437] = HAVE_vconduv4hiv2si;
  ena[438] = HAVE_vconduv2siv2si;
  ena[439] = HAVE_vconduv2sfv2si;
  ena[440] = HAVE_vconduv16qiv16qi;
  ena[441] = HAVE_vconduv8hiv16qi;
  ena[442] = HAVE_vconduv4siv16qi;
  ena[443] = HAVE_vconduv2div16qi;
  ena[444] = HAVE_vconduv4sfv16qi;
  ena[445] = HAVE_vconduv2dfv16qi;
  ena[446] = HAVE_vconduv16qiv8hi;
  ena[447] = HAVE_vconduv8hiv8hi;
  ena[448] = HAVE_vconduv4siv8hi;
  ena[449] = HAVE_vconduv2div8hi;
  ena[450] = HAVE_vconduv8hfv8hi;
  ena[451] = HAVE_vconduv4sfv8hi;
  ena[452] = HAVE_vconduv2dfv8hi;
  ena[453] = HAVE_vconduv16qiv4si;
  ena[454] = HAVE_vconduv8hiv4si;
  ena[455] = HAVE_vconduv4siv4si;
  ena[456] = HAVE_vconduv2div4si;
  ena[457] = HAVE_vconduv4sfv4si;
  ena[458] = HAVE_vconduv2dfv4si;
  ena[459] = HAVE_vconduv2div2di;
  ena[460] = HAVE_vconduv2dfv2di;
  ena[461] = HAVE_vconduv32qiv32qi;
  ena[462] = HAVE_vconduv16hiv32qi;
  ena[463] = HAVE_vconduv8siv32qi;
  ena[464] = HAVE_vconduv4div32qi;
  ena[465] = HAVE_vconduv8sfv32qi;
  ena[466] = HAVE_vconduv4dfv32qi;
  ena[467] = HAVE_vconduv32qiv16hi;
  ena[468] = HAVE_vconduv16hiv16hi;
  ena[469] = HAVE_vconduv8siv16hi;
  ena[470] = HAVE_vconduv4div16hi;
  ena[471] = HAVE_vconduv16hfv16hi;
  ena[472] = HAVE_vconduv8sfv16hi;
  ena[473] = HAVE_vconduv4dfv16hi;
  ena[474] = HAVE_vconduv32qiv8si;
  ena[475] = HAVE_vconduv16hiv8si;
  ena[476] = HAVE_vconduv8siv8si;
  ena[477] = HAVE_vconduv4div8si;
  ena[478] = HAVE_vconduv8sfv8si;
  ena[479] = HAVE_vconduv4dfv8si;
  ena[480] = HAVE_vconduv32qiv4di;
  ena[481] = HAVE_vconduv16hiv4di;
  ena[482] = HAVE_vconduv8siv4di;
  ena[483] = HAVE_vconduv4div4di;
  ena[484] = HAVE_vconduv8sfv4di;
  ena[485] = HAVE_vconduv4dfv4di;
  ena[486] = HAVE_vconduv64qiv64qi;
  ena[487] = HAVE_vconduv32hiv64qi;
  ena[488] = HAVE_vconduv16siv64qi;
  ena[489] = HAVE_vconduv8div64qi;
  ena[490] = HAVE_vconduv16sfv64qi;
  ena[491] = HAVE_vconduv8dfv64qi;
  ena[492] = HAVE_vconduv64qiv32hi;
  ena[493] = HAVE_vconduv32hiv32hi;
  ena[494] = HAVE_vconduv16siv32hi;
  ena[495] = HAVE_vconduv8div32hi;
  ena[496] = HAVE_vconduv32hfv32hi;
  ena[497] = HAVE_vconduv16sfv32hi;
  ena[498] = HAVE_vconduv8dfv32hi;
  ena[499] = HAVE_vconduv64qiv16si;
  ena[500] = HAVE_vconduv32hiv16si;
  ena[501] = HAVE_vconduv16siv16si;
  ena[502] = HAVE_vconduv8div16si;
  ena[503] = HAVE_vconduv16sfv16si;
  ena[504] = HAVE_vconduv8dfv16si;
  ena[505] = HAVE_vconduv64qiv8di;
  ena[506] = HAVE_vconduv32hiv8di;
  ena[507] = HAVE_vconduv16siv8di;
  ena[508] = HAVE_vconduv8div8di;
  ena[509] = HAVE_vconduv16sfv8di;
  ena[510] = HAVE_vconduv8dfv8di;
  ena[511] = HAVE_vcondeqv2div2di;
  ena[512] = HAVE_vcondeqv2dfv2di;
  ena[513] = HAVE_vcond_mask_v8hiqi;
  ena[514] = HAVE_vcond_mask_v4siqi;
  ena[515] = HAVE_vcond_mask_v2diqi;
  ena[516] = HAVE_vcond_mask_v8siqi;
  ena[517] = HAVE_vcond_mask_v4diqi;
  ena[518] = HAVE_vcond_mask_v8diqi;
  ena[519] = HAVE_vcond_mask_v8bfqi;
  ena[520] = HAVE_vcond_mask_v8hfqi;
  ena[521] = HAVE_vcond_mask_v4sfqi;
  ena[522] = HAVE_vcond_mask_v2dfqi;
  ena[523] = HAVE_vcond_mask_v8sfqi;
  ena[524] = HAVE_vcond_mask_v4dfqi;
  ena[525] = HAVE_vcond_mask_v8dfqi;
  ena[526] = HAVE_vcond_mask_v16qihi;
  ena[527] = HAVE_vcond_mask_v16hihi;
  ena[528] = HAVE_vcond_mask_v16sihi;
  ena[529] = HAVE_vcond_mask_v16bfhi;
  ena[530] = HAVE_vcond_mask_v16hfhi;
  ena[531] = HAVE_vcond_mask_v16sfhi;
  ena[532] = HAVE_vcond_mask_v32qisi;
  ena[533] = HAVE_vcond_mask_v32hisi;
  ena[534] = HAVE_vcond_mask_v32bfsi;
  ena[535] = HAVE_vcond_mask_v32hfsi;
  ena[536] = HAVE_vcond_mask_v64qidi;
  ena[537] = HAVE_vcond_mask_v2qiv2qi;
  ena[538] = HAVE_vcond_mask_v4qiv4qi;
  ena[539] = HAVE_vcond_mask_v2hiv2hi;
  ena[540] = HAVE_vcond_mask_v8qiv8qi;
  ena[541] = HAVE_vcond_mask_v4hiv4hi;
  ena[542] = HAVE_vcond_mask_v2siv2si;
  ena[543] = HAVE_vcond_mask_v2sfv2si;
  ena[544] = HAVE_vcond_mask_v16qiv16qi;
  ena[545] = HAVE_vcond_mask_v8hiv8hi;
  ena[546] = HAVE_vcond_mask_v4siv4si;
  ena[547] = HAVE_vcond_mask_v4sfv4si;
  ena[548] = HAVE_vcond_mask_v2div2di;
  ena[549] = HAVE_vcond_mask_v2dfv2di;
  ena[550] = HAVE_vcond_mask_v1tiv1ti;
  ena[551] = HAVE_vcond_mask_v32qiv32qi;
  ena[552] = HAVE_vcond_mask_v16hiv16hi;
  ena[553] = HAVE_vcond_mask_v8siv8si;
  ena[554] = HAVE_vcond_mask_v8sfv8si;
  ena[555] = HAVE_vcond_mask_v4div4di;
  ena[556] = HAVE_vcond_mask_v4dfv4di;
  ena[557] = HAVE_vec_cmpv8hiqi;
  ena[558] = HAVE_vec_cmpv4siqi;
  ena[559] = HAVE_vec_cmpv2diqi;
  ena[560] = HAVE_vec_cmpv8siqi;
  ena[561] = HAVE_vec_cmpv4diqi;
  ena[562] = HAVE_vec_cmpv8diqi;
  ena[563] = HAVE_vec_cmpv8hfqi;
  ena[564] = HAVE_vec_cmpv4sfqi;
  ena[565] = HAVE_vec_cmpv2dfqi;
  ena[566] = HAVE_vec_cmpv8sfqi;
  ena[567] = HAVE_vec_cmpv4dfqi;
  ena[568] = HAVE_vec_cmpv8dfqi;
  ena[569] = HAVE_vec_cmpv16qihi;
  ena[570] = HAVE_vec_cmpv16hihi;
  ena[571] = HAVE_vec_cmpv16sihi;
  ena[572] = HAVE_vec_cmpv16hfhi;
  ena[573] = HAVE_vec_cmpv16sfhi;
  ena[574] = HAVE_vec_cmpv32qisi;
  ena[575] = HAVE_vec_cmpv32hisi;
  ena[576] = HAVE_vec_cmpv32hfsi;
  ena[577] = HAVE_vec_cmpv64qidi;
  ena[578] = HAVE_vec_cmpv2qiv2qi;
  ena[579] = HAVE_vec_cmpv4qiv4qi;
  ena[580] = HAVE_vec_cmpv2hiv2hi;
  ena[581] = HAVE_vec_cmpv8qiv8qi;
  ena[582] = HAVE_vec_cmpv4hiv4hi;
  ena[583] = HAVE_vec_cmpv2siv2si;
  ena[584] = HAVE_vec_cmpv2sfv2si;
  ena[585] = HAVE_vec_cmpv16qiv16qi;
  ena[586] = HAVE_vec_cmpv8hiv8hi;
  ena[587] = HAVE_vec_cmpv4siv4si;
  ena[588] = HAVE_vec_cmpv4sfv4si;
  ena[589] = HAVE_vec_cmpv2div2di;
  ena[590] = HAVE_vec_cmpv2dfv2di;
  ena[591] = HAVE_vec_cmpv32qiv32qi;
  ena[592] = HAVE_vec_cmpv16hiv16hi;
  ena[593] = HAVE_vec_cmpv8siv8si;
  ena[594] = HAVE_vec_cmpv8sfv8si;
  ena[595] = HAVE_vec_cmpv4div4di;
  ena[596] = HAVE_vec_cmpv4dfv4di;
  ena[597] = HAVE_vec_cmpuv8hiqi;
  ena[598] = HAVE_vec_cmpuv4siqi;
  ena[599] = HAVE_vec_cmpuv2diqi;
  ena[600] = HAVE_vec_cmpuv8siqi;
  ena[601] = HAVE_vec_cmpuv4diqi;
  ena[602] = HAVE_vec_cmpuv8diqi;
  ena[603] = HAVE_vec_cmpuv16qihi;
  ena[604] = HAVE_vec_cmpuv16hihi;
  ena[605] = HAVE_vec_cmpuv16sihi;
  ena[606] = HAVE_vec_cmpuv32qisi;
  ena[607] = HAVE_vec_cmpuv32hisi;
  ena[608] = HAVE_vec_cmpuv64qidi;
  ena[609] = HAVE_vec_cmpuv2qiv2qi;
  ena[610] = HAVE_vec_cmpuv4qiv4qi;
  ena[611] = HAVE_vec_cmpuv2hiv2hi;
  ena[612] = HAVE_vec_cmpuv8qiv8qi;
  ena[613] = HAVE_vec_cmpuv4hiv4hi;
  ena[614] = HAVE_vec_cmpuv2siv2si;
  ena[615] = HAVE_vec_cmpuv16qiv16qi;
  ena[616] = HAVE_vec_cmpuv8hiv8hi;
  ena[617] = HAVE_vec_cmpuv4siv4si;
  ena[618] = HAVE_vec_cmpuv2div2di;
  ena[619] = HAVE_vec_cmpuv32qiv32qi;
  ena[620] = HAVE_vec_cmpuv16hiv16hi;
  ena[621] = HAVE_vec_cmpuv8siv8si;
  ena[622] = HAVE_vec_cmpuv4div4di;
  ena[623] = HAVE_vec_cmpeqv2div2di;
  ena[624] = HAVE_vec_cmpeqv1tiv1ti;
  ena[625] = HAVE_maskloadv8hiqi;
  ena[626] = HAVE_maskloadv4siqi;
  ena[627] = HAVE_maskloadv2diqi;
  ena[628] = HAVE_maskloadv8siqi;
  ena[629] = HAVE_maskloadv4diqi;
  ena[630] = HAVE_maskloadv8diqi;
  ena[631] = HAVE_maskloadv8bfqi;
  ena[632] = HAVE_maskloadv8hfqi;
  ena[633] = HAVE_maskloadv4sfqi;
  ena[634] = HAVE_maskloadv2dfqi;
  ena[635] = HAVE_maskloadv8sfqi;
  ena[636] = HAVE_maskloadv4dfqi;
  ena[637] = HAVE_maskloadv8dfqi;
  ena[638] = HAVE_maskloadv16qihi;
  ena[639] = HAVE_maskloadv16hihi;
  ena[640] = HAVE_maskloadv16sihi;
  ena[641] = HAVE_maskloadv16bfhi;
  ena[642] = HAVE_maskloadv16hfhi;
  ena[643] = HAVE_maskloadv16sfhi;
  ena[644] = HAVE_maskloadv32qisi;
  ena[645] = HAVE_maskloadv32hisi;
  ena[646] = HAVE_maskloadv32bfsi;
  ena[647] = HAVE_maskloadv32hfsi;
  ena[648] = HAVE_maskloadv64qidi;
  ena[649] = HAVE_maskloadv4siv4si;
  ena[650] = HAVE_maskloadv4sfv4si;
  ena[651] = HAVE_maskloadv2div2di;
  ena[652] = HAVE_maskloadv2dfv2di;
  ena[653] = HAVE_maskloadv8siv8si;
  ena[654] = HAVE_maskloadv8sfv8si;
  ena[655] = HAVE_maskloadv4div4di;
  ena[656] = HAVE_maskloadv4dfv4di;
  ena[657] = HAVE_maskstorev8hiqi;
  ena[658] = HAVE_maskstorev4siqi;
  ena[659] = HAVE_maskstorev2diqi;
  ena[660] = HAVE_maskstorev8siqi;
  ena[661] = HAVE_maskstorev4diqi;
  ena[662] = HAVE_maskstorev8diqi;
  ena[663] = HAVE_maskstorev8bfqi;
  ena[664] = HAVE_maskstorev8hfqi;
  ena[665] = HAVE_maskstorev4sfqi;
  ena[666] = HAVE_maskstorev2dfqi;
  ena[667] = HAVE_maskstorev8sfqi;
  ena[668] = HAVE_maskstorev4dfqi;
  ena[669] = HAVE_maskstorev8dfqi;
  ena[670] = HAVE_maskstorev16qihi;
  ena[671] = HAVE_maskstorev16hihi;
  ena[672] = HAVE_maskstorev16sihi;
  ena[673] = HAVE_maskstorev16bfhi;
  ena[674] = HAVE_maskstorev16hfhi;
  ena[675] = HAVE_maskstorev16sfhi;
  ena[676] = HAVE_maskstorev32qisi;
  ena[677] = HAVE_maskstorev32hisi;
  ena[678] = HAVE_maskstorev32bfsi;
  ena[679] = HAVE_maskstorev32hfsi;
  ena[680] = HAVE_maskstorev64qidi;
  ena[681] = HAVE_maskstorev4siv4si;
  ena[682] = HAVE_maskstorev4sfv4si;
  ena[683] = HAVE_maskstorev2div2di;
  ena[684] = HAVE_maskstorev2dfv2di;
  ena[685] = HAVE_maskstorev8siv8si;
  ena[686] = HAVE_maskstorev8sfv8si;
  ena[687] = HAVE_maskstorev4div4di;
  ena[688] = HAVE_maskstorev4dfv4di;
  ena[689] = HAVE_vec_extractv4qiqi;
  ena[690] = HAVE_vec_extractv8qiqi;
  ena[691] = HAVE_vec_extractv16qiqi;
  ena[692] = HAVE_vec_extractv32qiqi;
  ena[693] = HAVE_vec_extractv64qiqi;
  ena[694] = HAVE_vec_extractv2hihi;
  ena[695] = HAVE_vec_extractv4hihi;
  ena[696] = HAVE_vec_extractv8hihi;
  ena[697] = HAVE_vec_extractv16hihi;
  ena[698] = HAVE_vec_extractv32hihi;
  ena[699] = HAVE_vec_extractv2sisi;
  ena[700] = HAVE_vec_extractv4sisi;
  ena[701] = HAVE_vec_extractv8sisi;
  ena[702] = HAVE_vec_extractv16sisi;
  ena[703] = HAVE_vec_extractv2didi;
  ena[704] = HAVE_vec_extractv4didi;
  ena[705] = HAVE_vec_extractv8didi;
  ena[706] = HAVE_vec_extractv2titi;
  ena[707] = HAVE_vec_extractv4titi;
  ena[708] = HAVE_vec_extractv8hfhf;
  ena[709] = HAVE_vec_extractv16hfhf;
  ena[710] = HAVE_vec_extractv32hfhf;
  ena[711] = HAVE_vec_extractv8bfbf;
  ena[712] = HAVE_vec_extractv16bfbf;
  ena[713] = HAVE_vec_extractv32bfbf;
  ena[714] = HAVE_vec_extractv2sfsf;
  ena[715] = HAVE_vec_extractv4sfsf;
  ena[716] = HAVE_vec_extractv8sfsf;
  ena[717] = HAVE_vec_extractv16sfsf;
  ena[718] = HAVE_vec_extractv2dfdf;
  ena[719] = HAVE_vec_extractv4dfdf;
  ena[720] = HAVE_vec_extractv8dfdf;
  ena[721] = HAVE_vec_extractv32qiv16qi;
  ena[722] = HAVE_vec_extractv16hiv8hi;
  ena[723] = HAVE_vec_extractv8siv4si;
  ena[724] = HAVE_vec_extractv4div2di;
  ena[725] = HAVE_vec_extractv64qiv32qi;
  ena[726] = HAVE_vec_extractv32hiv16hi;
  ena[727] = HAVE_vec_extractv16siv8si;
  ena[728] = HAVE_vec_extractv8div4di;
  ena[729] = HAVE_vec_extractv16bfv8bf;
  ena[730] = HAVE_vec_extractv16hfv8hf;
  ena[731] = HAVE_vec_extractv8sfv4sf;
  ena[732] = HAVE_vec_extractv4dfv2df;
  ena[733] = HAVE_vec_extractv32bfv16bf;
  ena[734] = HAVE_vec_extractv32hfv16hf;
  ena[735] = HAVE_vec_extractv16sfv8sf;
  ena[736] = HAVE_vec_extractv8dfv4df;
  ena[737] = HAVE_vec_initv4qiqi;
  ena[738] = HAVE_vec_initv8qiqi;
  ena[739] = HAVE_vec_initv16qiqi;
  ena[740] = HAVE_vec_initv32qiqi;
  ena[741] = HAVE_vec_initv64qiqi;
  ena[742] = HAVE_vec_initv2hihi;
  ena[743] = HAVE_vec_initv4hihi;
  ena[744] = HAVE_vec_initv8hihi;
  ena[745] = HAVE_vec_initv16hihi;
  ena[746] = HAVE_vec_initv32hihi;
  ena[747] = HAVE_vec_initv2sisi;
  ena[748] = HAVE_vec_initv4sisi;
  ena[749] = HAVE_vec_initv8sisi;
  ena[750] = HAVE_vec_initv16sisi;
  ena[751] = HAVE_vec_initv2didi;
  ena[752] = HAVE_vec_initv4didi;
  ena[753] = HAVE_vec_initv8didi;
  ena[754] = HAVE_vec_initv2titi;
  ena[755] = HAVE_vec_initv4titi;
  ena[756] = HAVE_vec_initv8hfhf;
  ena[757] = HAVE_vec_initv16hfhf;
  ena[758] = HAVE_vec_initv32hfhf;
  ena[759] = HAVE_vec_initv8bfbf;
  ena[760] = HAVE_vec_initv16bfbf;
  ena[761] = HAVE_vec_initv32bfbf;
  ena[762] = HAVE_vec_initv2sfsf;
  ena[763] = HAVE_vec_initv4sfsf;
  ena[764] = HAVE_vec_initv8sfsf;
  ena[765] = HAVE_vec_initv16sfsf;
  ena[766] = HAVE_vec_initv2dfdf;
  ena[767] = HAVE_vec_initv4dfdf;
  ena[768] = HAVE_vec_initv8dfdf;
  ena[769] = HAVE_vec_initv16qiv8qi;
  ena[770] = HAVE_vec_initv8hiv4hi;
  ena[771] = HAVE_vec_initv4siv2si;
  ena[772] = HAVE_vec_initv32qiv16qi;
  ena[773] = HAVE_vec_initv16hiv8hi;
  ena[774] = HAVE_vec_initv8siv4si;
  ena[775] = HAVE_vec_initv4div2di;
  ena[776] = HAVE_vec_initv64qiv32qi;
  ena[777] = HAVE_vec_initv32hiv16hi;
  ena[778] = HAVE_vec_initv16siv8si;
  ena[779] = HAVE_vec_initv8div4di;
  ena[780] = HAVE_vec_initv4tiv2ti;
  ena[781] = HAVE_vec_initv8bfv4bf;
  ena[782] = HAVE_vec_initv8hfv4hf;
  ena[783] = HAVE_vec_initv4sfv2sf;
  ena[784] = HAVE_vec_initv16bfv8bf;
  ena[785] = HAVE_vec_initv16hfv8hf;
  ena[786] = HAVE_vec_initv8sfv4sf;
  ena[787] = HAVE_vec_initv4dfv2df;
  ena[788] = HAVE_vec_initv32bfv16bf;
  ena[789] = HAVE_vec_initv32hfv16hf;
  ena[790] = HAVE_vec_initv16sfv8sf;
  ena[791] = HAVE_vec_initv8dfv4df;
  ena[792] = HAVE_addqi3;
  ena[793] = HAVE_addhi3;
  ena[794] = HAVE_addsi3;
  ena[795] = HAVE_adddi3;
  ena[796] = HAVE_addti3;
  ena[797] = HAVE_addhf3;
  ena[798] = HAVE_addsf3;
  ena[799] = HAVE_adddf3;
  ena[800] = HAVE_addxf3;
  ena[801] = HAVE_addv2qi3;
  ena[802] = HAVE_addv4qi3;
  ena[803] = HAVE_addv2hi3;
  ena[804] = HAVE_addv8qi3;
  ena[805] = HAVE_addv4hi3;
  ena[806] = HAVE_addv2si3;
  ena[807] = HAVE_addv16qi3;
  ena[808] = HAVE_addv8hi3;
  ena[809] = HAVE_addv4si3;
  ena[810] = HAVE_addv2di3;
  ena[811] = HAVE_addv32qi3;
  ena[812] = HAVE_addv16hi3;
  ena[813] = HAVE_addv8si3;
  ena[814] = HAVE_addv4di3;
  ena[815] = HAVE_addv64qi3;
  ena[816] = HAVE_addv32hi3;
  ena[817] = HAVE_addv16si3;
  ena[818] = HAVE_addv8di3;
  ena[819] = HAVE_addv2hf3;
  ena[820] = HAVE_addv4hf3;
  ena[821] = HAVE_addv2sf3;
  ena[822] = HAVE_addv8hf3;
  ena[823] = HAVE_addv4sf3;
  ena[824] = HAVE_addv2df3;
  ena[825] = HAVE_addv16hf3;
  ena[826] = HAVE_addv8sf3;
  ena[827] = HAVE_addv4df3;
  ena[828] = HAVE_addv32hf3;
  ena[829] = HAVE_addv16sf3;
  ena[830] = HAVE_addv8df3;
  ena[831] = HAVE_subqi3;
  ena[832] = HAVE_subhi3;
  ena[833] = HAVE_subsi3;
  ena[834] = HAVE_subdi3;
  ena[835] = HAVE_subti3;
  ena[836] = HAVE_subhf3;
  ena[837] = HAVE_subsf3;
  ena[838] = HAVE_subdf3;
  ena[839] = HAVE_subxf3;
  ena[840] = HAVE_subv2qi3;
  ena[841] = HAVE_subv4qi3;
  ena[842] = HAVE_subv2hi3;
  ena[843] = HAVE_subv8qi3;
  ena[844] = HAVE_subv4hi3;
  ena[845] = HAVE_subv2si3;
  ena[846] = HAVE_subv16qi3;
  ena[847] = HAVE_subv8hi3;
  ena[848] = HAVE_subv4si3;
  ena[849] = HAVE_subv2di3;
  ena[850] = HAVE_subv32qi3;
  ena[851] = HAVE_subv16hi3;
  ena[852] = HAVE_subv8si3;
  ena[853] = HAVE_subv4di3;
  ena[854] = HAVE_subv64qi3;
  ena[855] = HAVE_subv32hi3;
  ena[856] = HAVE_subv16si3;
  ena[857] = HAVE_subv8di3;
  ena[858] = HAVE_subv2hf3;
  ena[859] = HAVE_subv4hf3;
  ena[860] = HAVE_subv2sf3;
  ena[861] = HAVE_subv8hf3;
  ena[862] = HAVE_subv4sf3;
  ena[863] = HAVE_subv2df3;
  ena[864] = HAVE_subv16hf3;
  ena[865] = HAVE_subv8sf3;
  ena[866] = HAVE_subv4df3;
  ena[867] = HAVE_subv32hf3;
  ena[868] = HAVE_subv16sf3;
  ena[869] = HAVE_subv8df3;
  ena[870] = HAVE_mulqi3;
  ena[871] = HAVE_mulhi3;
  ena[872] = HAVE_mulsi3;
  ena[873] = HAVE_muldi3;
  ena[874] = HAVE_mulhf3;
  ena[875] = HAVE_mulsf3;
  ena[876] = HAVE_muldf3;
  ena[877] = HAVE_mulxf3;
  ena[878] = HAVE_mulv2hi3;
  ena[879] = HAVE_mulv8qi3;
  ena[880] = HAVE_mulv4hi3;
  ena[881] = HAVE_mulv16qi3;
  ena[882] = HAVE_mulv8hi3;
  ena[883] = HAVE_mulv4si3;
  ena[884] = HAVE_mulv2di3;
  ena[885] = HAVE_mulv32qi3;
  ena[886] = HAVE_mulv16hi3;
  ena[887] = HAVE_mulv8si3;
  ena[888] = HAVE_mulv4di3;
  ena[889] = HAVE_mulv64qi3;
  ena[890] = HAVE_mulv32hi3;
  ena[891] = HAVE_mulv16si3;
  ena[892] = HAVE_mulv8di3;
  ena[893] = HAVE_mulv2hf3;
  ena[894] = HAVE_mulv4hf3;
  ena[895] = HAVE_mulv2sf3;
  ena[896] = HAVE_mulv8hf3;
  ena[897] = HAVE_mulv4sf3;
  ena[898] = HAVE_mulv2df3;
  ena[899] = HAVE_mulv16hf3;
  ena[900] = HAVE_mulv8sf3;
  ena[901] = HAVE_mulv4df3;
  ena[902] = HAVE_mulv32hf3;
  ena[903] = HAVE_mulv16sf3;
  ena[904] = HAVE_mulv8df3;
  ena[905] = HAVE_divhf3;
  ena[906] = HAVE_divsf3;
  ena[907] = HAVE_divdf3;
  ena[908] = HAVE_divxf3;
  ena[909] = HAVE_divv2hf3;
  ena[910] = HAVE_divv4hf3;
  ena[911] = HAVE_divv2sf3;
  ena[912] = HAVE_divv8hf3;
  ena[913] = HAVE_divv4sf3;
  ena[914] = HAVE_divv2df3;
  ena[915] = HAVE_divv16hf3;
  ena[916] = HAVE_divv8sf3;
  ena[917] = HAVE_divv4df3;
  ena[918] = HAVE_divv32hf3;
  ena[919] = HAVE_divv16sf3;
  ena[920] = HAVE_divv8df3;
  ena[921] = HAVE_divmodqi4;
  ena[922] = HAVE_divmodhi4;
  ena[923] = HAVE_divmodsi4;
  ena[924] = HAVE_divmoddi4;
  ena[925] = HAVE_udivmodqi4;
  ena[926] = HAVE_udivmodhi4;
  ena[927] = HAVE_udivmodsi4;
  ena[928] = HAVE_udivmoddi4;
  ena[929] = HAVE_andqi3;
  ena[930] = HAVE_andhi3;
  ena[931] = HAVE_andsi3;
  ena[932] = HAVE_anddi3;
  ena[933] = HAVE_andti3;
  ena[934] = HAVE_andsf3;
  ena[935] = HAVE_anddf3;
  ena[936] = HAVE_andtf3;
  ena[937] = HAVE_andv2qi3;
  ena[938] = HAVE_andv4qi3;
  ena[939] = HAVE_andv2hi3;
  ena[940] = HAVE_andv8qi3;
  ena[941] = HAVE_andv4hi3;
  ena[942] = HAVE_andv2si3;
  ena[943] = HAVE_andv16qi3;
  ena[944] = HAVE_andv8hi3;
  ena[945] = HAVE_andv4si3;
  ena[946] = HAVE_andv2di3;
  ena[947] = HAVE_andv1ti3;
  ena[948] = HAVE_andv32qi3;
  ena[949] = HAVE_andv16hi3;
  ena[950] = HAVE_andv8si3;
  ena[951] = HAVE_andv4di3;
  ena[952] = HAVE_andv64qi3;
  ena[953] = HAVE_andv32hi3;
  ena[954] = HAVE_andv16si3;
  ena[955] = HAVE_andv8di3;
  ena[956] = HAVE_andv2sf3;
  ena[957] = HAVE_andv8hf3;
  ena[958] = HAVE_andv4sf3;
  ena[959] = HAVE_andv2df3;
  ena[960] = HAVE_andv16hf3;
  ena[961] = HAVE_andv8sf3;
  ena[962] = HAVE_andv4df3;
  ena[963] = HAVE_andv32hf3;
  ena[964] = HAVE_andv16sf3;
  ena[965] = HAVE_andv8df3;
  ena[966] = HAVE_iorqi3;
  ena[967] = HAVE_iorhi3;
  ena[968] = HAVE_iorsi3;
  ena[969] = HAVE_iordi3;
  ena[970] = HAVE_iorti3;
  ena[971] = HAVE_iorsf3;
  ena[972] = HAVE_iordf3;
  ena[973] = HAVE_iortf3;
  ena[974] = HAVE_iorv2qi3;
  ena[975] = HAVE_iorv4qi3;
  ena[976] = HAVE_iorv2hi3;
  ena[977] = HAVE_iorv8qi3;
  ena[978] = HAVE_iorv4hi3;
  ena[979] = HAVE_iorv2si3;
  ena[980] = HAVE_iorv16qi3;
  ena[981] = HAVE_iorv8hi3;
  ena[982] = HAVE_iorv4si3;
  ena[983] = HAVE_iorv2di3;
  ena[984] = HAVE_iorv1ti3;
  ena[985] = HAVE_iorv32qi3;
  ena[986] = HAVE_iorv16hi3;
  ena[987] = HAVE_iorv8si3;
  ena[988] = HAVE_iorv4di3;
  ena[989] = HAVE_iorv64qi3;
  ena[990] = HAVE_iorv32hi3;
  ena[991] = HAVE_iorv16si3;
  ena[992] = HAVE_iorv8di3;
  ena[993] = HAVE_iorv2sf3;
  ena[994] = HAVE_iorv8hf3;
  ena[995] = HAVE_iorv4sf3;
  ena[996] = HAVE_iorv2df3;
  ena[997] = HAVE_iorv16hf3;
  ena[998] = HAVE_iorv8sf3;
  ena[999] = HAVE_iorv4df3;
  ena[1000] = HAVE_iorv32hf3;
  ena[1001] = HAVE_iorv16sf3;
  ena[1002] = HAVE_iorv8df3;
  ena[1003] = HAVE_xorqi3;
  ena[1004] = HAVE_xorhi3;
  ena[1005] = HAVE_xorsi3;
  ena[1006] = HAVE_xordi3;
  ena[1007] = HAVE_xorti3;
  ena[1008] = HAVE_xorsf3;
  ena[1009] = HAVE_xordf3;
  ena[1010] = HAVE_xortf3;
  ena[1011] = HAVE_xorv2qi3;
  ena[1012] = HAVE_xorv4qi3;
  ena[1013] = HAVE_xorv2hi3;
  ena[1014] = HAVE_xorv8qi3;
  ena[1015] = HAVE_xorv4hi3;
  ena[1016] = HAVE_xorv2si3;
  ena[1017] = HAVE_xorv16qi3;
  ena[1018] = HAVE_xorv8hi3;
  ena[1019] = HAVE_xorv4si3;
  ena[1020] = HAVE_xorv2di3;
  ena[1021] = HAVE_xorv1ti3;
  ena[1022] = HAVE_xorv32qi3;
  ena[1023] = HAVE_xorv16hi3;
  ena[1024] = HAVE_xorv8si3;
  ena[1025] = HAVE_xorv4di3;
  ena[1026] = HAVE_xorv64qi3;
  ena[1027] = HAVE_xorv32hi3;
  ena[1028] = HAVE_xorv16si3;
  ena[1029] = HAVE_xorv8di3;
  ena[1030] = HAVE_xorv2sf3;
  ena[1031] = HAVE_xorv8hf3;
  ena[1032] = HAVE_xorv4sf3;
  ena[1033] = HAVE_xorv2df3;
  ena[1034] = HAVE_xorv16hf3;
  ena[1035] = HAVE_xorv8sf3;
  ena[1036] = HAVE_xorv4df3;
  ena[1037] = HAVE_xorv32hf3;
  ena[1038] = HAVE_xorv16sf3;
  ena[1039] = HAVE_xorv8df3;
  ena[1040] = HAVE_ashlqi3;
  ena[1041] = HAVE_ashlhi3;
  ena[1042] = HAVE_ashlsi3;
  ena[1043] = HAVE_ashldi3;
  ena[1044] = HAVE_ashlti3;
  ena[1045] = HAVE_ashlv2qi3;
  ena[1046] = HAVE_ashlv2hi3;
  ena[1047] = HAVE_ashlv4hi3;
  ena[1048] = HAVE_ashlv2si3;
  ena[1049] = HAVE_ashlv16qi3;
  ena[1050] = HAVE_ashlv8hi3;
  ena[1051] = HAVE_ashlv4si3;
  ena[1052] = HAVE_ashlv2di3;
  ena[1053] = HAVE_ashlv1ti3;
  ena[1054] = HAVE_ashlv32qi3;
  ena[1055] = HAVE_ashlv16hi3;
  ena[1056] = HAVE_ashlv8si3;
  ena[1057] = HAVE_ashlv4di3;
  ena[1058] = HAVE_ashlv64qi3;
  ena[1059] = HAVE_ashlv32hi3;
  ena[1060] = HAVE_ashlv16si3;
  ena[1061] = HAVE_ashlv8di3;
  ena[1062] = HAVE_ashrqi3;
  ena[1063] = HAVE_ashrhi3;
  ena[1064] = HAVE_ashrsi3;
  ena[1065] = HAVE_ashrdi3;
  ena[1066] = HAVE_ashrti3;
  ena[1067] = HAVE_ashrv2qi3;
  ena[1068] = HAVE_ashrv2hi3;
  ena[1069] = HAVE_ashrv4hi3;
  ena[1070] = HAVE_ashrv2si3;
  ena[1071] = HAVE_ashrv16qi3;
  ena[1072] = HAVE_ashrv8hi3;
  ena[1073] = HAVE_ashrv4si3;
  ena[1074] = HAVE_ashrv2di3;
  ena[1075] = HAVE_ashrv1ti3;
  ena[1076] = HAVE_ashrv32qi3;
  ena[1077] = HAVE_ashrv16hi3;
  ena[1078] = HAVE_ashrv8si3;
  ena[1079] = HAVE_ashrv4di3;
  ena[1080] = HAVE_ashrv64qi3;
  ena[1081] = HAVE_ashrv32hi3;
  ena[1082] = HAVE_ashrv16si3;
  ena[1083] = HAVE_ashrv8di3;
  ena[1084] = HAVE_lshrqi3;
  ena[1085] = HAVE_lshrhi3;
  ena[1086] = HAVE_lshrsi3;
  ena[1087] = HAVE_lshrdi3;
  ena[1088] = HAVE_lshrti3;
  ena[1089] = HAVE_lshrv2qi3;
  ena[1090] = HAVE_lshrv2hi3;
  ena[1091] = HAVE_lshrv4hi3;
  ena[1092] = HAVE_lshrv2si3;
  ena[1093] = HAVE_lshrv16qi3;
  ena[1094] = HAVE_lshrv8hi3;
  ena[1095] = HAVE_lshrv4si3;
  ena[1096] = HAVE_lshrv2di3;
  ena[1097] = HAVE_lshrv1ti3;
  ena[1098] = HAVE_lshrv32qi3;
  ena[1099] = HAVE_lshrv16hi3;
  ena[1100] = HAVE_lshrv8si3;
  ena[1101] = HAVE_lshrv4di3;
  ena[1102] = HAVE_lshrv64qi3;
  ena[1103] = HAVE_lshrv32hi3;
  ena[1104] = HAVE_lshrv16si3;
  ena[1105] = HAVE_lshrv8di3;
  ena[1106] = HAVE_rotlqi3;
  ena[1107] = HAVE_rotlhi3;
  ena[1108] = HAVE_rotlsi3;
  ena[1109] = HAVE_rotldi3;
  ena[1110] = HAVE_rotlti3;
  ena[1111] = HAVE_rotlv16qi3;
  ena[1112] = HAVE_rotlv8hi3;
  ena[1113] = HAVE_rotlv4si3;
  ena[1114] = HAVE_rotlv2di3;
  ena[1115] = HAVE_rotlv1ti3;
  ena[1116] = HAVE_rotrqi3;
  ena[1117] = HAVE_rotrhi3;
  ena[1118] = HAVE_rotrsi3;
  ena[1119] = HAVE_rotrdi3;
  ena[1120] = HAVE_rotrti3;
  ena[1121] = HAVE_rotrv16qi3;
  ena[1122] = HAVE_rotrv8hi3;
  ena[1123] = HAVE_rotrv4si3;
  ena[1124] = HAVE_rotrv2di3;
  ena[1125] = HAVE_rotrv1ti3;
  ena[1126] = HAVE_vashlv8qi3;
  ena[1127] = HAVE_vashlv16qi3;
  ena[1128] = HAVE_vashlv8hi3;
  ena[1129] = HAVE_vashlv4si3;
  ena[1130] = HAVE_vashlv2di3;
  ena[1131] = HAVE_vashlv32qi3;
  ena[1132] = HAVE_vashlv16hi3;
  ena[1133] = HAVE_vashlv8si3;
  ena[1134] = HAVE_vashlv4di3;
  ena[1135] = HAVE_vashlv64qi3;
  ena[1136] = HAVE_vashlv32hi3;
  ena[1137] = HAVE_vashlv16si3;
  ena[1138] = HAVE_vashlv8di3;
  ena[1139] = HAVE_vashrv8qi3;
  ena[1140] = HAVE_vashrv16qi3;
  ena[1141] = HAVE_vashrv8hi3;
  ena[1142] = HAVE_vashrv4si3;
  ena[1143] = HAVE_vashrv2di3;
  ena[1144] = HAVE_vashrv32qi3;
  ena[1145] = HAVE_vashrv16hi3;
  ena[1146] = HAVE_vashrv8si3;
  ena[1147] = HAVE_vashrv4di3;
  ena[1148] = HAVE_vashrv64qi3;
  ena[1149] = HAVE_vashrv32hi3;
  ena[1150] = HAVE_vashrv16si3;
  ena[1151] = HAVE_vashrv8di3;
  ena[1152] = HAVE_vlshrv8qi3;
  ena[1153] = HAVE_vlshrv16qi3;
  ena[1154] = HAVE_vlshrv8hi3;
  ena[1155] = HAVE_vlshrv4si3;
  ena[1156] = HAVE_vlshrv2di3;
  ena[1157] = HAVE_vlshrv32qi3;
  ena[1158] = HAVE_vlshrv16hi3;
  ena[1159] = HAVE_vlshrv8si3;
  ena[1160] = HAVE_vlshrv4di3;
  ena[1161] = HAVE_vlshrv64qi3;
  ena[1162] = HAVE_vlshrv32hi3;
  ena[1163] = HAVE_vlshrv16si3;
  ena[1164] = HAVE_vlshrv8di3;
  ena[1165] = HAVE_vrotlv16qi3;
  ena[1166] = HAVE_vrotlv8hi3;
  ena[1167] = HAVE_vrotlv4si3;
  ena[1168] = HAVE_vrotlv2di3;
  ena[1169] = HAVE_vrotrv16qi3;
  ena[1170] = HAVE_vrotrv8hi3;
  ena[1171] = HAVE_vrotrv4si3;
  ena[1172] = HAVE_vrotrv2di3;
  ena[1173] = HAVE_sminqi3;
  ena[1174] = HAVE_sminhi3;
  ena[1175] = HAVE_sminsi3;
  ena[1176] = HAVE_smindi3;
  ena[1177] = HAVE_sminti3;
  ena[1178] = HAVE_sminhf3;
  ena[1179] = HAVE_sminsf3;
  ena[1180] = HAVE_smindf3;
  ena[1181] = HAVE_sminv2qi3;
  ena[1182] = HAVE_sminv4qi3;
  ena[1183] = HAVE_sminv2hi3;
  ena[1184] = HAVE_sminv8qi3;
  ena[1185] = HAVE_sminv4hi3;
  ena[1186] = HAVE_sminv2si3;
  ena[1187] = HAVE_sminv16qi3;
  ena[1188] = HAVE_sminv8hi3;
  ena[1189] = HAVE_sminv4si3;
  ena[1190] = HAVE_sminv2di3;
  ena[1191] = HAVE_sminv32qi3;
  ena[1192] = HAVE_sminv16hi3;
  ena[1193] = HAVE_sminv8si3;
  ena[1194] = HAVE_sminv4di3;
  ena[1195] = HAVE_sminv64qi3;
  ena[1196] = HAVE_sminv32hi3;
  ena[1197] = HAVE_sminv16si3;
  ena[1198] = HAVE_sminv8di3;
  ena[1199] = HAVE_sminv2sf3;
  ena[1200] = HAVE_sminv8hf3;
  ena[1201] = HAVE_sminv4sf3;
  ena[1202] = HAVE_sminv2df3;
  ena[1203] = HAVE_sminv16hf3;
  ena[1204] = HAVE_sminv8sf3;
  ena[1205] = HAVE_sminv4df3;
  ena[1206] = HAVE_sminv32hf3;
  ena[1207] = HAVE_sminv16sf3;
  ena[1208] = HAVE_sminv8df3;
  ena[1209] = HAVE_smaxqi3;
  ena[1210] = HAVE_smaxhi3;
  ena[1211] = HAVE_smaxsi3;
  ena[1212] = HAVE_smaxdi3;
  ena[1213] = HAVE_smaxti3;
  ena[1214] = HAVE_smaxhf3;
  ena[1215] = HAVE_smaxsf3;
  ena[1216] = HAVE_smaxdf3;
  ena[1217] = HAVE_smaxv2qi3;
  ena[1218] = HAVE_smaxv4qi3;
  ena[1219] = HAVE_smaxv2hi3;
  ena[1220] = HAVE_smaxv8qi3;
  ena[1221] = HAVE_smaxv4hi3;
  ena[1222] = HAVE_smaxv2si3;
  ena[1223] = HAVE_smaxv16qi3;
  ena[1224] = HAVE_smaxv8hi3;
  ena[1225] = HAVE_smaxv4si3;
  ena[1226] = HAVE_smaxv2di3;
  ena[1227] = HAVE_smaxv32qi3;
  ena[1228] = HAVE_smaxv16hi3;
  ena[1229] = HAVE_smaxv8si3;
  ena[1230] = HAVE_smaxv4di3;
  ena[1231] = HAVE_smaxv64qi3;
  ena[1232] = HAVE_smaxv32hi3;
  ena[1233] = HAVE_smaxv16si3;
  ena[1234] = HAVE_smaxv8di3;
  ena[1235] = HAVE_smaxv2sf3;
  ena[1236] = HAVE_smaxv8hf3;
  ena[1237] = HAVE_smaxv4sf3;
  ena[1238] = HAVE_smaxv2df3;
  ena[1239] = HAVE_smaxv16hf3;
  ena[1240] = HAVE_smaxv8sf3;
  ena[1241] = HAVE_smaxv4df3;
  ena[1242] = HAVE_smaxv32hf3;
  ena[1243] = HAVE_smaxv16sf3;
  ena[1244] = HAVE_smaxv8df3;
  ena[1245] = HAVE_uminqi3;
  ena[1246] = HAVE_uminhi3;
  ena[1247] = HAVE_uminsi3;
  ena[1248] = HAVE_umindi3;
  ena[1249] = HAVE_uminti3;
  ena[1250] = HAVE_uminv2qi3;
  ena[1251] = HAVE_uminv4qi3;
  ena[1252] = HAVE_uminv2hi3;
  ena[1253] = HAVE_uminv8qi3;
  ena[1254] = HAVE_uminv4hi3;
  ena[1255] = HAVE_uminv2si3;
  ena[1256] = HAVE_uminv16qi3;
  ena[1257] = HAVE_uminv8hi3;
  ena[1258] = HAVE_uminv4si3;
  ena[1259] = HAVE_uminv2di3;
  ena[1260] = HAVE_uminv32qi3;
  ena[1261] = HAVE_uminv16hi3;
  ena[1262] = HAVE_uminv8si3;
  ena[1263] = HAVE_uminv4di3;
  ena[1264] = HAVE_uminv64qi3;
  ena[1265] = HAVE_uminv32hi3;
  ena[1266] = HAVE_uminv16si3;
  ena[1267] = HAVE_uminv8di3;
  ena[1268] = HAVE_umaxqi3;
  ena[1269] = HAVE_umaxhi3;
  ena[1270] = HAVE_umaxsi3;
  ena[1271] = HAVE_umaxdi3;
  ena[1272] = HAVE_umaxti3;
  ena[1273] = HAVE_umaxv2qi3;
  ena[1274] = HAVE_umaxv4qi3;
  ena[1275] = HAVE_umaxv2hi3;
  ena[1276] = HAVE_umaxv8qi3;
  ena[1277] = HAVE_umaxv4hi3;
  ena[1278] = HAVE_umaxv2si3;
  ena[1279] = HAVE_umaxv16qi3;
  ena[1280] = HAVE_umaxv8hi3;
  ena[1281] = HAVE_umaxv4si3;
  ena[1282] = HAVE_umaxv2di3;
  ena[1283] = HAVE_umaxv32qi3;
  ena[1284] = HAVE_umaxv16hi3;
  ena[1285] = HAVE_umaxv8si3;
  ena[1286] = HAVE_umaxv4di3;
  ena[1287] = HAVE_umaxv64qi3;
  ena[1288] = HAVE_umaxv32hi3;
  ena[1289] = HAVE_umaxv16si3;
  ena[1290] = HAVE_umaxv8di3;
  ena[1291] = HAVE_negqi2;
  ena[1292] = HAVE_neghi2;
  ena[1293] = HAVE_negsi2;
  ena[1294] = HAVE_negdi2;
  ena[1295] = HAVE_negti2;
  ena[1296] = HAVE_neghf2;
  ena[1297] = HAVE_negsf2;
  ena[1298] = HAVE_negdf2;
  ena[1299] = HAVE_negxf2;
  ena[1300] = HAVE_negtf2;
  ena[1301] = HAVE_negv2qi2;
  ena[1302] = HAVE_negv4qi2;
  ena[1303] = HAVE_negv2hi2;
  ena[1304] = HAVE_negv8qi2;
  ena[1305] = HAVE_negv4hi2;
  ena[1306] = HAVE_negv2si2;
  ena[1307] = HAVE_negv16qi2;
  ena[1308] = HAVE_negv8hi2;
  ena[1309] = HAVE_negv4si2;
  ena[1310] = HAVE_negv2di2;
  ena[1311] = HAVE_negv32qi2;
  ena[1312] = HAVE_negv16hi2;
  ena[1313] = HAVE_negv8si2;
  ena[1314] = HAVE_negv4di2;
  ena[1315] = HAVE_negv64qi2;
  ena[1316] = HAVE_negv32hi2;
  ena[1317] = HAVE_negv16si2;
  ena[1318] = HAVE_negv8di2;
  ena[1319] = HAVE_negv2sf2;
  ena[1320] = HAVE_negv8hf2;
  ena[1321] = HAVE_negv4sf2;
  ena[1322] = HAVE_negv2df2;
  ena[1323] = HAVE_negv16hf2;
  ena[1324] = HAVE_negv8sf2;
  ena[1325] = HAVE_negv4df2;
  ena[1326] = HAVE_negv32hf2;
  ena[1327] = HAVE_negv16sf2;
  ena[1328] = HAVE_negv8df2;
  ena[1329] = HAVE_absqi2;
  ena[1330] = HAVE_abshi2;
  ena[1331] = HAVE_abssi2;
  ena[1332] = HAVE_absdi2;
  ena[1333] = HAVE_absti2;
  ena[1334] = HAVE_abshf2;
  ena[1335] = HAVE_abssf2;
  ena[1336] = HAVE_absdf2;
  ena[1337] = HAVE_absxf2;
  ena[1338] = HAVE_abstf2;
  ena[1339] = HAVE_absv2qi2;
  ena[1340] = HAVE_absv4qi2;
  ena[1341] = HAVE_absv2hi2;
  ena[1342] = HAVE_absv8qi2;
  ena[1343] = HAVE_absv4hi2;
  ena[1344] = HAVE_absv2si2;
  ena[1345] = HAVE_absv16qi2;
  ena[1346] = HAVE_absv8hi2;
  ena[1347] = HAVE_absv4si2;
  ena[1348] = HAVE_absv2di2;
  ena[1349] = HAVE_absv32qi2;
  ena[1350] = HAVE_absv16hi2;
  ena[1351] = HAVE_absv8si2;
  ena[1352] = HAVE_absv4di2;
  ena[1353] = HAVE_absv64qi2;
  ena[1354] = HAVE_absv32hi2;
  ena[1355] = HAVE_absv16si2;
  ena[1356] = HAVE_absv8di2;
  ena[1357] = HAVE_absv2sf2;
  ena[1358] = HAVE_absv8hf2;
  ena[1359] = HAVE_absv4sf2;
  ena[1360] = HAVE_absv2df2;
  ena[1361] = HAVE_absv16hf2;
  ena[1362] = HAVE_absv8sf2;
  ena[1363] = HAVE_absv4df2;
  ena[1364] = HAVE_absv32hf2;
  ena[1365] = HAVE_absv16sf2;
  ena[1366] = HAVE_absv8df2;
  ena[1367] = HAVE_one_cmplqi2;
  ena[1368] = HAVE_one_cmplhi2;
  ena[1369] = HAVE_one_cmplsi2;
  ena[1370] = HAVE_one_cmpldi2;
  ena[1371] = HAVE_one_cmplti2;
  ena[1372] = HAVE_one_cmplv2qi2;
  ena[1373] = HAVE_one_cmplv4qi2;
  ena[1374] = HAVE_one_cmplv2hi2;
  ena[1375] = HAVE_one_cmplv8qi2;
  ena[1376] = HAVE_one_cmplv4hi2;
  ena[1377] = HAVE_one_cmplv2si2;
  ena[1378] = HAVE_one_cmplv16qi2;
  ena[1379] = HAVE_one_cmplv8hi2;
  ena[1380] = HAVE_one_cmplv4si2;
  ena[1381] = HAVE_one_cmplv2di2;
  ena[1382] = HAVE_one_cmplv1ti2;
  ena[1383] = HAVE_one_cmplv32qi2;
  ena[1384] = HAVE_one_cmplv16hi2;
  ena[1385] = HAVE_one_cmplv8si2;
  ena[1386] = HAVE_one_cmplv4di2;
  ena[1387] = HAVE_one_cmplv64qi2;
  ena[1388] = HAVE_one_cmplv32hi2;
  ena[1389] = HAVE_one_cmplv16si2;
  ena[1390] = HAVE_one_cmplv8di2;
  ena[1391] = HAVE_bswaphi2;
  ena[1392] = HAVE_bswapsi2;
  ena[1393] = HAVE_bswapdi2;
  ena[1394] = HAVE_ffssi2;
  ena[1395] = HAVE_ffsdi2;
  ena[1396] = HAVE_clzsi2;
  ena[1397] = HAVE_clzdi2;
  ena[1398] = HAVE_clzv4si2;
  ena[1399] = HAVE_clzv2di2;
  ena[1400] = HAVE_clzv8si2;
  ena[1401] = HAVE_clzv4di2;
  ena[1402] = HAVE_clzv16si2;
  ena[1403] = HAVE_clzv8di2;
  ena[1404] = HAVE_ctzsi2;
  ena[1405] = HAVE_ctzdi2;
  ena[1406] = HAVE_popcounthi2;
  ena[1407] = HAVE_popcountsi2;
  ena[1408] = HAVE_popcountdi2;
  ena[1409] = HAVE_popcountv16qi2;
  ena[1410] = HAVE_popcountv8hi2;
  ena[1411] = HAVE_popcountv4si2;
  ena[1412] = HAVE_popcountv2di2;
  ena[1413] = HAVE_popcountv32qi2;
  ena[1414] = HAVE_popcountv16hi2;
  ena[1415] = HAVE_popcountv8si2;
  ena[1416] = HAVE_popcountv4di2;
  ena[1417] = HAVE_popcountv64qi2;
  ena[1418] = HAVE_popcountv32hi2;
  ena[1419] = HAVE_popcountv16si2;
  ena[1420] = HAVE_popcountv8di2;
  ena[1421] = HAVE_parityqi2;
  ena[1422] = HAVE_parityhi2;
  ena[1423] = HAVE_paritysi2;
  ena[1424] = HAVE_paritydi2;
  ena[1425] = HAVE_sqrthf2;
  ena[1426] = HAVE_sqrtsf2;
  ena[1427] = HAVE_sqrtdf2;
  ena[1428] = HAVE_sqrtxf2;
  ena[1429] = HAVE_sqrtv2sf2;
  ena[1430] = HAVE_sqrtv8hf2;
  ena[1431] = HAVE_sqrtv4sf2;
  ena[1432] = HAVE_sqrtv2df2;
  ena[1433] = HAVE_sqrtv16hf2;
  ena[1434] = HAVE_sqrtv8sf2;
  ena[1435] = HAVE_sqrtv4df2;
  ena[1436] = HAVE_sqrtv32hf2;
  ena[1437] = HAVE_sqrtv16sf2;
  ena[1438] = HAVE_sqrtv8df2;
  ena[1439] = HAVE_movqi;
  ena[1440] = HAVE_movhi;
  ena[1441] = HAVE_movsi;
  ena[1442] = HAVE_movdi;
  ena[1443] = HAVE_movti;
  ena[1444] = HAVE_movoi;
  ena[1445] = HAVE_movxi;
  ena[1446] = HAVE_movp2qi;
  ena[1447] = HAVE_movp2hi;
  ena[1448] = HAVE_movhf;
  ena[1449] = HAVE_movbf;
  ena[1450] = HAVE_movsf;
  ena[1451] = HAVE_movdf;
  ena[1452] = HAVE_movxf;
  ena[1453] = HAVE_movtf;
  ena[1454] = HAVE_movcdi;
  ena[1455] = HAVE_movv2qi;
  ena[1456] = HAVE_movv4qi;
  ena[1457] = HAVE_movv2hi;
  ena[1458] = HAVE_movv1si;
  ena[1459] = HAVE_movv8qi;
  ena[1460] = HAVE_movv4hi;
  ena[1461] = HAVE_movv2si;
  ena[1462] = HAVE_movv1di;
  ena[1463] = HAVE_movv16qi;
  ena[1464] = HAVE_movv8hi;
  ena[1465] = HAVE_movv4si;
  ena[1466] = HAVE_movv2di;
  ena[1467] = HAVE_movv1ti;
  ena[1468] = HAVE_movv32qi;
  ena[1469] = HAVE_movv16hi;
  ena[1470] = HAVE_movv8si;
  ena[1471] = HAVE_movv4di;
  ena[1472] = HAVE_movv2ti;
  ena[1473] = HAVE_movv64qi;
  ena[1474] = HAVE_movv32hi;
  ena[1475] = HAVE_movv16si;
  ena[1476] = HAVE_movv8di;
  ena[1477] = HAVE_movv4ti;
  ena[1478] = HAVE_movv64si;
  ena[1479] = HAVE_movv2hf;
  ena[1480] = HAVE_movv2bf;
  ena[1481] = HAVE_movv4bf;
  ena[1482] = HAVE_movv4hf;
  ena[1483] = HAVE_movv2sf;
  ena[1484] = HAVE_movv8bf;
  ena[1485] = HAVE_movv8hf;
  ena[1486] = HAVE_movv4sf;
  ena[1487] = HAVE_movv2df;
  ena[1488] = HAVE_movv16bf;
  ena[1489] = HAVE_movv16hf;
  ena[1490] = HAVE_movv8sf;
  ena[1491] = HAVE_movv4df;
  ena[1492] = HAVE_movv32bf;
  ena[1493] = HAVE_movv32hf;
  ena[1494] = HAVE_movv16sf;
  ena[1495] = HAVE_movv8df;
  ena[1496] = HAVE_movv64sf;
  ena[1497] = HAVE_movstrictqi;
  ena[1498] = HAVE_movstricthi;
  ena[1499] = HAVE_movmisalignv2qi;
  ena[1500] = HAVE_movmisalignv4qi;
  ena[1501] = HAVE_movmisalignv2hi;
  ena[1502] = HAVE_movmisalignv1si;
  ena[1503] = HAVE_movmisalignv8qi;
  ena[1504] = HAVE_movmisalignv4hi;
  ena[1505] = HAVE_movmisalignv2si;
  ena[1506] = HAVE_movmisalignv1di;
  ena[1507] = HAVE_movmisalignv16qi;
  ena[1508] = HAVE_movmisalignv8hi;
  ena[1509] = HAVE_movmisalignv4si;
  ena[1510] = HAVE_movmisalignv2di;
  ena[1511] = HAVE_movmisalignv1ti;
  ena[1512] = HAVE_movmisalignv32qi;
  ena[1513] = HAVE_movmisalignv16hi;
  ena[1514] = HAVE_movmisalignv8si;
  ena[1515] = HAVE_movmisalignv4di;
  ena[1516] = HAVE_movmisalignv2ti;
  ena[1517] = HAVE_movmisalignv64qi;
  ena[1518] = HAVE_movmisalignv32hi;
  ena[1519] = HAVE_movmisalignv16si;
  ena[1520] = HAVE_movmisalignv8di;
  ena[1521] = HAVE_movmisalignv4ti;
  ena[1522] = HAVE_movmisalignv2hf;
  ena[1523] = HAVE_movmisalignv2bf;
  ena[1524] = HAVE_movmisalignv4bf;
  ena[1525] = HAVE_movmisalignv4hf;
  ena[1526] = HAVE_movmisalignv2sf;
  ena[1527] = HAVE_movmisalignv8bf;
  ena[1528] = HAVE_movmisalignv8hf;
  ena[1529] = HAVE_movmisalignv4sf;
  ena[1530] = HAVE_movmisalignv2df;
  ena[1531] = HAVE_movmisalignv16bf;
  ena[1532] = HAVE_movmisalignv16hf;
  ena[1533] = HAVE_movmisalignv8sf;
  ena[1534] = HAVE_movmisalignv4df;
  ena[1535] = HAVE_movmisalignv32bf;
  ena[1536] = HAVE_movmisalignv32hf;
  ena[1537] = HAVE_movmisalignv16sf;
  ena[1538] = HAVE_movmisalignv8df;
  ena[1539] = HAVE_storentsi;
  ena[1540] = HAVE_storentdi;
  ena[1541] = HAVE_storentsf;
  ena[1542] = HAVE_storentdf;
  ena[1543] = HAVE_storentv2di;
  ena[1544] = HAVE_storentv4di;
  ena[1545] = HAVE_storentv8di;
  ena[1546] = HAVE_storentv4sf;
  ena[1547] = HAVE_storentv2df;
  ena[1548] = HAVE_storentv8sf;
  ena[1549] = HAVE_storentv4df;
  ena[1550] = HAVE_storentv16sf;
  ena[1551] = HAVE_storentv8df;
  ena[1552] = HAVE_insvhi;
  ena[1553] = HAVE_insvsi;
  ena[1554] = HAVE_insvdi;
  ena[1555] = HAVE_extvhi;
  ena[1556] = HAVE_extvsi;
  ena[1557] = HAVE_extzvhi;
  ena[1558] = HAVE_extzvsi;
  ena[1559] = HAVE_extzvdi;
  ena[1560] = HAVE_cbranchcc4;
  ena[1561] = HAVE_cbranchqi4;
  ena[1562] = HAVE_cbranchhi4;
  ena[1563] = HAVE_cbranchsi4;
  ena[1564] = HAVE_cbranchdi4;
  ena[1565] = HAVE_cbranchti4;
  ena[1566] = HAVE_cbranchoi4;
  ena[1567] = HAVE_cbranchhf4;
  ena[1568] = HAVE_cbranchbf4;
  ena[1569] = HAVE_cbranchsf4;
  ena[1570] = HAVE_cbranchdf4;
  ena[1571] = HAVE_cbranchxf4;
  ena[1572] = HAVE_cbranchv4si4;
  ena[1573] = HAVE_cbranchv2di4;
  ena[1574] = HAVE_cbranchv8si4;
  ena[1575] = HAVE_cbranchv4di4;
  ena[1576] = HAVE_addqicc;
  ena[1577] = HAVE_addhicc;
  ena[1578] = HAVE_addsicc;
  ena[1579] = HAVE_adddicc;
  ena[1580] = HAVE_movqicc;
  ena[1581] = HAVE_movhicc;
  ena[1582] = HAVE_movsicc;
  ena[1583] = HAVE_movdicc;
  ena[1584] = HAVE_movhfcc;
  ena[1585] = HAVE_movsfcc;
  ena[1586] = HAVE_movdfcc;
  ena[1587] = HAVE_movxfcc;
  ena[1588] = HAVE_cond_addv16qi;
  ena[1589] = HAVE_cond_addv8hi;
  ena[1590] = HAVE_cond_addv4si;
  ena[1591] = HAVE_cond_addv2di;
  ena[1592] = HAVE_cond_addv32qi;
  ena[1593] = HAVE_cond_addv16hi;
  ena[1594] = HAVE_cond_addv8si;
  ena[1595] = HAVE_cond_addv4di;
  ena[1596] = HAVE_cond_addv64qi;
  ena[1597] = HAVE_cond_addv32hi;
  ena[1598] = HAVE_cond_addv16si;
  ena[1599] = HAVE_cond_addv8di;
  ena[1600] = HAVE_cond_addv8hf;
  ena[1601] = HAVE_cond_addv4sf;
  ena[1602] = HAVE_cond_addv2df;
  ena[1603] = HAVE_cond_addv16hf;
  ena[1604] = HAVE_cond_addv8sf;
  ena[1605] = HAVE_cond_addv4df;
  ena[1606] = HAVE_cond_addv32hf;
  ena[1607] = HAVE_cond_addv16sf;
  ena[1608] = HAVE_cond_addv8df;
  ena[1609] = HAVE_cond_subv16qi;
  ena[1610] = HAVE_cond_subv8hi;
  ena[1611] = HAVE_cond_subv4si;
  ena[1612] = HAVE_cond_subv2di;
  ena[1613] = HAVE_cond_subv32qi;
  ena[1614] = HAVE_cond_subv16hi;
  ena[1615] = HAVE_cond_subv8si;
  ena[1616] = HAVE_cond_subv4di;
  ena[1617] = HAVE_cond_subv64qi;
  ena[1618] = HAVE_cond_subv32hi;
  ena[1619] = HAVE_cond_subv16si;
  ena[1620] = HAVE_cond_subv8di;
  ena[1621] = HAVE_cond_subv8hf;
  ena[1622] = HAVE_cond_subv4sf;
  ena[1623] = HAVE_cond_subv2df;
  ena[1624] = HAVE_cond_subv16hf;
  ena[1625] = HAVE_cond_subv8sf;
  ena[1626] = HAVE_cond_subv4df;
  ena[1627] = HAVE_cond_subv32hf;
  ena[1628] = HAVE_cond_subv16sf;
  ena[1629] = HAVE_cond_subv8df;
  ena[1630] = HAVE_cond_mulv8hi;
  ena[1631] = HAVE_cond_mulv4si;
  ena[1632] = HAVE_cond_mulv2di;
  ena[1633] = HAVE_cond_mulv16hi;
  ena[1634] = HAVE_cond_mulv8si;
  ena[1635] = HAVE_cond_mulv4di;
  ena[1636] = HAVE_cond_mulv32hi;
  ena[1637] = HAVE_cond_mulv16si;
  ena[1638] = HAVE_cond_mulv8di;
  ena[1639] = HAVE_cond_mulv8hf;
  ena[1640] = HAVE_cond_mulv4sf;
  ena[1641] = HAVE_cond_mulv2df;
  ena[1642] = HAVE_cond_mulv16hf;
  ena[1643] = HAVE_cond_mulv8sf;
  ena[1644] = HAVE_cond_mulv4df;
  ena[1645] = HAVE_cond_mulv32hf;
  ena[1646] = HAVE_cond_mulv16sf;
  ena[1647] = HAVE_cond_mulv8df;
  ena[1648] = HAVE_cond_divv8hf;
  ena[1649] = HAVE_cond_divv4sf;
  ena[1650] = HAVE_cond_divv2df;
  ena[1651] = HAVE_cond_divv16hf;
  ena[1652] = HAVE_cond_divv8sf;
  ena[1653] = HAVE_cond_divv4df;
  ena[1654] = HAVE_cond_divv32hf;
  ena[1655] = HAVE_cond_divv16sf;
  ena[1656] = HAVE_cond_divv8df;
  ena[1657] = HAVE_cond_andv4si;
  ena[1658] = HAVE_cond_andv2di;
  ena[1659] = HAVE_cond_andv8si;
  ena[1660] = HAVE_cond_andv4di;
  ena[1661] = HAVE_cond_andv16si;
  ena[1662] = HAVE_cond_andv8di;
  ena[1663] = HAVE_cond_iorv4si;
  ena[1664] = HAVE_cond_iorv2di;
  ena[1665] = HAVE_cond_iorv8si;
  ena[1666] = HAVE_cond_iorv4di;
  ena[1667] = HAVE_cond_iorv16si;
  ena[1668] = HAVE_cond_iorv8di;
  ena[1669] = HAVE_cond_xorv4si;
  ena[1670] = HAVE_cond_xorv2di;
  ena[1671] = HAVE_cond_xorv8si;
  ena[1672] = HAVE_cond_xorv4di;
  ena[1673] = HAVE_cond_xorv16si;
  ena[1674] = HAVE_cond_xorv8di;
  ena[1675] = HAVE_cond_ashlv8hi;
  ena[1676] = HAVE_cond_ashlv4si;
  ena[1677] = HAVE_cond_ashlv2di;
  ena[1678] = HAVE_cond_ashlv16hi;
  ena[1679] = HAVE_cond_ashlv8si;
  ena[1680] = HAVE_cond_ashlv4di;
  ena[1681] = HAVE_cond_ashlv32hi;
  ena[1682] = HAVE_cond_ashlv16si;
  ena[1683] = HAVE_cond_ashlv8di;
  ena[1684] = HAVE_cond_ashrv8hi;
  ena[1685] = HAVE_cond_ashrv4si;
  ena[1686] = HAVE_cond_ashrv2di;
  ena[1687] = HAVE_cond_ashrv16hi;
  ena[1688] = HAVE_cond_ashrv8si;
  ena[1689] = HAVE_cond_ashrv4di;
  ena[1690] = HAVE_cond_ashrv32hi;
  ena[1691] = HAVE_cond_ashrv16si;
  ena[1692] = HAVE_cond_ashrv8di;
  ena[1693] = HAVE_cond_lshrv8hi;
  ena[1694] = HAVE_cond_lshrv4si;
  ena[1695] = HAVE_cond_lshrv2di;
  ena[1696] = HAVE_cond_lshrv16hi;
  ena[1697] = HAVE_cond_lshrv8si;
  ena[1698] = HAVE_cond_lshrv4di;
  ena[1699] = HAVE_cond_lshrv32hi;
  ena[1700] = HAVE_cond_lshrv16si;
  ena[1701] = HAVE_cond_lshrv8di;
  ena[1702] = HAVE_cond_sminv16qi;
  ena[1703] = HAVE_cond_sminv8hi;
  ena[1704] = HAVE_cond_sminv4si;
  ena[1705] = HAVE_cond_sminv2di;
  ena[1706] = HAVE_cond_sminv32qi;
  ena[1707] = HAVE_cond_sminv16hi;
  ena[1708] = HAVE_cond_sminv8si;
  ena[1709] = HAVE_cond_sminv4di;
  ena[1710] = HAVE_cond_sminv64qi;
  ena[1711] = HAVE_cond_sminv32hi;
  ena[1712] = HAVE_cond_sminv16si;
  ena[1713] = HAVE_cond_sminv8di;
  ena[1714] = HAVE_cond_sminv8hf;
  ena[1715] = HAVE_cond_sminv4sf;
  ena[1716] = HAVE_cond_sminv2df;
  ena[1717] = HAVE_cond_sminv16hf;
  ena[1718] = HAVE_cond_sminv8sf;
  ena[1719] = HAVE_cond_sminv4df;
  ena[1720] = HAVE_cond_sminv32hf;
  ena[1721] = HAVE_cond_sminv16sf;
  ena[1722] = HAVE_cond_sminv8df;
  ena[1723] = HAVE_cond_smaxv16qi;
  ena[1724] = HAVE_cond_smaxv8hi;
  ena[1725] = HAVE_cond_smaxv4si;
  ena[1726] = HAVE_cond_smaxv2di;
  ena[1727] = HAVE_cond_smaxv32qi;
  ena[1728] = HAVE_cond_smaxv16hi;
  ena[1729] = HAVE_cond_smaxv8si;
  ena[1730] = HAVE_cond_smaxv4di;
  ena[1731] = HAVE_cond_smaxv64qi;
  ena[1732] = HAVE_cond_smaxv32hi;
  ena[1733] = HAVE_cond_smaxv16si;
  ena[1734] = HAVE_cond_smaxv8di;
  ena[1735] = HAVE_cond_smaxv8hf;
  ena[1736] = HAVE_cond_smaxv4sf;
  ena[1737] = HAVE_cond_smaxv2df;
  ena[1738] = HAVE_cond_smaxv16hf;
  ena[1739] = HAVE_cond_smaxv8sf;
  ena[1740] = HAVE_cond_smaxv4df;
  ena[1741] = HAVE_cond_smaxv32hf;
  ena[1742] = HAVE_cond_smaxv16sf;
  ena[1743] = HAVE_cond_smaxv8df;
  ena[1744] = HAVE_cond_uminv16qi;
  ena[1745] = HAVE_cond_uminv8hi;
  ena[1746] = HAVE_cond_uminv4si;
  ena[1747] = HAVE_cond_uminv2di;
  ena[1748] = HAVE_cond_uminv32qi;
  ena[1749] = HAVE_cond_uminv16hi;
  ena[1750] = HAVE_cond_uminv8si;
  ena[1751] = HAVE_cond_uminv4di;
  ena[1752] = HAVE_cond_uminv64qi;
  ena[1753] = HAVE_cond_uminv32hi;
  ena[1754] = HAVE_cond_uminv16si;
  ena[1755] = HAVE_cond_uminv8di;
  ena[1756] = HAVE_cond_umaxv16qi;
  ena[1757] = HAVE_cond_umaxv8hi;
  ena[1758] = HAVE_cond_umaxv4si;
  ena[1759] = HAVE_cond_umaxv2di;
  ena[1760] = HAVE_cond_umaxv32qi;
  ena[1761] = HAVE_cond_umaxv16hi;
  ena[1762] = HAVE_cond_umaxv8si;
  ena[1763] = HAVE_cond_umaxv4di;
  ena[1764] = HAVE_cond_umaxv64qi;
  ena[1765] = HAVE_cond_umaxv32hi;
  ena[1766] = HAVE_cond_umaxv16si;
  ena[1767] = HAVE_cond_umaxv8di;
  ena[1768] = HAVE_cond_fmav8hf;
  ena[1769] = HAVE_cond_fmav4sf;
  ena[1770] = HAVE_cond_fmav2df;
  ena[1771] = HAVE_cond_fmav16hf;
  ena[1772] = HAVE_cond_fmav8sf;
  ena[1773] = HAVE_cond_fmav4df;
  ena[1774] = HAVE_cond_fmav32hf;
  ena[1775] = HAVE_cond_fmav16sf;
  ena[1776] = HAVE_cond_fmav8df;
  ena[1777] = HAVE_cond_fmsv8hf;
  ena[1778] = HAVE_cond_fmsv4sf;
  ena[1779] = HAVE_cond_fmsv2df;
  ena[1780] = HAVE_cond_fmsv16hf;
  ena[1781] = HAVE_cond_fmsv8sf;
  ena[1782] = HAVE_cond_fmsv4df;
  ena[1783] = HAVE_cond_fmsv32hf;
  ena[1784] = HAVE_cond_fmsv16sf;
  ena[1785] = HAVE_cond_fmsv8df;
  ena[1786] = HAVE_cond_fnmav8hf;
  ena[1787] = HAVE_cond_fnmav4sf;
  ena[1788] = HAVE_cond_fnmav2df;
  ena[1789] = HAVE_cond_fnmav16hf;
  ena[1790] = HAVE_cond_fnmav8sf;
  ena[1791] = HAVE_cond_fnmav4df;
  ena[1792] = HAVE_cond_fnmav32hf;
  ena[1793] = HAVE_cond_fnmav16sf;
  ena[1794] = HAVE_cond_fnmav8df;
  ena[1795] = HAVE_cond_fnmsv8hf;
  ena[1796] = HAVE_cond_fnmsv4sf;
  ena[1797] = HAVE_cond_fnmsv2df;
  ena[1798] = HAVE_cond_fnmsv16hf;
  ena[1799] = HAVE_cond_fnmsv8sf;
  ena[1800] = HAVE_cond_fnmsv4df;
  ena[1801] = HAVE_cond_fnmsv32hf;
  ena[1802] = HAVE_cond_fnmsv16sf;
  ena[1803] = HAVE_cond_fnmsv8df;
  ena[1804] = HAVE_cstorecc4;
  ena[1805] = HAVE_cstoreqi4;
  ena[1806] = HAVE_cstorehi4;
  ena[1807] = HAVE_cstoresi4;
  ena[1808] = HAVE_cstoredi4;
  ena[1809] = HAVE_cstoreti4;
  ena[1810] = HAVE_cstorehf4;
  ena[1811] = HAVE_cstorebf4;
  ena[1812] = HAVE_cstoresf4;
  ena[1813] = HAVE_cstoredf4;
  ena[1814] = HAVE_cstorexf4;
  ena[1815] = HAVE_addvqi4;
  ena[1816] = HAVE_addvhi4;
  ena[1817] = HAVE_addvsi4;
  ena[1818] = HAVE_addvdi4;
  ena[1819] = HAVE_addvti4;
  ena[1820] = HAVE_subvqi4;
  ena[1821] = HAVE_subvhi4;
  ena[1822] = HAVE_subvsi4;
  ena[1823] = HAVE_subvdi4;
  ena[1824] = HAVE_subvti4;
  ena[1825] = HAVE_mulvqi4;
  ena[1826] = HAVE_mulvhi4;
  ena[1827] = HAVE_mulvsi4;
  ena[1828] = HAVE_mulvdi4;
  ena[1829] = HAVE_uaddvqi4;
  ena[1830] = HAVE_uaddvhi4;
  ena[1831] = HAVE_uaddvsi4;
  ena[1832] = HAVE_uaddvdi4;
  ena[1833] = HAVE_uaddvti4;
  ena[1834] = HAVE_usubvqi4;
  ena[1835] = HAVE_usubvhi4;
  ena[1836] = HAVE_usubvsi4;
  ena[1837] = HAVE_usubvdi4;
  ena[1838] = HAVE_umulvqi4;
  ena[1839] = HAVE_umulvhi4;
  ena[1840] = HAVE_umulvsi4;
  ena[1841] = HAVE_umulvdi4;
  ena[1842] = HAVE_negvqi3;
  ena[1843] = HAVE_negvhi3;
  ena[1844] = HAVE_negvsi3;
  ena[1845] = HAVE_negvdi3;
  ena[1846] = HAVE_spaceshipsf3;
  ena[1847] = HAVE_spaceshipdf3;
  ena[1848] = HAVE_spaceshipxf3;
  ena[1849] = HAVE_smulsi3_highpart;
  ena[1850] = HAVE_smuldi3_highpart;
  ena[1851] = HAVE_smulv2hi3_highpart;
  ena[1852] = HAVE_smulv4hi3_highpart;
  ena[1853] = HAVE_smulv8hi3_highpart;
  ena[1854] = HAVE_smulv16hi3_highpart;
  ena[1855] = HAVE_smulv32hi3_highpart;
  ena[1856] = HAVE_umulsi3_highpart;
  ena[1857] = HAVE_umuldi3_highpart;
  ena[1858] = HAVE_umulv2hi3_highpart;
  ena[1859] = HAVE_umulv4hi3_highpart;
  ena[1860] = HAVE_umulv8hi3_highpart;
  ena[1861] = HAVE_umulv16hi3_highpart;
  ena[1862] = HAVE_umulv32hi3_highpart;
  ena[1863] = HAVE_cmpmemsi;
  ena[1864] = HAVE_cmpstrnsi;
  ena[1865] = HAVE_cpymemsi;
  ena[1866] = HAVE_cpymemdi;
  ena[1867] = HAVE_setmemsi;
  ena[1868] = HAVE_setmemdi;
  ena[1869] = HAVE_strlensi;
  ena[1870] = HAVE_strlendi;
  ena[1871] = HAVE_fmahf4;
  ena[1872] = HAVE_fmasf4;
  ena[1873] = HAVE_fmadf4;
  ena[1874] = HAVE_fmav2sf4;
  ena[1875] = HAVE_fmav8hf4;
  ena[1876] = HAVE_fmav4sf4;
  ena[1877] = HAVE_fmav2df4;
  ena[1878] = HAVE_fmav16hf4;
  ena[1879] = HAVE_fmav8sf4;
  ena[1880] = HAVE_fmav4df4;
  ena[1881] = HAVE_fmav32hf4;
  ena[1882] = HAVE_fmav16sf4;
  ena[1883] = HAVE_fmav8df4;
  ena[1884] = HAVE_fmshf4;
  ena[1885] = HAVE_fmssf4;
  ena[1886] = HAVE_fmsdf4;
  ena[1887] = HAVE_fmsv2sf4;
  ena[1888] = HAVE_fmsv8hf4;
  ena[1889] = HAVE_fmsv4sf4;
  ena[1890] = HAVE_fmsv2df4;
  ena[1891] = HAVE_fmsv16hf4;
  ena[1892] = HAVE_fmsv8sf4;
  ena[1893] = HAVE_fmsv4df4;
  ena[1894] = HAVE_fmsv32hf4;
  ena[1895] = HAVE_fmsv16sf4;
  ena[1896] = HAVE_fmsv8df4;
  ena[1897] = HAVE_fnmahf4;
  ena[1898] = HAVE_fnmasf4;
  ena[1899] = HAVE_fnmadf4;
  ena[1900] = HAVE_fnmav2sf4;
  ena[1901] = HAVE_fnmav8hf4;
  ena[1902] = HAVE_fnmav4sf4;
  ena[1903] = HAVE_fnmav2df4;
  ena[1904] = HAVE_fnmav16hf4;
  ena[1905] = HAVE_fnmav8sf4;
  ena[1906] = HAVE_fnmav4df4;
  ena[1907] = HAVE_fnmav32hf4;
  ena[1908] = HAVE_fnmav16sf4;
  ena[1909] = HAVE_fnmav8df4;
  ena[1910] = HAVE_fnmshf4;
  ena[1911] = HAVE_fnmssf4;
  ena[1912] = HAVE_fnmsdf4;
  ena[1913] = HAVE_fnmsv2sf4;
  ena[1914] = HAVE_fnmsv8hf4;
  ena[1915] = HAVE_fnmsv4sf4;
  ena[1916] = HAVE_fnmsv2df4;
  ena[1917] = HAVE_fnmsv16hf4;
  ena[1918] = HAVE_fnmsv8sf4;
  ena[1919] = HAVE_fnmsv4df4;
  ena[1920] = HAVE_fnmsv32hf4;
  ena[1921] = HAVE_fnmsv16sf4;
  ena[1922] = HAVE_fnmsv8df4;
  ena[1923] = HAVE_rinthf2;
  ena[1924] = HAVE_rintsf2;
  ena[1925] = HAVE_rintdf2;
  ena[1926] = HAVE_rintxf2;
  ena[1927] = HAVE_rintv2sf2;
  ena[1928] = HAVE_rintv8hf2;
  ena[1929] = HAVE_rintv4sf2;
  ena[1930] = HAVE_rintv2df2;
  ena[1931] = HAVE_rintv16hf2;
  ena[1932] = HAVE_rintv8sf2;
  ena[1933] = HAVE_rintv4df2;
  ena[1934] = HAVE_rintv32hf2;
  ena[1935] = HAVE_rintv16sf2;
  ena[1936] = HAVE_rintv8df2;
  ena[1937] = HAVE_roundsf2;
  ena[1938] = HAVE_rounddf2;
  ena[1939] = HAVE_roundxf2;
  ena[1940] = HAVE_roundv2sf2;
  ena[1941] = HAVE_roundv4sf2;
  ena[1942] = HAVE_roundv2df2;
  ena[1943] = HAVE_roundv8sf2;
  ena[1944] = HAVE_roundv4df2;
  ena[1945] = HAVE_roundv16sf2;
  ena[1946] = HAVE_roundv8df2;
  ena[1947] = HAVE_roundevenhf2;
  ena[1948] = HAVE_roundevensf2;
  ena[1949] = HAVE_roundevendf2;
  ena[1950] = HAVE_roundevenxf2;
  ena[1951] = HAVE_floorhf2;
  ena[1952] = HAVE_floorsf2;
  ena[1953] = HAVE_floordf2;
  ena[1954] = HAVE_floorxf2;
  ena[1955] = HAVE_floorv2sf2;
  ena[1956] = HAVE_floorv8hf2;
  ena[1957] = HAVE_floorv4sf2;
  ena[1958] = HAVE_floorv2df2;
  ena[1959] = HAVE_floorv16hf2;
  ena[1960] = HAVE_floorv8sf2;
  ena[1961] = HAVE_floorv4df2;
  ena[1962] = HAVE_floorv32hf2;
  ena[1963] = HAVE_floorv16sf2;
  ena[1964] = HAVE_floorv8df2;
  ena[1965] = HAVE_ceilhf2;
  ena[1966] = HAVE_ceilsf2;
  ena[1967] = HAVE_ceildf2;
  ena[1968] = HAVE_ceilxf2;
  ena[1969] = HAVE_ceilv2sf2;
  ena[1970] = HAVE_ceilv8hf2;
  ena[1971] = HAVE_ceilv4sf2;
  ena[1972] = HAVE_ceilv2df2;
  ena[1973] = HAVE_ceilv16hf2;
  ena[1974] = HAVE_ceilv8sf2;
  ena[1975] = HAVE_ceilv4df2;
  ena[1976] = HAVE_ceilv32hf2;
  ena[1977] = HAVE_ceilv16sf2;
  ena[1978] = HAVE_ceilv8df2;
  ena[1979] = HAVE_btrunchf2;
  ena[1980] = HAVE_btruncsf2;
  ena[1981] = HAVE_btruncdf2;
  ena[1982] = HAVE_btruncxf2;
  ena[1983] = HAVE_btruncv2sf2;
  ena[1984] = HAVE_btruncv8hf2;
  ena[1985] = HAVE_btruncv4sf2;
  ena[1986] = HAVE_btruncv2df2;
  ena[1987] = HAVE_btruncv16hf2;
  ena[1988] = HAVE_btruncv8sf2;
  ena[1989] = HAVE_btruncv4df2;
  ena[1990] = HAVE_btruncv32hf2;
  ena[1991] = HAVE_btruncv16sf2;
  ena[1992] = HAVE_btruncv8df2;
  ena[1993] = HAVE_nearbyinthf2;
  ena[1994] = HAVE_nearbyintsf2;
  ena[1995] = HAVE_nearbyintdf2;
  ena[1996] = HAVE_nearbyintxf2;
  ena[1997] = HAVE_nearbyintv2sf2;
  ena[1998] = HAVE_nearbyintv8hf2;
  ena[1999] = HAVE_nearbyintv4sf2;
  ena[2000] = HAVE_nearbyintv2df2;
  ena[2001] = HAVE_nearbyintv16hf2;
  ena[2002] = HAVE_nearbyintv8sf2;
  ena[2003] = HAVE_nearbyintv4df2;
  ena[2004] = HAVE_nearbyintv32hf2;
  ena[2005] = HAVE_nearbyintv16sf2;
  ena[2006] = HAVE_nearbyintv8df2;
  ena[2007] = HAVE_acossf2;
  ena[2008] = HAVE_acosdf2;
  ena[2009] = HAVE_acosxf2;
  ena[2010] = HAVE_acoshsf2;
  ena[2011] = HAVE_acoshdf2;
  ena[2012] = HAVE_acoshxf2;
  ena[2013] = HAVE_asinsf2;
  ena[2014] = HAVE_asindf2;
  ena[2015] = HAVE_asinxf2;
  ena[2016] = HAVE_asinhsf2;
  ena[2017] = HAVE_asinhdf2;
  ena[2018] = HAVE_asinhxf2;
  ena[2019] = HAVE_atan2sf3;
  ena[2020] = HAVE_atan2df3;
  ena[2021] = HAVE_atan2xf3;
  ena[2022] = HAVE_atansf2;
  ena[2023] = HAVE_atandf2;
  ena[2024] = HAVE_atanxf2;
  ena[2025] = HAVE_atanhsf2;
  ena[2026] = HAVE_atanhdf2;
  ena[2027] = HAVE_atanhxf2;
  ena[2028] = HAVE_copysignhf3;
  ena[2029] = HAVE_copysignsf3;
  ena[2030] = HAVE_copysigndf3;
  ena[2031] = HAVE_copysigntf3;
  ena[2032] = HAVE_copysignv2sf3;
  ena[2033] = HAVE_copysignv8hf3;
  ena[2034] = HAVE_copysignv4sf3;
  ena[2035] = HAVE_copysignv2df3;
  ena[2036] = HAVE_copysignv16hf3;
  ena[2037] = HAVE_copysignv8sf3;
  ena[2038] = HAVE_copysignv4df3;
  ena[2039] = HAVE_copysignv32hf3;
  ena[2040] = HAVE_copysignv16sf3;
  ena[2041] = HAVE_copysignv8df3;
  ena[2042] = HAVE_xorsignhf3;
  ena[2043] = HAVE_xorsignsf3;
  ena[2044] = HAVE_xorsigndf3;
  ena[2045] = HAVE_xorsignv2sf3;
  ena[2046] = HAVE_xorsignv8hf3;
  ena[2047] = HAVE_xorsignv4sf3;
  ena[2048] = HAVE_xorsignv2df3;
  ena[2049] = HAVE_xorsignv16hf3;
  ena[2050] = HAVE_xorsignv8sf3;
  ena[2051] = HAVE_xorsignv4df3;
  ena[2052] = HAVE_xorsignv32hf3;
  ena[2053] = HAVE_xorsignv16sf3;
  ena[2054] = HAVE_xorsignv8df3;
  ena[2055] = HAVE_cmulv8hf3;
  ena[2056] = HAVE_cmulv16hf3;
  ena[2057] = HAVE_cmulv32hf3;
  ena[2058] = HAVE_cmul_conjv8hf3;
  ena[2059] = HAVE_cmul_conjv16hf3;
  ena[2060] = HAVE_cmul_conjv32hf3;
  ena[2061] = HAVE_cmlav8hf4;
  ena[2062] = HAVE_cmlav16hf4;
  ena[2063] = HAVE_cmlav32hf4;
  ena[2064] = HAVE_cmla_conjv8hf4;
  ena[2065] = HAVE_cmla_conjv16hf4;
  ena[2066] = HAVE_cmla_conjv32hf4;
  ena[2067] = HAVE_cossf2;
  ena[2068] = HAVE_cosdf2;
  ena[2069] = HAVE_cosxf2;
  ena[2070] = HAVE_coshsf2;
  ena[2071] = HAVE_coshdf2;
  ena[2072] = HAVE_coshxf2;
  ena[2073] = HAVE_exp10sf2;
  ena[2074] = HAVE_exp10df2;
  ena[2075] = HAVE_exp10xf2;
  ena[2076] = HAVE_exp2sf2;
  ena[2077] = HAVE_exp2df2;
  ena[2078] = HAVE_exp2xf2;
  ena[2079] = HAVE_exp2v16sf2;
  ena[2080] = HAVE_exp2v8df2;
  ena[2081] = HAVE_expsf2;
  ena[2082] = HAVE_expdf2;
  ena[2083] = HAVE_expxf2;
  ena[2084] = HAVE_expm1sf2;
  ena[2085] = HAVE_expm1df2;
  ena[2086] = HAVE_expm1xf2;
  ena[2087] = HAVE_fmodsf3;
  ena[2088] = HAVE_fmoddf3;
  ena[2089] = HAVE_fmodxf3;
  ena[2090] = HAVE_hypotsf3;
  ena[2091] = HAVE_hypotdf3;
  ena[2092] = HAVE_ilogbsf2;
  ena[2093] = HAVE_ilogbdf2;
  ena[2094] = HAVE_ilogbxf2;
  ena[2095] = HAVE_issignalingxf2;
  ena[2096] = HAVE_ldexpsf3;
  ena[2097] = HAVE_ldexpdf3;
  ena[2098] = HAVE_ldexpxf3;
  ena[2099] = HAVE_log10sf2;
  ena[2100] = HAVE_log10df2;
  ena[2101] = HAVE_log10xf2;
  ena[2102] = HAVE_log1psf2;
  ena[2103] = HAVE_log1pdf2;
  ena[2104] = HAVE_log1pxf2;
  ena[2105] = HAVE_log2sf2;
  ena[2106] = HAVE_log2df2;
  ena[2107] = HAVE_log2xf2;
  ena[2108] = HAVE_logsf2;
  ena[2109] = HAVE_logdf2;
  ena[2110] = HAVE_logxf2;
  ena[2111] = HAVE_logbsf2;
  ena[2112] = HAVE_logbdf2;
  ena[2113] = HAVE_logbxf2;
  ena[2114] = HAVE_remaindersf3;
  ena[2115] = HAVE_remainderdf3;
  ena[2116] = HAVE_remainderxf3;
  ena[2117] = HAVE_rsqrthf2;
  ena[2118] = HAVE_rsqrtsf2;
  ena[2119] = HAVE_rsqrtv8hf2;
  ena[2120] = HAVE_rsqrtv4sf2;
  ena[2121] = HAVE_rsqrtv16hf2;
  ena[2122] = HAVE_rsqrtv8sf2;
  ena[2123] = HAVE_rsqrtv32hf2;
  ena[2124] = HAVE_rsqrtv16sf2;
  ena[2125] = HAVE_scalbsf3;
  ena[2126] = HAVE_scalbdf3;
  ena[2127] = HAVE_scalbxf3;
  ena[2128] = HAVE_signbitsf2;
  ena[2129] = HAVE_signbitdf2;
  ena[2130] = HAVE_signbitxf2;
  ena[2131] = HAVE_signbittf2;
  ena[2132] = HAVE_signbitv2sf2;
  ena[2133] = HAVE_signbitv4sf2;
  ena[2134] = HAVE_signbitv8sf2;
  ena[2135] = HAVE_signbitv16sf2;
  ena[2136] = HAVE_significandsf2;
  ena[2137] = HAVE_significanddf2;
  ena[2138] = HAVE_significandxf2;
  ena[2139] = HAVE_sinsf2;
  ena[2140] = HAVE_sindf2;
  ena[2141] = HAVE_sinxf2;
  ena[2142] = HAVE_sincossf3;
  ena[2143] = HAVE_sincosdf3;
  ena[2144] = HAVE_sincosxf3;
  ena[2145] = HAVE_sinhsf2;
  ena[2146] = HAVE_sinhdf2;
  ena[2147] = HAVE_sinhxf2;
  ena[2148] = HAVE_tansf2;
  ena[2149] = HAVE_tandf2;
  ena[2150] = HAVE_tanxf2;
  ena[2151] = HAVE_tanhsf2;
  ena[2152] = HAVE_tanhdf2;
  ena[2153] = HAVE_tanhxf2;
  ena[2154] = HAVE_reduc_smax_scal_v4qi;
  ena[2155] = HAVE_reduc_smax_scal_v4hi;
  ena[2156] = HAVE_reduc_smax_scal_v16qi;
  ena[2157] = HAVE_reduc_smax_scal_v8hi;
  ena[2158] = HAVE_reduc_smax_scal_v4si;
  ena[2159] = HAVE_reduc_smax_scal_v2di;
  ena[2160] = HAVE_reduc_smax_scal_v32qi;
  ena[2161] = HAVE_reduc_smax_scal_v16hi;
  ena[2162] = HAVE_reduc_smax_scal_v8si;
  ena[2163] = HAVE_reduc_smax_scal_v4di;
  ena[2164] = HAVE_reduc_smax_scal_v64qi;
  ena[2165] = HAVE_reduc_smax_scal_v32hi;
  ena[2166] = HAVE_reduc_smax_scal_v16si;
  ena[2167] = HAVE_reduc_smax_scal_v8di;
  ena[2168] = HAVE_reduc_smax_scal_v8hf;
  ena[2169] = HAVE_reduc_smax_scal_v4sf;
  ena[2170] = HAVE_reduc_smax_scal_v2df;
  ena[2171] = HAVE_reduc_smax_scal_v16hf;
  ena[2172] = HAVE_reduc_smax_scal_v8sf;
  ena[2173] = HAVE_reduc_smax_scal_v4df;
  ena[2174] = HAVE_reduc_smax_scal_v32hf;
  ena[2175] = HAVE_reduc_smax_scal_v16sf;
  ena[2176] = HAVE_reduc_smax_scal_v8df;
  ena[2177] = HAVE_reduc_smin_scal_v4qi;
  ena[2178] = HAVE_reduc_smin_scal_v4hi;
  ena[2179] = HAVE_reduc_smin_scal_v16qi;
  ena[2180] = HAVE_reduc_smin_scal_v8hi;
  ena[2181] = HAVE_reduc_smin_scal_v4si;
  ena[2182] = HAVE_reduc_smin_scal_v2di;
  ena[2183] = HAVE_reduc_smin_scal_v32qi;
  ena[2184] = HAVE_reduc_smin_scal_v16hi;
  ena[2185] = HAVE_reduc_smin_scal_v8si;
  ena[2186] = HAVE_reduc_smin_scal_v4di;
  ena[2187] = HAVE_reduc_smin_scal_v64qi;
  ena[2188] = HAVE_reduc_smin_scal_v32hi;
  ena[2189] = HAVE_reduc_smin_scal_v16si;
  ena[2190] = HAVE_reduc_smin_scal_v8di;
  ena[2191] = HAVE_reduc_smin_scal_v8hf;
  ena[2192] = HAVE_reduc_smin_scal_v4sf;
  ena[2193] = HAVE_reduc_smin_scal_v2df;
  ena[2194] = HAVE_reduc_smin_scal_v16hf;
  ena[2195] = HAVE_reduc_smin_scal_v8sf;
  ena[2196] = HAVE_reduc_smin_scal_v4df;
  ena[2197] = HAVE_reduc_smin_scal_v32hf;
  ena[2198] = HAVE_reduc_smin_scal_v16sf;
  ena[2199] = HAVE_reduc_smin_scal_v8df;
  ena[2200] = HAVE_reduc_plus_scal_v4qi;
  ena[2201] = HAVE_reduc_plus_scal_v8qi;
  ena[2202] = HAVE_reduc_plus_scal_v4hi;
  ena[2203] = HAVE_reduc_plus_scal_v16qi;
  ena[2204] = HAVE_reduc_plus_scal_v32qi;
  ena[2205] = HAVE_reduc_plus_scal_v64qi;
  ena[2206] = HAVE_reduc_plus_scal_v8hf;
  ena[2207] = HAVE_reduc_plus_scal_v4sf;
  ena[2208] = HAVE_reduc_plus_scal_v2df;
  ena[2209] = HAVE_reduc_plus_scal_v16hf;
  ena[2210] = HAVE_reduc_plus_scal_v8sf;
  ena[2211] = HAVE_reduc_plus_scal_v4df;
  ena[2212] = HAVE_reduc_plus_scal_v32hf;
  ena[2213] = HAVE_reduc_plus_scal_v16sf;
  ena[2214] = HAVE_reduc_plus_scal_v8df;
  ena[2215] = HAVE_reduc_umax_scal_v4qi;
  ena[2216] = HAVE_reduc_umax_scal_v4hi;
  ena[2217] = HAVE_reduc_umax_scal_v32qi;
  ena[2218] = HAVE_reduc_umax_scal_v16hi;
  ena[2219] = HAVE_reduc_umax_scal_v8si;
  ena[2220] = HAVE_reduc_umax_scal_v4di;
  ena[2221] = HAVE_reduc_umax_scal_v64qi;
  ena[2222] = HAVE_reduc_umax_scal_v32hi;
  ena[2223] = HAVE_reduc_umax_scal_v16si;
  ena[2224] = HAVE_reduc_umax_scal_v8di;
  ena[2225] = HAVE_reduc_umin_scal_v4qi;
  ena[2226] = HAVE_reduc_umin_scal_v4hi;
  ena[2227] = HAVE_reduc_umin_scal_v8hi;
  ena[2228] = HAVE_reduc_umin_scal_v32qi;
  ena[2229] = HAVE_reduc_umin_scal_v16hi;
  ena[2230] = HAVE_reduc_umin_scal_v8si;
  ena[2231] = HAVE_reduc_umin_scal_v4di;
  ena[2232] = HAVE_reduc_umin_scal_v64qi;
  ena[2233] = HAVE_reduc_umin_scal_v32hi;
  ena[2234] = HAVE_reduc_umin_scal_v16si;
  ena[2235] = HAVE_reduc_umin_scal_v8di;
  ena[2236] = HAVE_uavgv2qi3_ceil;
  ena[2237] = HAVE_uavgv4qi3_ceil;
  ena[2238] = HAVE_uavgv2hi3_ceil;
  ena[2239] = HAVE_uavgv8qi3_ceil;
  ena[2240] = HAVE_uavgv4hi3_ceil;
  ena[2241] = HAVE_uavgv16qi3_ceil;
  ena[2242] = HAVE_uavgv8hi3_ceil;
  ena[2243] = HAVE_uavgv32qi3_ceil;
  ena[2244] = HAVE_uavgv16hi3_ceil;
  ena[2245] = HAVE_uavgv64qi3_ceil;
  ena[2246] = HAVE_uavgv32hi3_ceil;
  ena[2247] = HAVE_sdot_prodv16qi;
  ena[2248] = HAVE_sdot_prodv8hi;
  ena[2249] = HAVE_sdot_prodv4si;
  ena[2250] = HAVE_sdot_prodv32qi;
  ena[2251] = HAVE_sdot_prodv16hi;
  ena[2252] = HAVE_sdot_prodv32hi;
  ena[2253] = HAVE_udot_prodv16qi;
  ena[2254] = HAVE_udot_prodv32qi;
  ena[2255] = HAVE_usdot_prodv16qi;
  ena[2256] = HAVE_usdot_prodv32qi;
  ena[2257] = HAVE_usdot_prodv64qi;
  ena[2258] = HAVE_usadv8qi;
  ena[2259] = HAVE_usadv16qi;
  ena[2260] = HAVE_usadv32qi;
  ena[2261] = HAVE_usadv64qi;
  ena[2262] = HAVE_smulhrsv2hi3;
  ena[2263] = HAVE_smulhrsv4hi3;
  ena[2264] = HAVE_smulhrsv8hi3;
  ena[2265] = HAVE_smulhrsv16hi3;
  ena[2266] = HAVE_smulhrsv32hi3;
  ena[2267] = HAVE_vec_pack_sfix_trunc_v2df;
  ena[2268] = HAVE_vec_pack_sfix_trunc_v4df;
  ena[2269] = HAVE_vec_pack_sfix_trunc_v8df;
  ena[2270] = HAVE_vec_pack_trunc_qi;
  ena[2271] = HAVE_vec_pack_trunc_hi;
  ena[2272] = HAVE_vec_pack_trunc_si;
  ena[2273] = HAVE_vec_pack_trunc_v2hi;
  ena[2274] = HAVE_vec_pack_trunc_v4hi;
  ena[2275] = HAVE_vec_pack_trunc_v2si;
  ena[2276] = HAVE_vec_pack_trunc_v8hi;
  ena[2277] = HAVE_vec_pack_trunc_v4si;
  ena[2278] = HAVE_vec_pack_trunc_v2di;
  ena[2279] = HAVE_vec_pack_trunc_v16hi;
  ena[2280] = HAVE_vec_pack_trunc_v8si;
  ena[2281] = HAVE_vec_pack_trunc_v4di;
  ena[2282] = HAVE_vec_pack_trunc_v32hi;
  ena[2283] = HAVE_vec_pack_trunc_v16si;
  ena[2284] = HAVE_vec_pack_trunc_v8di;
  ena[2285] = HAVE_vec_pack_trunc_v2df;
  ena[2286] = HAVE_vec_pack_trunc_v4df;
  ena[2287] = HAVE_vec_pack_trunc_v8df;
  ena[2288] = HAVE_vec_pack_ufix_trunc_v2df;
  ena[2289] = HAVE_vec_pack_ufix_trunc_v4df;
  ena[2290] = HAVE_vec_pack_ufix_trunc_v8df;
  ena[2291] = HAVE_vec_pack_sbool_trunc_qi;
  ena[2292] = HAVE_vec_packs_float_v2di;
  ena[2293] = HAVE_vec_packs_float_v4di;
  ena[2294] = HAVE_vec_packs_float_v8di;
  ena[2295] = HAVE_vec_packu_float_v2di;
  ena[2296] = HAVE_vec_packu_float_v4di;
  ena[2297] = HAVE_vec_packu_float_v8di;
  ena[2298] = HAVE_vec_permv16qi;
  ena[2299] = HAVE_vec_permv8hi;
  ena[2300] = HAVE_vec_permv4si;
  ena[2301] = HAVE_vec_permv2di;
  ena[2302] = HAVE_vec_permv32qi;
  ena[2303] = HAVE_vec_permv16hi;
  ena[2304] = HAVE_vec_permv8si;
  ena[2305] = HAVE_vec_permv4di;
  ena[2306] = HAVE_vec_permv64qi;
  ena[2307] = HAVE_vec_permv32hi;
  ena[2308] = HAVE_vec_permv16si;
  ena[2309] = HAVE_vec_permv8di;
  ena[2310] = HAVE_vec_permv8hf;
  ena[2311] = HAVE_vec_permv4sf;
  ena[2312] = HAVE_vec_permv2df;
  ena[2313] = HAVE_vec_permv16hf;
  ena[2314] = HAVE_vec_permv8sf;
  ena[2315] = HAVE_vec_permv4df;
  ena[2316] = HAVE_vec_permv32hf;
  ena[2317] = HAVE_vec_permv16sf;
  ena[2318] = HAVE_vec_permv8df;
  ena[2319] = HAVE_vec_setv4qi;
  ena[2320] = HAVE_vec_setv2hi;
  ena[2321] = HAVE_vec_setv8qi;
  ena[2322] = HAVE_vec_setv4hi;
  ena[2323] = HAVE_vec_setv2si;
  ena[2324] = HAVE_vec_setv16qi;
  ena[2325] = HAVE_vec_setv8hi;
  ena[2326] = HAVE_vec_setv4si;
  ena[2327] = HAVE_vec_setv2di;
  ena[2328] = HAVE_vec_setv32qi;
  ena[2329] = HAVE_vec_setv16hi;
  ena[2330] = HAVE_vec_setv8si;
  ena[2331] = HAVE_vec_setv4di;
  ena[2332] = HAVE_vec_setv64qi;
  ena[2333] = HAVE_vec_setv32hi;
  ena[2334] = HAVE_vec_setv16si;
  ena[2335] = HAVE_vec_setv8di;
  ena[2336] = HAVE_vec_setv2sf;
  ena[2337] = HAVE_vec_setv8bf;
  ena[2338] = HAVE_vec_setv8hf;
  ena[2339] = HAVE_vec_setv4sf;
  ena[2340] = HAVE_vec_setv2df;
  ena[2341] = HAVE_vec_setv16bf;
  ena[2342] = HAVE_vec_setv16hf;
  ena[2343] = HAVE_vec_setv8sf;
  ena[2344] = HAVE_vec_setv4df;
  ena[2345] = HAVE_vec_setv32bf;
  ena[2346] = HAVE_vec_setv32hf;
  ena[2347] = HAVE_vec_setv16sf;
  ena[2348] = HAVE_vec_setv8df;
  ena[2349] = HAVE_vec_shl_v16qi;
  ena[2350] = HAVE_vec_shl_v8hi;
  ena[2351] = HAVE_vec_shl_v4si;
  ena[2352] = HAVE_vec_shl_v2di;
  ena[2353] = HAVE_vec_shl_v4sf;
  ena[2354] = HAVE_vec_shl_v2df;
  ena[2355] = HAVE_vec_shr_v16qi;
  ena[2356] = HAVE_vec_shr_v8hi;
  ena[2357] = HAVE_vec_shr_v4si;
  ena[2358] = HAVE_vec_shr_v2di;
  ena[2359] = HAVE_vec_shr_v4sf;
  ena[2360] = HAVE_vec_shr_v2df;
  ena[2361] = HAVE_vec_unpack_sfix_trunc_hi_v4sf;
  ena[2362] = HAVE_vec_unpack_sfix_trunc_hi_v8sf;
  ena[2363] = HAVE_vec_unpack_sfix_trunc_hi_v16sf;
  ena[2364] = HAVE_vec_unpack_sfix_trunc_lo_v4sf;
  ena[2365] = HAVE_vec_unpack_sfix_trunc_lo_v8sf;
  ena[2366] = HAVE_vec_unpack_sfix_trunc_lo_v16sf;
  ena[2367] = HAVE_vec_unpack_ufix_trunc_hi_v4sf;
  ena[2368] = HAVE_vec_unpack_ufix_trunc_hi_v8sf;
  ena[2369] = HAVE_vec_unpack_ufix_trunc_hi_v16sf;
  ena[2370] = HAVE_vec_unpack_ufix_trunc_lo_v4sf;
  ena[2371] = HAVE_vec_unpack_ufix_trunc_lo_v8sf;
  ena[2372] = HAVE_vec_unpack_ufix_trunc_lo_v16sf;
  ena[2373] = HAVE_vec_unpacks_float_hi_v8hi;
  ena[2374] = HAVE_vec_unpacks_float_hi_v4si;
  ena[2375] = HAVE_vec_unpacks_float_hi_v16hi;
  ena[2376] = HAVE_vec_unpacks_float_hi_v8si;
  ena[2377] = HAVE_vec_unpacks_float_hi_v32hi;
  ena[2378] = HAVE_vec_unpacks_float_hi_v16si;
  ena[2379] = HAVE_vec_unpacks_float_lo_v8hi;
  ena[2380] = HAVE_vec_unpacks_float_lo_v4si;
  ena[2381] = HAVE_vec_unpacks_float_lo_v16hi;
  ena[2382] = HAVE_vec_unpacks_float_lo_v8si;
  ena[2383] = HAVE_vec_unpacks_float_lo_v32hi;
  ena[2384] = HAVE_vec_unpacks_float_lo_v16si;
  ena[2385] = HAVE_vec_unpacks_hi_hi;
  ena[2386] = HAVE_vec_unpacks_hi_si;
  ena[2387] = HAVE_vec_unpacks_hi_di;
  ena[2388] = HAVE_vec_unpacks_hi_v4qi;
  ena[2389] = HAVE_vec_unpacks_hi_v8qi;
  ena[2390] = HAVE_vec_unpacks_hi_v4hi;
  ena[2391] = HAVE_vec_unpacks_hi_v16qi;
  ena[2392] = HAVE_vec_unpacks_hi_v8hi;
  ena[2393] = HAVE_vec_unpacks_hi_v4si;
  ena[2394] = HAVE_vec_unpacks_hi_v32qi;
  ena[2395] = HAVE_vec_unpacks_hi_v16hi;
  ena[2396] = HAVE_vec_unpacks_hi_v8si;
  ena[2397] = HAVE_vec_unpacks_hi_v64qi;
  ena[2398] = HAVE_vec_unpacks_hi_v32hi;
  ena[2399] = HAVE_vec_unpacks_hi_v16si;
  ena[2400] = HAVE_vec_unpacks_hi_v4sf;
  ena[2401] = HAVE_vec_unpacks_hi_v8sf;
  ena[2402] = HAVE_vec_unpacks_hi_v16sf;
  ena[2403] = HAVE_vec_unpacks_lo_hi;
  ena[2404] = HAVE_vec_unpacks_lo_si;
  ena[2405] = HAVE_vec_unpacks_lo_di;
  ena[2406] = HAVE_vec_unpacks_lo_v4qi;
  ena[2407] = HAVE_vec_unpacks_lo_v8qi;
  ena[2408] = HAVE_vec_unpacks_lo_v4hi;
  ena[2409] = HAVE_vec_unpacks_lo_v16qi;
  ena[2410] = HAVE_vec_unpacks_lo_v8hi;
  ena[2411] = HAVE_vec_unpacks_lo_v4si;
  ena[2412] = HAVE_vec_unpacks_lo_v32qi;
  ena[2413] = HAVE_vec_unpacks_lo_v16hi;
  ena[2414] = HAVE_vec_unpacks_lo_v8si;
  ena[2415] = HAVE_vec_unpacks_lo_v64qi;
  ena[2416] = HAVE_vec_unpacks_lo_v32hi;
  ena[2417] = HAVE_vec_unpacks_lo_v16si;
  ena[2418] = HAVE_vec_unpacks_lo_v4sf;
  ena[2419] = HAVE_vec_unpacks_lo_v8sf;
  ena[2420] = HAVE_vec_unpacks_lo_v16sf;
  ena[2421] = HAVE_vec_unpacks_sbool_hi_qi;
  ena[2422] = HAVE_vec_unpacks_sbool_lo_qi;
  ena[2423] = HAVE_vec_unpacku_float_hi_v8hi;
  ena[2424] = HAVE_vec_unpacku_float_hi_v4si;
  ena[2425] = HAVE_vec_unpacku_float_hi_v16hi;
  ena[2426] = HAVE_vec_unpacku_float_hi_v8si;
  ena[2427] = HAVE_vec_unpacku_float_hi_v32hi;
  ena[2428] = HAVE_vec_unpacku_float_hi_v16si;
  ena[2429] = HAVE_vec_unpacku_float_lo_v8hi;
  ena[2430] = HAVE_vec_unpacku_float_lo_v4si;
  ena[2431] = HAVE_vec_unpacku_float_lo_v16hi;
  ena[2432] = HAVE_vec_unpacku_float_lo_v8si;
  ena[2433] = HAVE_vec_unpacku_float_lo_v32hi;
  ena[2434] = HAVE_vec_unpacku_float_lo_v16si;
  ena[2435] = HAVE_vec_unpacku_hi_v4qi;
  ena[2436] = HAVE_vec_unpacku_hi_v8qi;
  ena[2437] = HAVE_vec_unpacku_hi_v4hi;
  ena[2438] = HAVE_vec_unpacku_hi_v16qi;
  ena[2439] = HAVE_vec_unpacku_hi_v8hi;
  ena[2440] = HAVE_vec_unpacku_hi_v4si;
  ena[2441] = HAVE_vec_unpacku_hi_v32qi;
  ena[2442] = HAVE_vec_unpacku_hi_v16hi;
  ena[2443] = HAVE_vec_unpacku_hi_v8si;
  ena[2444] = HAVE_vec_unpacku_hi_v64qi;
  ena[2445] = HAVE_vec_unpacku_hi_v32hi;
  ena[2446] = HAVE_vec_unpacku_hi_v16si;
  ena[2447] = HAVE_vec_unpacku_lo_v4qi;
  ena[2448] = HAVE_vec_unpacku_lo_v8qi;
  ena[2449] = HAVE_vec_unpacku_lo_v4hi;
  ena[2450] = HAVE_vec_unpacku_lo_v16qi;
  ena[2451] = HAVE_vec_unpacku_lo_v8hi;
  ena[2452] = HAVE_vec_unpacku_lo_v4si;
  ena[2453] = HAVE_vec_unpacku_lo_v32qi;
  ena[2454] = HAVE_vec_unpacku_lo_v16hi;
  ena[2455] = HAVE_vec_unpacku_lo_v8si;
  ena[2456] = HAVE_vec_unpacku_lo_v64qi;
  ena[2457] = HAVE_vec_unpacku_lo_v32hi;
  ena[2458] = HAVE_vec_unpacku_lo_v16si;
  ena[2459] = HAVE_vec_widen_smult_even_v4si;
  ena[2460] = HAVE_vec_widen_smult_even_v8si;
  ena[2461] = HAVE_vec_widen_smult_even_v16si;
  ena[2462] = HAVE_vec_widen_smult_hi_v16qi;
  ena[2463] = HAVE_vec_widen_smult_hi_v8hi;
  ena[2464] = HAVE_vec_widen_smult_hi_v4si;
  ena[2465] = HAVE_vec_widen_smult_hi_v32qi;
  ena[2466] = HAVE_vec_widen_smult_hi_v16hi;
  ena[2467] = HAVE_vec_widen_smult_hi_v8si;
  ena[2468] = HAVE_vec_widen_smult_lo_v16qi;
  ena[2469] = HAVE_vec_widen_smult_lo_v8hi;
  ena[2470] = HAVE_vec_widen_smult_lo_v4si;
  ena[2471] = HAVE_vec_widen_smult_lo_v32qi;
  ena[2472] = HAVE_vec_widen_smult_lo_v16hi;
  ena[2473] = HAVE_vec_widen_smult_lo_v8si;
  ena[2474] = HAVE_vec_widen_smult_odd_v4si;
  ena[2475] = HAVE_vec_widen_smult_odd_v8si;
  ena[2476] = HAVE_vec_widen_smult_odd_v16si;
  ena[2477] = HAVE_vec_widen_umult_even_v4si;
  ena[2478] = HAVE_vec_widen_umult_even_v8si;
  ena[2479] = HAVE_vec_widen_umult_even_v16si;
  ena[2480] = HAVE_vec_widen_umult_hi_v16qi;
  ena[2481] = HAVE_vec_widen_umult_hi_v8hi;
  ena[2482] = HAVE_vec_widen_umult_hi_v4si;
  ena[2483] = HAVE_vec_widen_umult_hi_v32qi;
  ena[2484] = HAVE_vec_widen_umult_hi_v16hi;
  ena[2485] = HAVE_vec_widen_umult_hi_v8si;
  ena[2486] = HAVE_vec_widen_umult_lo_v16qi;
  ena[2487] = HAVE_vec_widen_umult_lo_v8hi;
  ena[2488] = HAVE_vec_widen_umult_lo_v4si;
  ena[2489] = HAVE_vec_widen_umult_lo_v32qi;
  ena[2490] = HAVE_vec_widen_umult_lo_v16hi;
  ena[2491] = HAVE_vec_widen_umult_lo_v8si;
  ena[2492] = HAVE_vec_widen_umult_odd_v4si;
  ena[2493] = HAVE_vec_widen_umult_odd_v8si;
  ena[2494] = HAVE_vec_widen_umult_odd_v16si;
  ena[2495] = HAVE_vec_addsubv2sf3;
  ena[2496] = HAVE_vec_addsubv4sf3;
  ena[2497] = HAVE_vec_addsubv2df3;
  ena[2498] = HAVE_vec_addsubv8sf3;
  ena[2499] = HAVE_vec_addsubv4df3;
  ena[2500] = HAVE_vec_fmaddsubv4sf4;
  ena[2501] = HAVE_vec_fmaddsubv2df4;
  ena[2502] = HAVE_vec_fmaddsubv8sf4;
  ena[2503] = HAVE_vec_fmaddsubv4df4;
  ena[2504] = HAVE_vec_fmaddsubv16sf4;
  ena[2505] = HAVE_vec_fmaddsubv8df4;
  ena[2506] = HAVE_vec_fmsubaddv4sf4;
  ena[2507] = HAVE_vec_fmsubaddv2df4;
  ena[2508] = HAVE_vec_fmsubaddv8sf4;
  ena[2509] = HAVE_vec_fmsubaddv4df4;
  ena[2510] = HAVE_vec_fmsubaddv16sf4;
  ena[2511] = HAVE_vec_fmsubaddv8df4;
  ena[2512] = HAVE_atomic_addqi;
  ena[2513] = HAVE_atomic_addhi;
  ena[2514] = HAVE_atomic_addsi;
  ena[2515] = HAVE_atomic_adddi;
  ena[2516] = HAVE_atomic_and_fetchqi;
  ena[2517] = HAVE_atomic_and_fetchhi;
  ena[2518] = HAVE_atomic_and_fetchsi;
  ena[2519] = HAVE_atomic_and_fetchdi;
  ena[2520] = HAVE_atomic_and_fetchti;
  ena[2521] = HAVE_atomic_andqi;
  ena[2522] = HAVE_atomic_andhi;
  ena[2523] = HAVE_atomic_andsi;
  ena[2524] = HAVE_atomic_anddi;
  ena[2525] = HAVE_atomic_bit_test_and_sethi;
  ena[2526] = HAVE_atomic_bit_test_and_setsi;
  ena[2527] = HAVE_atomic_bit_test_and_setdi;
  ena[2528] = HAVE_atomic_bit_test_and_complementhi;
  ena[2529] = HAVE_atomic_bit_test_and_complementsi;
  ena[2530] = HAVE_atomic_bit_test_and_complementdi;
  ena[2531] = HAVE_atomic_bit_test_and_resethi;
  ena[2532] = HAVE_atomic_bit_test_and_resetsi;
  ena[2533] = HAVE_atomic_bit_test_and_resetdi;
  ena[2534] = HAVE_atomic_compare_and_swapqi;
  ena[2535] = HAVE_atomic_compare_and_swaphi;
  ena[2536] = HAVE_atomic_compare_and_swapsi;
  ena[2537] = HAVE_atomic_compare_and_swapdi;
  ena[2538] = HAVE_atomic_compare_and_swapti;
  ena[2539] = HAVE_atomic_exchangeqi;
  ena[2540] = HAVE_atomic_exchangehi;
  ena[2541] = HAVE_atomic_exchangesi;
  ena[2542] = HAVE_atomic_exchangedi;
  ena[2543] = HAVE_atomic_fetch_addqi;
  ena[2544] = HAVE_atomic_fetch_addhi;
  ena[2545] = HAVE_atomic_fetch_addsi;
  ena[2546] = HAVE_atomic_fetch_adddi;
  ena[2547] = HAVE_atomic_fetch_andqi;
  ena[2548] = HAVE_atomic_fetch_andhi;
  ena[2549] = HAVE_atomic_fetch_andsi;
  ena[2550] = HAVE_atomic_fetch_anddi;
  ena[2551] = HAVE_atomic_fetch_andti;
  ena[2552] = HAVE_atomic_fetch_nandqi;
  ena[2553] = HAVE_atomic_fetch_nandhi;
  ena[2554] = HAVE_atomic_fetch_nandsi;
  ena[2555] = HAVE_atomic_fetch_nanddi;
  ena[2556] = HAVE_atomic_fetch_nandti;
  ena[2557] = HAVE_atomic_fetch_orqi;
  ena[2558] = HAVE_atomic_fetch_orhi;
  ena[2559] = HAVE_atomic_fetch_orsi;
  ena[2560] = HAVE_atomic_fetch_ordi;
  ena[2561] = HAVE_atomic_fetch_orti;
  ena[2562] = HAVE_atomic_fetch_xorqi;
  ena[2563] = HAVE_atomic_fetch_xorhi;
  ena[2564] = HAVE_atomic_fetch_xorsi;
  ena[2565] = HAVE_atomic_fetch_xordi;
  ena[2566] = HAVE_atomic_fetch_xorti;
  ena[2567] = HAVE_atomic_loadqi;
  ena[2568] = HAVE_atomic_loadhi;
  ena[2569] = HAVE_atomic_loadsi;
  ena[2570] = HAVE_atomic_loaddi;
  ena[2571] = HAVE_atomic_nand_fetchqi;
  ena[2572] = HAVE_atomic_nand_fetchhi;
  ena[2573] = HAVE_atomic_nand_fetchsi;
  ena[2574] = HAVE_atomic_nand_fetchdi;
  ena[2575] = HAVE_atomic_nand_fetchti;
  ena[2576] = HAVE_atomic_or_fetchqi;
  ena[2577] = HAVE_atomic_or_fetchhi;
  ena[2578] = HAVE_atomic_or_fetchsi;
  ena[2579] = HAVE_atomic_or_fetchdi;
  ena[2580] = HAVE_atomic_or_fetchti;
  ena[2581] = HAVE_atomic_orqi;
  ena[2582] = HAVE_atomic_orhi;
  ena[2583] = HAVE_atomic_orsi;
  ena[2584] = HAVE_atomic_ordi;
  ena[2585] = HAVE_atomic_storeqi;
  ena[2586] = HAVE_atomic_storehi;
  ena[2587] = HAVE_atomic_storesi;
  ena[2588] = HAVE_atomic_storedi;
  ena[2589] = HAVE_atomic_subqi;
  ena[2590] = HAVE_atomic_subhi;
  ena[2591] = HAVE_atomic_subsi;
  ena[2592] = HAVE_atomic_subdi;
  ena[2593] = HAVE_atomic_xor_fetchqi;
  ena[2594] = HAVE_atomic_xor_fetchhi;
  ena[2595] = HAVE_atomic_xor_fetchsi;
  ena[2596] = HAVE_atomic_xor_fetchdi;
  ena[2597] = HAVE_atomic_xor_fetchti;
  ena[2598] = HAVE_atomic_xorqi;
  ena[2599] = HAVE_atomic_xorhi;
  ena[2600] = HAVE_atomic_xorsi;
  ena[2601] = HAVE_atomic_xordi;
  ena[2602] = HAVE_atomic_add_fetch_cmp_0qi;
  ena[2603] = HAVE_atomic_add_fetch_cmp_0hi;
  ena[2604] = HAVE_atomic_add_fetch_cmp_0si;
  ena[2605] = HAVE_atomic_add_fetch_cmp_0di;
  ena[2606] = HAVE_atomic_sub_fetch_cmp_0qi;
  ena[2607] = HAVE_atomic_sub_fetch_cmp_0hi;
  ena[2608] = HAVE_atomic_sub_fetch_cmp_0si;
  ena[2609] = HAVE_atomic_sub_fetch_cmp_0di;
  ena[2610] = HAVE_atomic_and_fetch_cmp_0qi;
  ena[2611] = HAVE_atomic_and_fetch_cmp_0hi;
  ena[2612] = HAVE_atomic_and_fetch_cmp_0si;
  ena[2613] = HAVE_atomic_and_fetch_cmp_0di;
  ena[2614] = HAVE_atomic_or_fetch_cmp_0qi;
  ena[2615] = HAVE_atomic_or_fetch_cmp_0hi;
  ena[2616] = HAVE_atomic_or_fetch_cmp_0si;
  ena[2617] = HAVE_atomic_or_fetch_cmp_0di;
  ena[2618] = HAVE_atomic_xor_fetch_cmp_0qi;
  ena[2619] = HAVE_atomic_xor_fetch_cmp_0hi;
  ena[2620] = HAVE_atomic_xor_fetch_cmp_0si;
  ena[2621] = HAVE_atomic_xor_fetch_cmp_0di;
  ena[2622] = HAVE_get_thread_pointersi;
  ena[2623] = HAVE_get_thread_pointerdi;
  ena[2624] = HAVE_vec_duplicatev16qi;
  ena[2625] = HAVE_vec_duplicatev8hi;
  ena[2626] = HAVE_vec_duplicatev4si;
  ena[2627] = HAVE_vec_duplicatev2di;
  ena[2628] = HAVE_vec_duplicatev32qi;
  ena[2629] = HAVE_vec_duplicatev16hi;
  ena[2630] = HAVE_vec_duplicatev8si;
  ena[2631] = HAVE_vec_duplicatev4di;
  ena[2632] = HAVE_vec_duplicatev64qi;
  ena[2633] = HAVE_vec_duplicatev32hi;
  ena[2634] = HAVE_vec_duplicatev16si;
  ena[2635] = HAVE_vec_duplicatev8di;
}

/* Returns TRUE if the target supports any of the partial vector
   optabs: while_ult_optab, len_load_optab or len_store_optab,
   for any mode.  */
bool
partial_vectors_supported_p (void)
{
	return false;
}
static int
lookup_handler (unsigned scode)
{
  int l = 0, h = ARRAY_SIZE (pats), m;
  while (h > l)
    {
      m = (h + l) / 2;
      if (scode == pats[m].scode)
        return m;
      else if (scode < pats[m].scode)
        h = m;
      else
        l = m + 1;
    }
  return -1;
}

enum insn_code
raw_optab_handler (unsigned scode)
{
  int i = lookup_handler (scode);
  return (i >= 0 && this_fn_optabs->pat_enable[i]
          ? pats[i].icode : CODE_FOR_nothing);
}

bool
swap_optab_enable (optab op, machine_mode m, bool set)
{
  unsigned scode = (op << 16) | m;
  int i = lookup_handler (scode);
  if (i >= 0)
    {
      bool ret = this_fn_optabs->pat_enable[i];
      this_fn_optabs->pat_enable[i] = set;
      return ret;
    }
  else
    {
      gcc_assert (!set);
      return false;
    }
}

const struct convert_optab_libcall_d convlib_def[NUM_CONVLIB_OPTABS] = {
  { "extend", gen_extend_conv_libfunc },
  { "trunc", gen_trunc_conv_libfunc },
  { NULL, NULL },
  { "fix", gen_fp_to_int_conv_libfunc },
  { "fixuns", gen_fp_to_int_conv_libfunc },
  { "float", gen_int_to_fp_conv_libfunc },
  { NULL, gen_ufloat_conv_libfunc },
  { "lrint", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lround", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lfloor", gen_int_to_fp_nondecimal_conv_libfunc },
  { "lceil", gen_int_to_fp_nondecimal_conv_libfunc },
  { "fract", gen_fract_conv_libfunc },
  { "fractuns", gen_fractuns_conv_libfunc },
  { "satfract", gen_satfract_conv_libfunc },
  { "satfractuns", gen_satfractuns_conv_libfunc },
};

const struct optab_libcall_d normlib_def[NUM_NORMLIB_OPTABS] = {
  { '3', "add", gen_int_fp_fixed_libfunc },
  { '3', "add", gen_intv_fp_libfunc },
  { '3', "ssadd", gen_signed_fixed_libfunc },
  { '3', "usadd", gen_unsigned_fixed_libfunc },
  { '3', "sub", gen_int_fp_fixed_libfunc },
  { '3', "sub", gen_intv_fp_libfunc },
  { '3', "sssub", gen_signed_fixed_libfunc },
  { '3', "ussub", gen_unsigned_fixed_libfunc },
  { '3', "mul", gen_int_fp_fixed_libfunc },
  { '3', "mul", gen_intv_fp_libfunc },
  { '3', "ssmul", gen_signed_fixed_libfunc },
  { '3', "usmul", gen_unsigned_fixed_libfunc },
  { '3', "div", gen_int_fp_signed_fixed_libfunc },
  { '3', "divv", gen_int_libfunc },
  { '3', "ssdiv", gen_signed_fixed_libfunc },
  { '3', "udiv", gen_int_unsigned_fixed_libfunc },
  { '3', "usdiv", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "mod", gen_int_libfunc },
  { '3', "umod", gen_int_libfunc },
  { '2', "ftrunc", gen_fp_libfunc },
  { '3', "and", gen_int_libfunc },
  { '3', "ior", gen_int_libfunc },
  { '3', "xor", gen_int_libfunc },
  { '3', "ashl", gen_int_fixed_libfunc },
  { '3', "ssashl", gen_signed_fixed_libfunc },
  { '3', "usashl", gen_unsigned_fixed_libfunc },
  { '3', "ashr", gen_int_signed_fixed_libfunc },
  { '3', "lshr", gen_int_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '3', "min", gen_int_fp_libfunc },
  { '3', "max", gen_int_fp_libfunc },
  { '3', "umin", gen_int_libfunc },
  { '3', "umax", gen_int_libfunc },
  { '2', "neg", gen_int_fp_fixed_libfunc },
  { '2', "neg", gen_intv_fp_libfunc },
  { '2', "ssneg", gen_signed_fixed_libfunc },
  { '2', "usneg", gen_unsigned_fixed_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '2', "one_cmpl", gen_int_libfunc },
  { '\0', NULL, NULL },
  { '2', "ffs", gen_int_libfunc },
  { '2', "clz", gen_int_libfunc },
  { '2', "ctz", gen_int_libfunc },
  { '2', "clrsb", gen_int_libfunc },
  { '2', "popcount", gen_int_libfunc },
  { '2', "parity", gen_int_libfunc },
  { '2', "cmp", gen_int_fp_fixed_libfunc },
  { '2', "ucmp", gen_int_libfunc },
  { '2', "eq", gen_fp_libfunc },
  { '2', "ne", gen_fp_libfunc },
  { '2', "gt", gen_fp_libfunc },
  { '2', "ge", gen_fp_libfunc },
  { '2', "lt", gen_fp_libfunc },
  { '2', "le", gen_fp_libfunc },
  { '2', "unord", gen_fp_libfunc },
  { '2', "powi", gen_fp_libfunc },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
  { '\0', NULL, NULL },
};

enum rtx_code const optab_to_code_[NUM_OPTABS] = {
  UNKNOWN,
  SIGN_EXTEND,
  TRUNCATE,
  ZERO_EXTEND,
  FIX,
  UNSIGNED_FIX,
  FLOAT,
  UNSIGNED_FLOAT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FRACT_CONVERT,
  UNSIGNED_FRACT_CONVERT,
  SAT_FRACT,
  UNSIGNED_SAT_FRACT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  PLUS,
  PLUS,
  SS_PLUS,
  US_PLUS,
  MINUS,
  MINUS,
  SS_MINUS,
  US_MINUS,
  MULT,
  MULT,
  SS_MULT,
  US_MULT,
  DIV,
  DIV,
  SS_DIV,
  UDIV,
  US_DIV,
  UNKNOWN,
  UNKNOWN,
  MOD,
  UMOD,
  UNKNOWN,
  AND,
  IOR,
  XOR,
  ASHIFT,
  SS_ASHIFT,
  US_ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  ASHIFT,
  ASHIFTRT,
  LSHIFTRT,
  ROTATE,
  ROTATERT,
  SMIN,
  SMAX,
  UMIN,
  UMAX,
  NEG,
  NEG,
  SS_NEG,
  US_NEG,
  ABS,
  ABS,
  NOT,
  BSWAP,
  FFS,
  CLZ,
  CTZ,
  CLRSB,
  POPCOUNT,
  PARITY,
  UNKNOWN,
  UNKNOWN,
  EQ,
  NE,
  GT,
  GE,
  LT,
  LE,
  UNORDERED,
  UNKNOWN,
  SQRT,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  SET,
  STRICT_LOW_PART,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  COMPARE,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  FMA,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
  VEC_DUPLICATE,
  VEC_SERIES,
  UNKNOWN,
  UNKNOWN,
  UNKNOWN,
};

const optab code_to_optab_[NUM_RTX_CODE] = {
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  mov_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  movstrict_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  cbranch_optab,
  add_optab,
  sub_optab,
  neg_optab,
  smul_optab,
  ssmul_optab,
  usmul_optab,
  unknown_optab,
  unknown_optab,
  sdiv_optab,
  ssdiv_optab,
  usdiv_optab,
  smod_optab,
  udiv_optab,
  umod_optab,
  and_optab,
  ior_optab,
  xor_optab,
  one_cmpl_optab,
  ashl_optab,
  rotl_optab,
  ashr_optab,
  lshr_optab,
  rotr_optab,
  smin_optab,
  smax_optab,
  umin_optab,
  umax_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  ne_optab,
  eq_optab,
  ge_optab,
  gt_optab,
  le_optab,
  lt_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unord_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  abs_optab,
  sqrt_optab,
  bswap_optab,
  ffs_optab,
  clrsb_optab,
  clz_optab,
  ctz_optab,
  popcount_optab,
  parity_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  vec_duplicate_optab,
  vec_series_optab,
  ssadd_optab,
  usadd_optab,
  sssub_optab,
  ssneg_optab,
  usneg_optab,
  unknown_optab,
  ssashl_optab,
  usashl_optab,
  ussub_optab,
  unknown_optab,
  unknown_optab,
  fma_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
  unknown_optab,
};

