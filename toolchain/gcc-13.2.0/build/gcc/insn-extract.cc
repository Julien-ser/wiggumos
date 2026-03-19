/* Generated automatically by the program `genextract'
   from the machine description file `md'.  */

#define IN_TARGET_CODE 1
#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "diagnostic-core.h"

/* This variable is used as the "location" of any missing operand
   whose numbers are skipped by a given pattern.  */
static rtx junk ATTRIBUTE_UNUSED;

void
insn_extract (rtx_insn *insn)
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED; /* only for peepholes */

  if (flag_checking)
    {
      memset (ro, 0xab, sizeof (*ro) * MAX_RECOG_OPERANDS);
      memset (ro_loc, 0xab, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
    }

  switch (INSN_CODE (insn))
    {
    default:
      /* Control reaches here if insn_extract has been called with an
         unrecognizable insn (code -1), or an insn whose INSN_CODE
         corresponds to a DEFINE_EXPAND in the machine description;
         either way, a bug.  */
      if (INSN_CODE (insn) < 0)
        fatal_insn ("unrecognizable insn:", insn);
      else
        fatal_insn ("insn with invalid code number:", insn);

    case 9164:  /* atomic_xor_fetch_cmp_0di_1 */
    case 9163:  /* atomic_or_fetch_cmp_0di_1 */
    case 9162:  /* atomic_and_fetch_cmp_0di_1 */
    case 9161:  /* atomic_xor_fetch_cmp_0si_1 */
    case 9160:  /* atomic_or_fetch_cmp_0si_1 */
    case 9159:  /* atomic_and_fetch_cmp_0si_1 */
    case 9158:  /* atomic_xor_fetch_cmp_0hi_1 */
    case 9157:  /* atomic_or_fetch_cmp_0hi_1 */
    case 9156:  /* atomic_and_fetch_cmp_0hi_1 */
    case 9155:  /* atomic_xor_fetch_cmp_0qi_1 */
    case 9154:  /* atomic_or_fetch_cmp_0qi_1 */
    case 9153:  /* atomic_and_fetch_cmp_0qi_1 */
    case 9152:  /* atomic_sub_fetch_cmp_0di_1 */
    case 9151:  /* atomic_sub_fetch_cmp_0si_1 */
    case 9150:  /* atomic_sub_fetch_cmp_0hi_1 */
    case 9149:  /* atomic_sub_fetch_cmp_0qi_1 */
    case 9148:  /* atomic_add_fetch_cmp_0di_1 */
    case 9147:  /* atomic_add_fetch_cmp_0si_1 */
    case 9146:  /* atomic_add_fetch_cmp_0hi_1 */
    case 9145:  /* atomic_add_fetch_cmp_0qi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 9141:  /* atomic_bit_test_and_complementdi_1 */
    case 9140:  /* atomic_bit_test_and_complementsi_1 */
    case 9139:  /* atomic_bit_test_and_complementhi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 2);
      recog_data.dup_num[2] = 1;
      break;

    case 9144:  /* atomic_bit_test_and_resetdi_1 */
    case 9143:  /* atomic_bit_test_and_resetsi_1 */
    case 9142:  /* atomic_bit_test_and_resethi_1 */
    case 9138:  /* atomic_bit_test_and_setdi_1 */
    case 9137:  /* atomic_bit_test_and_setsi_1 */
    case 9136:  /* atomic_bit_test_and_sethi_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 2));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 9135:  /* atomic_xordi */
    case 9134:  /* atomic_ordi */
    case 9133:  /* atomic_anddi */
    case 9132:  /* atomic_xorsi */
    case 9131:  /* atomic_orsi */
    case 9130:  /* atomic_andsi */
    case 9129:  /* atomic_xorhi */
    case 9128:  /* atomic_orhi */
    case 9127:  /* atomic_andhi */
    case 9126:  /* atomic_xorqi */
    case 9125:  /* atomic_orqi */
    case 9124:  /* atomic_andqi */
    case 9123:  /* atomic_subdi */
    case 9122:  /* atomic_subsi */
    case 9121:  /* atomic_subhi */
    case 9120:  /* atomic_subqi */
    case 9119:  /* atomic_adddi */
    case 9118:  /* atomic_addsi */
    case 9117:  /* atomic_addhi */
    case 9116:  /* atomic_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 9115:  /* rao_aadddi */
    case 9114:  /* rao_axordi */
    case 9113:  /* rao_aordi */
    case 9112:  /* rao_aanddi */
    case 9111:  /* rao_aaddsi */
    case 9110:  /* rao_axorsi */
    case 9109:  /* rao_aorsi */
    case 9108:  /* rao_aandsi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 9107:  /* atomic_exchangedi */
    case 9106:  /* atomic_exchangesi */
    case 9105:  /* atomic_exchangehi */
    case 9104:  /* atomic_exchangeqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 9103:  /* *atomic_fetch_add_cmpdi */
    case 9102:  /* *atomic_fetch_add_cmpsi */
    case 9101:  /* *atomic_fetch_add_cmphi */
    case 9100:  /* *atomic_fetch_add_cmpqi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      break;

    case 9099:  /* atomic_fetch_adddi */
    case 9098:  /* atomic_fetch_addsi */
    case 9097:  /* atomic_fetch_addhi */
    case 9096:  /* atomic_fetch_addqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      break;

    case 9166:  /* cmpccxadd_di */
    case 9165:  /* cmpccxadd_si */
    case 9095:  /* atomic_compare_and_swapdi_1 */
    case 9094:  /* atomic_compare_and_swapsi_1 */
    case 9093:  /* atomic_compare_and_swaphi_1 */
    case 9092:  /* atomic_compare_and_swapqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 9091:  /* atomic_compare_and_swapti_doubleword */
    case 9090:  /* atomic_compare_and_swapdi_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 9079:  /* mfence_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 9051:  /* *aesencwide256klu8 */
    case 9050:  /* *aesencwide128klu8 */
    case 9049:  /* *aesdecwide256klu8 */
    case 9048:  /* *aesdecwide128klu8 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[1] = *(ro_loc[1] = &PATTERN (insn));
      break;

    case 9047:  /* aesenc256klu8 */
    case 9046:  /* aesenc128klu8 */
    case 9045:  /* aesdec256klu8 */
    case 9044:  /* aesdec128klu8 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 1;
      break;

    case 9043:  /* *encodekey256u32 */
    case 9042:  /* *encodekey128u32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &PATTERN (insn));
      break;

    case 9041:  /* loadiwkey */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 3));
      break;

    case 9024:  /* avx512f_cvtne2ps2bf16_v8bf_mask */
    case 9022:  /* avx512f_cvtne2ps2bf16_v16bf_mask */
    case 9020:  /* avx512f_cvtne2ps2bf16_v32bf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 9023:  /* avx512f_cvtne2ps2bf16_v8bf */
    case 9021:  /* avx512f_cvtne2ps2bf16_v16bf */
    case 9019:  /* avx512f_cvtne2ps2bf16_v32bf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 8833:  /* *restore_multiple_leave_returndi */
    case 8832:  /* *restore_multiple_leave_returnsi */
    case 8831:  /* *restore_multiple_and_returndi */
    case 8830:  /* *restore_multiple_and_returnsi */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 8829:  /* *restore_multipledi */
    case 8828:  /* *restore_multiplesi */
    case 8827:  /* *save_multipledi */
    case 8826:  /* *save_multiplesi */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 8678:  /* avx512dq_vmfpclassv2df_mask */
    case 8676:  /* avx512dq_vmfpclassv4sf_mask */
    case 8674:  /* avx512dq_vmfpclassv8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8558:  /* *avx512f_scatterdiv2df */
    case 8557:  /* *avx512f_scatterdiv2df */
    case 8556:  /* *avx512f_scatterdiv2di */
    case 8555:  /* *avx512f_scatterdiv2di */
    case 8554:  /* *avx512f_scatterdiv4sf */
    case 8553:  /* *avx512f_scatterdiv4sf */
    case 8552:  /* *avx512f_scatterdiv4si */
    case 8551:  /* *avx512f_scatterdiv4si */
    case 8550:  /* *avx512f_scatterdiv4df */
    case 8549:  /* *avx512f_scatterdiv4df */
    case 8548:  /* *avx512f_scatterdiv4di */
    case 8547:  /* *avx512f_scatterdiv4di */
    case 8546:  /* *avx512f_scatterdiv8sf */
    case 8545:  /* *avx512f_scatterdiv8sf */
    case 8544:  /* *avx512f_scatterdiv8si */
    case 8543:  /* *avx512f_scatterdiv8si */
    case 8542:  /* *avx512f_scatterdiv8df */
    case 8541:  /* *avx512f_scatterdiv8df */
    case 8540:  /* *avx512f_scatterdiv8di */
    case 8539:  /* *avx512f_scatterdiv8di */
    case 8538:  /* *avx512f_scatterdiv16sf */
    case 8537:  /* *avx512f_scatterdiv16sf */
    case 8536:  /* *avx512f_scatterdiv16si */
    case 8535:  /* *avx512f_scatterdiv16si */
    case 8534:  /* *avx512f_scattersiv2df */
    case 8533:  /* *avx512f_scattersiv2df */
    case 8532:  /* *avx512f_scattersiv2di */
    case 8531:  /* *avx512f_scattersiv2di */
    case 8530:  /* *avx512f_scattersiv4sf */
    case 8529:  /* *avx512f_scattersiv4sf */
    case 8528:  /* *avx512f_scattersiv4si */
    case 8527:  /* *avx512f_scattersiv4si */
    case 8526:  /* *avx512f_scattersiv4df */
    case 8525:  /* *avx512f_scattersiv4df */
    case 8524:  /* *avx512f_scattersiv4di */
    case 8523:  /* *avx512f_scattersiv4di */
    case 8522:  /* *avx512f_scattersiv8sf */
    case 8521:  /* *avx512f_scattersiv8sf */
    case 8520:  /* *avx512f_scattersiv8si */
    case 8519:  /* *avx512f_scattersiv8si */
    case 8518:  /* *avx512f_scattersiv8df */
    case 8517:  /* *avx512f_scattersiv8df */
    case 8516:  /* *avx512f_scattersiv8di */
    case 8515:  /* *avx512f_scattersiv8di */
    case 8514:  /* *avx512f_scattersiv16sf */
    case 8513:  /* *avx512f_scattersiv16sf */
    case 8512:  /* *avx512f_scattersiv16si */
    case 8511:  /* *avx512f_scattersiv16si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0, 3));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0);
      recog_data.dup_num[0] = 6;
      break;

    case 8510:  /* *avx512f_gatherdiv2df_2 */
    case 8509:  /* *avx512f_gatherdiv2df_2 */
    case 8508:  /* *avx512f_gatherdiv2di_2 */
    case 8507:  /* *avx512f_gatherdiv2di_2 */
    case 8506:  /* *avx512f_gatherdiv4sf_2 */
    case 8505:  /* *avx512f_gatherdiv4sf_2 */
    case 8504:  /* *avx512f_gatherdiv4si_2 */
    case 8503:  /* *avx512f_gatherdiv4si_2 */
    case 8502:  /* *avx512f_gatherdiv4df_2 */
    case 8501:  /* *avx512f_gatherdiv4df_2 */
    case 8500:  /* *avx512f_gatherdiv4di_2 */
    case 8499:  /* *avx512f_gatherdiv4di_2 */
    case 8498:  /* *avx512f_gatherdiv8sf_2 */
    case 8497:  /* *avx512f_gatherdiv8sf_2 */
    case 8496:  /* *avx512f_gatherdiv8si_2 */
    case 8495:  /* *avx512f_gatherdiv8si_2 */
    case 8494:  /* *avx512f_gatherdiv8df_2 */
    case 8493:  /* *avx512f_gatherdiv8df_2 */
    case 8492:  /* *avx512f_gatherdiv8di_2 */
    case 8491:  /* *avx512f_gatherdiv8di_2 */
    case 8490:  /* *avx512f_gatherdiv16sf_2 */
    case 8489:  /* *avx512f_gatherdiv16sf_2 */
    case 8488:  /* *avx512f_gatherdiv16si_2 */
    case 8487:  /* *avx512f_gatherdiv16si_2 */
    case 8462:  /* *avx512f_gathersiv2df_2 */
    case 8461:  /* *avx512f_gathersiv2df_2 */
    case 8460:  /* *avx512f_gathersiv2di_2 */
    case 8459:  /* *avx512f_gathersiv2di_2 */
    case 8458:  /* *avx512f_gathersiv4sf_2 */
    case 8457:  /* *avx512f_gathersiv4sf_2 */
    case 8456:  /* *avx512f_gathersiv4si_2 */
    case 8455:  /* *avx512f_gathersiv4si_2 */
    case 8454:  /* *avx512f_gathersiv4df_2 */
    case 8453:  /* *avx512f_gathersiv4df_2 */
    case 8452:  /* *avx512f_gathersiv4di_2 */
    case 8451:  /* *avx512f_gathersiv4di_2 */
    case 8450:  /* *avx512f_gathersiv8sf_2 */
    case 8449:  /* *avx512f_gathersiv8sf_2 */
    case 8448:  /* *avx512f_gathersiv8si_2 */
    case 8447:  /* *avx512f_gathersiv8si_2 */
    case 8446:  /* *avx512f_gathersiv8df_2 */
    case 8445:  /* *avx512f_gathersiv8df_2 */
    case 8444:  /* *avx512f_gathersiv8di_2 */
    case 8443:  /* *avx512f_gathersiv8di_2 */
    case 8442:  /* *avx512f_gathersiv16sf_2 */
    case 8441:  /* *avx512f_gathersiv16sf_2 */
    case 8440:  /* *avx512f_gathersiv16si_2 */
    case 8439:  /* *avx512f_gathersiv16si_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8486:  /* *avx512f_gatherdiv2df */
    case 8485:  /* *avx512f_gatherdiv2df */
    case 8484:  /* *avx512f_gatherdiv2di */
    case 8483:  /* *avx512f_gatherdiv2di */
    case 8482:  /* *avx512f_gatherdiv4sf */
    case 8481:  /* *avx512f_gatherdiv4sf */
    case 8480:  /* *avx512f_gatherdiv4si */
    case 8479:  /* *avx512f_gatherdiv4si */
    case 8478:  /* *avx512f_gatherdiv4df */
    case 8477:  /* *avx512f_gatherdiv4df */
    case 8476:  /* *avx512f_gatherdiv4di */
    case 8475:  /* *avx512f_gatherdiv4di */
    case 8474:  /* *avx512f_gatherdiv8sf */
    case 8473:  /* *avx512f_gatherdiv8sf */
    case 8472:  /* *avx512f_gatherdiv8si */
    case 8471:  /* *avx512f_gatherdiv8si */
    case 8470:  /* *avx512f_gatherdiv8df */
    case 8469:  /* *avx512f_gatherdiv8df */
    case 8468:  /* *avx512f_gatherdiv8di */
    case 8467:  /* *avx512f_gatherdiv8di */
    case 8466:  /* *avx512f_gatherdiv16sf */
    case 8465:  /* *avx512f_gatherdiv16sf */
    case 8464:  /* *avx512f_gatherdiv16si */
    case 8463:  /* *avx512f_gatherdiv16si */
    case 8438:  /* *avx512f_gathersiv2df */
    case 8437:  /* *avx512f_gathersiv2df */
    case 8436:  /* *avx512f_gathersiv2di */
    case 8435:  /* *avx512f_gathersiv2di */
    case 8434:  /* *avx512f_gathersiv4sf */
    case 8433:  /* *avx512f_gathersiv4sf */
    case 8432:  /* *avx512f_gathersiv4si */
    case 8431:  /* *avx512f_gathersiv4si */
    case 8430:  /* *avx512f_gathersiv4df */
    case 8429:  /* *avx512f_gathersiv4df */
    case 8428:  /* *avx512f_gathersiv4di */
    case 8427:  /* *avx512f_gathersiv4di */
    case 8426:  /* *avx512f_gathersiv8sf */
    case 8425:  /* *avx512f_gathersiv8sf */
    case 8424:  /* *avx512f_gathersiv8si */
    case 8423:  /* *avx512f_gathersiv8si */
    case 8422:  /* *avx512f_gathersiv8df */
    case 8421:  /* *avx512f_gathersiv8df */
    case 8420:  /* *avx512f_gathersiv8di */
    case 8419:  /* *avx512f_gathersiv8di */
    case 8418:  /* *avx512f_gathersiv16sf */
    case 8417:  /* *avx512f_gathersiv16sf */
    case 8416:  /* *avx512f_gathersiv16si */
    case 8415:  /* *avx512f_gathersiv16si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8414:  /* *avx2_gatherdiv8sf_4 */
    case 8413:  /* *avx2_gatherdiv8sf_4 */
    case 8412:  /* *avx2_gatherdiv8si_4 */
    case 8411:  /* *avx2_gatherdiv8si_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 8410:  /* *avx2_gatherdiv8sf_3 */
    case 8409:  /* *avx2_gatherdiv8sf_3 */
    case 8408:  /* *avx2_gatherdiv8si_3 */
    case 8407:  /* *avx2_gatherdiv8si_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 8406:  /* *avx2_gatherdiv8sf_2 */
    case 8405:  /* *avx2_gatherdiv8si_2 */
    case 8404:  /* *avx2_gatherdiv4sf_2 */
    case 8403:  /* *avx2_gatherdiv4si_2 */
    case 8402:  /* *avx2_gatherdiv4df_2 */
    case 8401:  /* *avx2_gatherdiv4di_2 */
    case 8400:  /* *avx2_gatherdiv2df_2 */
    case 8399:  /* *avx2_gatherdiv2di_2 */
    case 8398:  /* *avx2_gatherdiv8sf_2 */
    case 8397:  /* *avx2_gatherdiv8si_2 */
    case 8396:  /* *avx2_gatherdiv4sf_2 */
    case 8395:  /* *avx2_gatherdiv4si_2 */
    case 8394:  /* *avx2_gatherdiv4df_2 */
    case 8393:  /* *avx2_gatherdiv4di_2 */
    case 8392:  /* *avx2_gatherdiv2df_2 */
    case 8391:  /* *avx2_gatherdiv2di_2 */
    case 8374:  /* *avx2_gathersiv8sf_2 */
    case 8373:  /* *avx2_gathersiv8si_2 */
    case 8372:  /* *avx2_gathersiv4sf_2 */
    case 8371:  /* *avx2_gathersiv4si_2 */
    case 8370:  /* *avx2_gathersiv4df_2 */
    case 8369:  /* *avx2_gathersiv4di_2 */
    case 8368:  /* *avx2_gathersiv2df_2 */
    case 8367:  /* *avx2_gathersiv2di_2 */
    case 8366:  /* *avx2_gathersiv8sf_2 */
    case 8365:  /* *avx2_gathersiv8si_2 */
    case 8364:  /* *avx2_gathersiv4sf_2 */
    case 8363:  /* *avx2_gathersiv4si_2 */
    case 8362:  /* *avx2_gathersiv4df_2 */
    case 8361:  /* *avx2_gathersiv4di_2 */
    case 8360:  /* *avx2_gathersiv2df_2 */
    case 8359:  /* *avx2_gathersiv2di_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8390:  /* *avx2_gatherdiv8sf */
    case 8389:  /* *avx2_gatherdiv8si */
    case 8388:  /* *avx2_gatherdiv4sf */
    case 8387:  /* *avx2_gatherdiv4si */
    case 8386:  /* *avx2_gatherdiv4df */
    case 8385:  /* *avx2_gatherdiv4di */
    case 8384:  /* *avx2_gatherdiv2df */
    case 8383:  /* *avx2_gatherdiv2di */
    case 8382:  /* *avx2_gatherdiv8sf */
    case 8381:  /* *avx2_gatherdiv8si */
    case 8380:  /* *avx2_gatherdiv4sf */
    case 8379:  /* *avx2_gatherdiv4si */
    case 8378:  /* *avx2_gatherdiv4df */
    case 8377:  /* *avx2_gatherdiv4di */
    case 8376:  /* *avx2_gatherdiv2df */
    case 8375:  /* *avx2_gatherdiv2di */
    case 8358:  /* *avx2_gathersiv8sf */
    case 8357:  /* *avx2_gathersiv8si */
    case 8356:  /* *avx2_gathersiv4sf */
    case 8355:  /* *avx2_gathersiv4si */
    case 8354:  /* *avx2_gathersiv4df */
    case 8353:  /* *avx2_gathersiv4di */
    case 8352:  /* *avx2_gathersiv2df */
    case 8351:  /* *avx2_gathersiv2di */
    case 8350:  /* *avx2_gathersiv8sf */
    case 8349:  /* *avx2_gathersiv8si */
    case 8348:  /* *avx2_gathersiv4sf */
    case 8347:  /* *avx2_gathersiv4si */
    case 8346:  /* *avx2_gathersiv4df */
    case 8345:  /* *avx2_gathersiv4di */
    case 8344:  /* *avx2_gathersiv2df */
    case 8343:  /* *avx2_gathersiv2di */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1), 0), 0, 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 8342:  /* *avx512f_vcvtps2ph512_merge_mask */
    case 8336:  /* *vcvtps2ph256_merge_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 8331:  /* *vcvtps2ph_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8321:  /* vcvtph2ps_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8594:  /* compressstorev8hi_mask */
    case 8593:  /* compressstorev16hi_mask */
    case 8592:  /* compressstorev32hi_mask */
    case 8591:  /* compressstorev32qi_mask */
    case 8590:  /* compressstorev16qi_mask */
    case 8589:  /* compressstorev64qi_mask */
    case 8588:  /* avx512vl_compressstorev2df_mask */
    case 8587:  /* avx512vl_compressstorev2di_mask */
    case 8586:  /* avx512vl_compressstorev4sf_mask */
    case 8585:  /* avx512vl_compressstorev4si_mask */
    case 8584:  /* avx512vl_compressstorev4df_mask */
    case 8583:  /* avx512vl_compressstorev4di_mask */
    case 8582:  /* avx512vl_compressstorev8sf_mask */
    case 8581:  /* avx512vl_compressstorev8si_mask */
    case 8580:  /* avx512f_compressstorev8df_mask */
    case 8579:  /* avx512f_compressstorev8di_mask */
    case 8578:  /* avx512f_compressstorev16sf_mask */
    case 8577:  /* avx512f_compressstorev16si_mask */
    case 8225:  /* avx512vl_storev8bf_mask */
    case 8224:  /* avx512vl_storev16bf_mask */
    case 8223:  /* avx512bw_storev32bf_mask */
    case 8222:  /* avx512fp16_storev8hf_mask */
    case 8221:  /* avx512vl_storev16hf_mask */
    case 8220:  /* avx512bw_storev32hf_mask */
    case 8219:  /* avx512vl_storev8hi_mask */
    case 8218:  /* avx512vl_storev16hi_mask */
    case 8217:  /* avx512bw_storev32hi_mask */
    case 8216:  /* avx512vl_storev32qi_mask */
    case 8215:  /* avx512vl_storev16qi_mask */
    case 8214:  /* avx512bw_storev64qi_mask */
    case 8213:  /* avx512vl_storev2df_mask */
    case 8212:  /* avx512vl_storev4df_mask */
    case 8211:  /* avx512f_storev8df_mask */
    case 8210:  /* avx512vl_storev4sf_mask */
    case 8209:  /* avx512vl_storev8sf_mask */
    case 8208:  /* avx512f_storev16sf_mask */
    case 8207:  /* avx512vl_storev2di_mask */
    case 8206:  /* avx512vl_storev4di_mask */
    case 8205:  /* avx512f_storev8di_mask */
    case 8204:  /* avx512vl_storev4si_mask */
    case 8203:  /* avx512vl_storev8si_mask */
    case 8202:  /* avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 1);
      recog_data.dup_num[0] = 0;
      break;

    case 8201:  /* avx2_maskstoreq256 */
    case 8200:  /* avx2_maskstored256 */
    case 8199:  /* avx2_maskstoreq */
    case 8198:  /* avx2_maskstored */
    case 8197:  /* avx_maskstorepd256 */
    case 8196:  /* avx_maskstoreps256 */
    case 8195:  /* avx_maskstorepd */
    case 8194:  /* avx_maskstoreps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 2);
      recog_data.dup_num[0] = 0;
      break;

    case 8193:  /* avx2_maskloadq256 */
    case 8192:  /* avx2_maskloadd256 */
    case 8191:  /* avx2_maskloadq */
    case 8190:  /* avx2_maskloadd */
    case 8189:  /* avx_maskloadpd256 */
    case 8188:  /* avx_maskloadps256 */
    case 8187:  /* avx_maskloadpd */
    case 8186:  /* avx_maskloadps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 8149:  /* avx512vl_vpermt2varv16qi3_mask */
    case 8148:  /* avx512vl_vpermt2varv32qi3_mask */
    case 8147:  /* avx512bw_vpermt2varv64qi3_mask */
    case 8146:  /* avx512vl_vpermt2varv8hi3_mask */
    case 8145:  /* avx512vl_vpermt2varv16hi3_mask */
    case 8144:  /* avx512bw_vpermt2varv32hi3_mask */
    case 8143:  /* avx512vl_vpermt2varv2df3_mask */
    case 8142:  /* avx512vl_vpermt2varv2di3_mask */
    case 8141:  /* avx512vl_vpermt2varv4sf3_mask */
    case 8140:  /* avx512vl_vpermt2varv4si3_mask */
    case 8139:  /* avx512vl_vpermt2varv4df3_mask */
    case 8138:  /* avx512vl_vpermt2varv4di3_mask */
    case 8137:  /* avx512vl_vpermt2varv8sf3_mask */
    case 8136:  /* avx512vl_vpermt2varv8si3_mask */
    case 8135:  /* avx512f_vpermt2varv8df3_mask */
    case 8134:  /* avx512f_vpermt2varv8di3_mask */
    case 8133:  /* avx512f_vpermt2varv16sf3_mask */
    case 8132:  /* avx512f_vpermt2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 8095:  /* *avx512vl_vpermi2varv2df3_mask */
    case 8094:  /* *avx512vl_vpermi2varv4df3_mask */
    case 8093:  /* *avx512f_vpermi2varv8df3_mask */
    case 8092:  /* *avx512vl_vpermi2varv4sf3_mask */
    case 8091:  /* *avx512vl_vpermi2varv8sf3_mask */
    case 8090:  /* *avx512f_vpermi2varv16sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 8089:  /* *avx512vl_vpermi2varv16qi3_mask */
    case 8088:  /* *avx512vl_vpermi2varv32qi3_mask */
    case 8087:  /* *avx512bw_vpermi2varv64qi3_mask */
    case 8086:  /* *avx512vl_vpermi2varv8hi3_mask */
    case 8085:  /* *avx512vl_vpermi2varv16hi3_mask */
    case 8084:  /* *avx512bw_vpermi2varv32hi3_mask */
    case 8083:  /* *avx512vl_vpermi2varv2di3_mask */
    case 8082:  /* *avx512vl_vpermi2varv4di3_mask */
    case 8081:  /* *avx512vl_vpermi2varv4si3_mask */
    case 8080:  /* *avx512vl_vpermi2varv8si3_mask */
    case 8079:  /* *avx512f_vpermi2varv8di3_mask */
    case 8078:  /* *avx512f_vpermi2varv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 8033:  /* avx_vbroadcastf128_v16bf */
    case 8032:  /* avx_vbroadcastf128_v16hf */
    case 8031:  /* avx_vbroadcastf128_v4df */
    case 8030:  /* avx_vbroadcastf128_v8sf */
    case 8029:  /* avx_vbroadcastf128_v4di */
    case 8028:  /* avx_vbroadcastf128_v8si */
    case 8027:  /* avx_vbroadcastf128_v16hi */
    case 8026:  /* avx_vbroadcastf128_v32qi */
    case 8011:  /* avx2_vbroadcasti128_v4di */
    case 8010:  /* avx2_vbroadcasti128_v8si */
    case 8009:  /* avx2_vbroadcasti128_v16hi */
    case 8008:  /* avx2_vbroadcasti128_v32qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 7884:  /* *avx_vpermilpv2df_mask */
    case 7882:  /* *avx_vpermilpv4df_mask */
    case 7880:  /* *avx512f_vpermilpv8df_mask */
    case 7878:  /* *avx_vpermilpv4sf_mask */
    case 7876:  /* *avx_vpermilpv8sf_mask */
    case 7874:  /* *avx512f_vpermilpv16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8161:  /* *ssse3_palignrv2df_perm */
    case 8160:  /* *ssse3_palignrv4sf_perm */
    case 8159:  /* *ssse3_palignrv2di_perm */
    case 8158:  /* *ssse3_palignrv4si_perm */
    case 8157:  /* *ssse3_palignrv8hi_perm */
    case 8156:  /* *ssse3_palignrv16qi_perm */
    case 7883:  /* *avx_vpermilpv2df */
    case 7881:  /* *avx_vpermilpv4df */
    case 7879:  /* *avx512f_vpermilpv8df */
    case 7877:  /* *avx_vpermilpv4sf */
    case 7875:  /* *avx_vpermilpv8sf */
    case 7873:  /* *avx512f_vpermilpv16sf */
    case 7872:  /* *avx_vperm_broadcast_v4df */
    case 7871:  /* *avx_vperm_broadcast_v8sf */
    case 7870:  /* *avx_vperm_broadcast_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 7816:  /* *avx_vzeroall */
      ro[0] = *(ro_loc[0] = &PATTERN (insn));
      break;

    case 7800:  /* xop_maskcmp_uns2v2di3 */
    case 7799:  /* xop_maskcmp_uns2v4si3 */
    case 7798:  /* xop_maskcmp_uns2v8hi3 */
    case 7797:  /* xop_maskcmp_uns2v16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 7780:  /* xop_shlv2di3 */
    case 7779:  /* xop_shlv4si3 */
    case 7778:  /* xop_shlv8hi3 */
    case 7777:  /* xop_shlv16qi3 */
    case 7776:  /* xop_shav2di3 */
    case 7775:  /* xop_shav4si3 */
    case 7774:  /* xop_shav8hi3 */
    case 7773:  /* xop_shav16qi3 */
    case 7772:  /* xop_vrotlv2di3 */
    case 7771:  /* xop_vrotlv4si3 */
    case 7770:  /* xop_vrotlv8hi3 */
    case 7769:  /* xop_vrotlv16qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 2), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 2), 1), 0);
      recog_data.dup_num[2] = 2;
      break;

    case 7760:  /* xop_pperm_pack_v8hi_v16qi */
    case 7759:  /* xop_pperm_pack_v4si_v8hi */
    case 7758:  /* xop_pperm_pack_v2di_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 7747:  /* xop_phaddubq */
    case 7746:  /* xop_phaddbq */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[6] = 1;
      break;

    case 7751:  /* xop_phadduwq */
    case 7750:  /* xop_phaddwq */
    case 7745:  /* xop_phaddubd */
    case 7744:  /* xop_phaddbd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 7756:  /* xop_phsubdq */
    case 7755:  /* xop_phsubwd */
    case 7754:  /* xop_phsubbw */
    case 7753:  /* xop_phaddudq */
    case 7752:  /* xop_phadddq */
    case 7749:  /* xop_phadduwd */
    case 7748:  /* xop_phaddwd */
    case 7743:  /* xop_phaddubw */
    case 7742:  /* xop_phaddbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 7725:  /* xop_pmadcsswd */
    case 7724:  /* xop_pmadcswd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 7723:  /* xop_pmacsswd */
    case 7722:  /* xop_pmacswd */
    case 7721:  /* xop_pmacssdqh */
    case 7720:  /* xop_pmacsdqh */
    case 7719:  /* xop_pmacssdql */
    case 7718:  /* xop_pmacsdql */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 7713:  /* avx512er_vmrsqrt28v2df_mask_round */
    case 7709:  /* avx512er_vmrsqrt28v4sf_mask_round */
    case 7697:  /* avx512er_vmrcp28v2df_mask_round */
    case 7693:  /* avx512er_vmrcp28v4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7712:  /* avx512er_vmrsqrt28v2df_mask */
    case 7708:  /* avx512er_vmrsqrt28v4sf_mask */
    case 7696:  /* avx512er_vmrcp28v2df_mask */
    case 7692:  /* avx512er_vmrcp28v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7711:  /* avx512er_vmrsqrt28v2df_round */
    case 7707:  /* avx512er_vmrsqrt28v4sf_round */
    case 7695:  /* avx512er_vmrcp28v2df_round */
    case 7691:  /* avx512er_vmrcp28v4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7673:  /* *avx512pf_scatterpfv8didf_mask */
    case 7672:  /* *avx512pf_scatterpfv8didf_mask */
    case 7671:  /* *avx512pf_scatterpfv8sidf_mask */
    case 7670:  /* *avx512pf_scatterpfv8sidf_mask */
    case 7669:  /* *avx512pf_scatterpfv8disf_mask */
    case 7668:  /* *avx512pf_scatterpfv16sisf_mask */
    case 7667:  /* *avx512pf_scatterpfv8disf_mask */
    case 7666:  /* *avx512pf_scatterpfv16sisf_mask */
    case 7665:  /* *avx512pf_gatherpfv8didf_mask */
    case 7664:  /* *avx512pf_gatherpfv8didf_mask */
    case 7663:  /* *avx512pf_gatherpfv8sidf_mask */
    case 7662:  /* *avx512pf_gatherpfv8sidf_mask */
    case 7661:  /* *avx512pf_gatherpfv8disf_mask */
    case 7660:  /* *avx512pf_gatherpfv16sisf_mask */
    case 7659:  /* *avx512pf_gatherpfv8disf_mask */
    case 7658:  /* *avx512pf_gatherpfv16sisf_mask */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (pat, 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (pat, 0, 1));
      break;

    case 7657:  /* sse4_2_pcmpistr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 7656:  /* sse4_2_pcmpistrm */
    case 7655:  /* sse4_2_pcmpistri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 7654:  /* sse4_2_pcmpistr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[2] = 2;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[3] = 4;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[5] = 2;
      break;

    case 7653:  /* sse4_2_pcmpestr_cconly */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      break;

    case 7652:  /* sse4_2_pcmpestrm */
    case 7651:  /* sse4_2_pcmpestri */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[1] = 4;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[4] = 1;
      break;

    case 7650:  /* sse4_2_pcmpestr */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 4));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 4);
      recog_data.dup_num[0] = 6;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 3);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 2);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[3] = 3;
      recog_data.dup_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 4);
      recog_data.dup_num[5] = 6;
      recog_data.dup_loc[6] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 3);
      recog_data.dup_num[6] = 5;
      recog_data.dup_loc[7] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[7] = 4;
      recog_data.dup_loc[8] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[8] = 3;
      recog_data.dup_loc[9] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[9] = 2;
      break;

    case 7621:  /* *sse4_1_zero_extendv2siv2di2_4 */
    case 7607:  /* *avx2_zero_extendv4siv4di2_2 */
    case 7601:  /* *avx512f_zero_extendv8siv8di2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 7567:  /* *sse4_1_zero_extendv2qiv2di2_2 */
    case 7566:  /* *sse4_1_zero_extendv2qiv2di2_2 */
    case 7565:  /* *sse4_1_zero_extendv2qiv2di2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 7595:  /* *sse4_1_zero_extendv2hiv2di2_mask_2 */
    case 7593:  /* *sse4_1_sign_extendv2hiv2di2_mask_2 */
    case 7556:  /* *avx2_zero_extendv4qiv4di2_mask_2 */
    case 7554:  /* *avx2_sign_extendv4qiv4di2_mask_2 */
    case 7500:  /* *sse4_1_zero_extendv4qiv4si2_mask_2 */
    case 7498:  /* *sse4_1_sign_extendv4qiv4si2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7594:  /* *sse4_1_zero_extendv2hiv2di2_2 */
    case 7592:  /* *sse4_1_sign_extendv2hiv2di2_2 */
    case 7555:  /* *avx2_zero_extendv4qiv4di2_2 */
    case 7553:  /* *avx2_sign_extendv4qiv4di2_2 */
    case 7499:  /* *sse4_1_zero_extendv4qiv4si2_2 */
    case 7497:  /* *sse4_1_sign_extendv4qiv4si2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      break;

    case 7619:  /* *sse4_1_zero_extendv2siv2di2_mask_2 */
    case 7617:  /* *sse4_1_sign_extendv2siv2di2_mask_2 */
    case 7583:  /* *avx2_zero_extendv4hiv4di2_mask_2 */
    case 7581:  /* *avx2_sign_extendv4hiv4di2_mask_2 */
    case 7544:  /* *avx512f_zero_extendv8qiv8di2_mask_2 */
    case 7542:  /* *avx512f_sign_extendv8qiv8di2_mask_2 */
    case 7528:  /* *sse4_1_zero_extendv4hiv4si2_mask_2 */
    case 7526:  /* *sse4_1_sign_extendv4hiv4si2_mask_2 */
    case 7488:  /* *avx2_zero_extendv8qiv8si2_mask_2 */
    case 7486:  /* *avx2_sign_extendv8qiv8si2_mask_2 */
    case 7468:  /* *sse4_1_zero_extendv8qiv8hi2_mask_2 */
    case 7466:  /* *sse4_1_sign_extendv8qiv8hi2_mask_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7618:  /* *sse4_1_zero_extendv2siv2di2_2 */
    case 7616:  /* *sse4_1_sign_extendv2siv2di2_2 */
    case 7582:  /* *avx2_zero_extendv4hiv4di2_2 */
    case 7580:  /* *avx2_sign_extendv4hiv4di2_2 */
    case 7543:  /* *avx512f_zero_extendv8qiv8di2_2 */
    case 7541:  /* *avx512f_sign_extendv8qiv8di2_2 */
    case 7527:  /* *sse4_1_zero_extendv4hiv4si2_2 */
    case 7525:  /* *sse4_1_sign_extendv4hiv4si2_2 */
    case 7487:  /* *avx2_zero_extendv8qiv8si2_2 */
    case 7485:  /* *avx2_sign_extendv8qiv8si2_2 */
    case 7467:  /* *sse4_1_zero_extendv8qiv8hi2_2 */
    case 7465:  /* *sse4_1_sign_extendv8qiv8hi2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      break;

    case 7532:  /* *sse4_1_zero_extendv4hiv4si2_4 */
    case 7531:  /* *sse4_1_zero_extendv4hiv4si2_4 */
    case 7530:  /* *sse4_1_zero_extendv4hiv4si2_4 */
    case 7516:  /* *avx2_zero_extendv8hiv8si2_2 */
    case 7515:  /* *avx2_zero_extendv8hiv8si2_2 */
    case 7514:  /* *avx2_zero_extendv8hiv8si2_2 */
    case 7508:  /* *avx512f_zero_extendv16hiv16si2_2 */
    case 7507:  /* *avx512f_zero_extendv16hiv16si2_2 */
    case 7506:  /* *avx512f_zero_extendv16hiv16si2_2 */
    case 7472:  /* *sse4_1_zero_extendv8qiv8hi2_4 */
    case 7471:  /* *sse4_1_zero_extendv8qiv8hi2_4 */
    case 7470:  /* *sse4_1_zero_extendv8qiv8hi2_4 */
    case 7456:  /* *avx512bw_zero_extendv32qiv32hi2_2 */
    case 7455:  /* *avx512bw_zero_extendv32qiv32hi2_2 */
    case 7454:  /* *avx512bw_zero_extendv32qiv32hi2_2 */
    case 7448:  /* *avx2_zero_extendv16qiv16hi2_2 */
    case 7447:  /* *avx2_zero_extendv16qiv16hi2_2 */
    case 7446:  /* *avx2_zero_extendv16qiv16hi2_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 8319:  /* *vec_concatv2df_0_1 */
    case 8318:  /* *vec_concatv4df_0_1 */
    case 8317:  /* *vec_concatv8df_0_1 */
    case 8316:  /* *vec_concatv4sf_0_1 */
    case 8315:  /* *vec_concatv8sf_0_1 */
    case 8314:  /* *vec_concatv16sf_0_1 */
    case 8313:  /* *vec_concatv8hf_0_1 */
    case 8312:  /* *vec_concatv16hf_0_1 */
    case 8311:  /* *vec_concatv32hf_0_1 */
    case 8310:  /* *vec_concatv2di_0_1 */
    case 8309:  /* *vec_concatv4di_0_1 */
    case 8308:  /* *vec_concatv8di_0_1 */
    case 8307:  /* *vec_concatv4si_0_1 */
    case 8306:  /* *vec_concatv8si_0_1 */
    case 8305:  /* *vec_concatv16si_0_1 */
    case 8304:  /* *vec_concatv8hi_0_1 */
    case 8303:  /* *vec_concatv16hi_0_1 */
    case 8302:  /* *vec_concatv32hi_0_1 */
    case 8301:  /* *vec_concatv16qi_0_1 */
    case 8300:  /* *vec_concatv32qi_0_1 */
    case 8299:  /* *vec_concatv64qi_0_1 */
    case 8155:  /* *avx_vperm2f128v4df_nozero */
    case 8154:  /* *avx_vperm2f128v8sf_nozero */
    case 8153:  /* *avx_vperm2f128v8si_nozero */
    case 7620:  /* *sse4_1_zero_extendv2siv2di2_3 */
    case 7606:  /* *avx2_zero_extendv4siv4di2_1 */
    case 7600:  /* *avx512f_zero_extendv8siv8di2_1 */
    case 7529:  /* *sse4_1_zero_extendv4hiv4si2_3 */
    case 7513:  /* avx2_zero_extendv8hiv8si2_1 */
    case 7505:  /* avx512f_zero_extendv16hiv16si2_1 */
    case 7469:  /* *sse4_1_zero_extendv8qiv8hi2_3 */
    case 7453:  /* *avx512bw_zero_extendv32qiv32hi2_1 */
    case 7445:  /* *avx2_zero_extendv16qiv16hi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 7431:  /* *sse4_1_pblendvb_lt_subreg_not */
    case 7430:  /* *avx2_pblendvb_lt_subreg_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 7410:  /* *avx_blendvpd256_not_ltint */
    case 7409:  /* *avx_blendvps256_not_ltint */
    case 7408:  /* *sse4_1_blendvpd_not_ltint */
    case 7407:  /* *sse4_1_blendvps_not_ltint */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 7406:  /* *avx_blendvpd256_ltint */
    case 7405:  /* *avx_blendvps256_ltint */
    case 7404:  /* *sse4_1_blendvpd_ltint */
    case 7403:  /* *sse4_1_blendvps_ltint */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0), 1));
      break;

    case 7429:  /* *sse4_1_pblendvb_lt */
    case 7428:  /* *avx2_pblendvb_lt */
    case 7402:  /* *sse4_1_blendvpd_lt */
    case 7401:  /* *avx_blendvpd256_lt */
    case 7400:  /* *sse4_1_blendvps_lt */
    case 7399:  /* *avx_blendvps256_lt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 1));
      break;

    case 7340:  /* *ssse3_pshufbv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 7331:  /* *ssse3_pmulhrswv8hi3_mask */
    case 7329:  /* *avx2_pmulhrswv16hi3_mask */
    case 7327:  /* *avx512bw_pmulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7333:  /* *smulhrsv2hi3 */
    case 7332:  /* *ssse3_pmulhrswv4hi3 */
    case 7330:  /* *ssse3_pmulhrswv8hi3 */
    case 7328:  /* *avx2_pmulhrswv16hi3 */
    case 7326:  /* *avx512bw_pmulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 7323:  /* avx512bw_umulhrswv32hi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7322:  /* avx512bw_umulhrswv32hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      break;

    case 7314:  /* ssse3_phsubdv2si3 */
    case 7313:  /* ssse3_phadddv2si3 */
    case 7312:  /* ssse3_phsubdv4si3 */
    case 7311:  /* ssse3_phadddv4si3 */
    case 7310:  /* avx2_phsubdv8si3 */
    case 7309:  /* avx2_phadddv8si3 */
    case 7308:  /* ssse3_phsubswv4hi3 */
    case 7307:  /* ssse3_phsubwv4hi3 */
    case 7306:  /* ssse3_phaddswv4hi3 */
    case 7305:  /* ssse3_phaddwv4hi3 */
    case 7304:  /* ssse3_phsubswv8hi3 */
    case 7303:  /* ssse3_phsubwv8hi3 */
    case 7302:  /* ssse3_phaddswv8hi3 */
    case 7301:  /* ssse3_phaddwv8hi3 */
    case 7300:  /* avx2_phsubswv16hi3 */
    case 7299:  /* avx2_phsubwv16hi3 */
    case 7298:  /* avx2_phaddswv16hi3 */
    case 7297:  /* avx2_phaddwv16hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 7283:  /* *sse2_pmovskb_zexthisi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      break;

    case 7277:  /* *sse2_movmskpd_uext_shift */
    case 7276:  /* *sse2_movmskpd_ext_shift */
    case 7275:  /* *avx_movmskpd256_uext_shift */
    case 7274:  /* *avx_movmskpd256_ext_shift */
    case 7273:  /* *sse_movmskps_uext_shift */
    case 7272:  /* *sse_movmskps_ext_shift */
    case 7271:  /* *avx_movmskps256_uext_shift */
    case 7270:  /* *avx_movmskps256_ext_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0), 1));
      break;

    case 7269:  /* *sse2_movmskpd_shift */
    case 7268:  /* *avx_movmskpd256_shift */
    case 7267:  /* *sse_movmskps_shift */
    case 7266:  /* *avx_movmskps256_shift */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      break;

    case 7288:  /* *sse2_pmovmskb_ext_lt */
    case 7287:  /* *sse2_pmovmskb_zext_lt */
    case 7286:  /* *avx2_pmovmskb_zext_lt */
    case 7265:  /* *sse2_movmskpd_uext_lt */
    case 7264:  /* *sse2_movmskpd_ext_lt */
    case 7263:  /* *avx_movmskpd256_uext_lt */
    case 7262:  /* *avx_movmskpd256_ext_lt */
    case 7261:  /* *sse_movmskps_uext_lt */
    case 7260:  /* *sse_movmskps_ext_lt */
    case 7259:  /* *avx_movmskps256_uext_lt */
    case 7258:  /* *avx_movmskps256_ext_lt */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 1));
      break;

    case 7238:  /* *sse2_uavgv8hi3_mask */
    case 7236:  /* *avx2_uavgv16hi3_mask */
    case 7234:  /* *avx512bw_uavgv32hi3_mask */
    case 7232:  /* *sse2_uavgv16qi3_mask */
    case 7230:  /* *avx2_uavgv32qi3_mask */
    case 7228:  /* *avx512bw_uavgv64qi3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      break;

    case 7237:  /* *sse2_uavgv8hi3 */
    case 7235:  /* *avx2_uavgv16hi3 */
    case 7233:  /* *avx512bw_uavgv32hi3 */
    case 7231:  /* *sse2_uavgv16qi3 */
    case 7229:  /* *avx2_uavgv32qi3 */
    case 7227:  /* *avx512bw_uavgv64qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 7219:  /* *vec_concatv8hi_permt2 */
    case 7218:  /* *vec_concatv16qi_permt2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 7188:  /* sse2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7187:  /* sse2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 7186:  /* avx2_pshufhw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7185:  /* avx2_pshufhw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 7180:  /* avx2_pshuflw_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7179:  /* avx2_pshuflw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      break;

    case 7172:  /* avx512f_pshufd_1_mask */
    case 7170:  /* *avx512f_shuf_i32x4_1_mask_1 */
    case 7168:  /* *avx512f_shuf_f32x4_1_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[18] = *(ro_loc[18] = &XEXP (XEXP (pat, 1), 1));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7171:  /* avx512f_pshufd_1 */
    case 7169:  /* *avx512f_shuf_i32x4_1_1 */
    case 7167:  /* *avx512f_shuf_f32x4_1_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 7892:  /* avx512f_permv8di_1_mask */
    case 7890:  /* avx512f_permv8df_1_mask */
    case 7174:  /* avx2_pshufd_1_mask */
    case 7158:  /* *avx512f_shuf_i64x2_1_mask_1 */
    case 7156:  /* *avx512f_shuf_f64x2_1_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[10] = *(ro_loc[10] = &XEXP (XEXP (pat, 1), 1));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7891:  /* avx512f_permv8di_1 */
    case 7889:  /* avx512f_permv8df_1 */
    case 7173:  /* avx2_pshufd_1 */
    case 7157:  /* *avx512f_shuf_i64x2_1_1 */
    case 7155:  /* *avx512f_shuf_f64x2_1_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 8173:  /* vec_set_lo_v8sf_mask */
    case 8171:  /* vec_set_lo_v8si_mask */
    case 8165:  /* vec_set_lo_v4df_mask */
    case 8163:  /* vec_set_lo_v4di_mask */
    case 7142:  /* vec_set_lo_v8di_mask */
    case 7140:  /* vec_set_lo_v8df_mask */
    case 7134:  /* vec_set_lo_v16si_mask */
    case 7132:  /* vec_set_lo_v16sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7130:  /* avx512f_vinserti32x4_1_mask */
    case 7128:  /* avx512f_vinsertf32x4_1_mask */
    case 7126:  /* avx512dq_vinserti64x2_1_mask */
    case 7124:  /* avx512dq_vinsertf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7129:  /* *avx512f_vinserti32x4_1 */
    case 7127:  /* *avx512f_vinsertf32x4_1 */
    case 7125:  /* *avx512dq_vinserti64x2_1 */
    case 7123:  /* *avx512dq_vinsertf64x2_1 */
    case 7122:  /* *avx512f_vinserti32x4_0 */
    case 7121:  /* *avx512f_vinsertf32x4_0 */
    case 7120:  /* *avx512dq_vinserti64x2_0 */
    case 7119:  /* *avx512dq_vinsertf64x2_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7425:  /* sse4_1_packusdw_mask */
    case 7423:  /* avx2_packusdw_mask */
    case 7421:  /* avx512bw_packusdw_mask */
    case 7052:  /* sse2_packuswb_mask */
    case 7050:  /* avx2_packuswb_mask */
    case 7048:  /* avx512bw_packuswb_mask */
    case 7046:  /* sse2_packssdw_mask */
    case 7044:  /* avx2_packssdw_mask */
    case 7042:  /* avx512bw_packssdw_mask */
    case 7040:  /* sse2_packsswb_mask */
    case 7038:  /* avx2_packsswb_mask */
    case 7036:  /* avx512bw_packsswb_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7034:  /* *avx512vl_testnmv2di3_zext_mask */
    case 7033:  /* *avx512vl_testnmv2di3_zext_mask */
    case 7032:  /* *avx512vl_testnmv2di3_zext_mask */
    case 7031:  /* *avx512vl_testnmv4di3_zext_mask */
    case 7030:  /* *avx512vl_testnmv4di3_zext_mask */
    case 7029:  /* *avx512vl_testnmv4di3_zext_mask */
    case 7028:  /* *avx512f_testnmv8di3_zext_mask */
    case 7027:  /* *avx512f_testnmv8di3_zext_mask */
    case 7026:  /* *avx512f_testnmv8di3_zext_mask */
    case 7025:  /* *avx512vl_testnmv4si3_zext_mask */
    case 7024:  /* *avx512vl_testnmv4si3_zext_mask */
    case 7023:  /* *avx512vl_testnmv4si3_zext_mask */
    case 7022:  /* *avx512vl_testnmv8si3_zext_mask */
    case 7021:  /* *avx512vl_testnmv8si3_zext_mask */
    case 7020:  /* *avx512vl_testnmv8si3_zext_mask */
    case 7019:  /* *avx512f_testnmv16si3_zext_mask */
    case 7018:  /* *avx512f_testnmv16si3_zext_mask */
    case 7017:  /* *avx512f_testnmv16si3_zext_mask */
    case 7016:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 7015:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 7014:  /* *avx512vl_testnmv8hi3_zext_mask */
    case 7013:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 7012:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 7011:  /* *avx512vl_testnmv16hi3_zext_mask */
    case 7010:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 7009:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 7008:  /* *avx512bw_testnmv32hi3_zext_mask */
    case 7007:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 7006:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 7005:  /* *avx512vl_testnmv16qi3_zext_mask */
    case 7004:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 7003:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 7002:  /* *avx512vl_testnmv32qi3_zext_mask */
    case 7001:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 7000:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 6999:  /* *avx512bw_testnmv64qi3_zext_mask */
    case 6962:  /* *avx512vl_testmv2di3_zext_mask */
    case 6961:  /* *avx512vl_testmv2di3_zext_mask */
    case 6960:  /* *avx512vl_testmv2di3_zext_mask */
    case 6959:  /* *avx512vl_testmv4di3_zext_mask */
    case 6958:  /* *avx512vl_testmv4di3_zext_mask */
    case 6957:  /* *avx512vl_testmv4di3_zext_mask */
    case 6956:  /* *avx512f_testmv8di3_zext_mask */
    case 6955:  /* *avx512f_testmv8di3_zext_mask */
    case 6954:  /* *avx512f_testmv8di3_zext_mask */
    case 6953:  /* *avx512vl_testmv4si3_zext_mask */
    case 6952:  /* *avx512vl_testmv4si3_zext_mask */
    case 6951:  /* *avx512vl_testmv4si3_zext_mask */
    case 6950:  /* *avx512vl_testmv8si3_zext_mask */
    case 6949:  /* *avx512vl_testmv8si3_zext_mask */
    case 6948:  /* *avx512vl_testmv8si3_zext_mask */
    case 6947:  /* *avx512f_testmv16si3_zext_mask */
    case 6946:  /* *avx512f_testmv16si3_zext_mask */
    case 6945:  /* *avx512f_testmv16si3_zext_mask */
    case 6944:  /* *avx512vl_testmv8hi3_zext_mask */
    case 6943:  /* *avx512vl_testmv8hi3_zext_mask */
    case 6942:  /* *avx512vl_testmv8hi3_zext_mask */
    case 6941:  /* *avx512vl_testmv16hi3_zext_mask */
    case 6940:  /* *avx512vl_testmv16hi3_zext_mask */
    case 6939:  /* *avx512vl_testmv16hi3_zext_mask */
    case 6938:  /* *avx512bw_testmv32hi3_zext_mask */
    case 6937:  /* *avx512bw_testmv32hi3_zext_mask */
    case 6936:  /* *avx512bw_testmv32hi3_zext_mask */
    case 6935:  /* *avx512vl_testmv16qi3_zext_mask */
    case 6934:  /* *avx512vl_testmv16qi3_zext_mask */
    case 6933:  /* *avx512vl_testmv16qi3_zext_mask */
    case 6932:  /* *avx512vl_testmv32qi3_zext_mask */
    case 6931:  /* *avx512vl_testmv32qi3_zext_mask */
    case 6930:  /* *avx512vl_testmv32qi3_zext_mask */
    case 6929:  /* *avx512bw_testmv64qi3_zext_mask */
    case 6928:  /* *avx512bw_testmv64qi3_zext_mask */
    case 6927:  /* *avx512bw_testmv64qi3_zext_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 6737:  /* *avx2_pcmpv16qi3_5 */
    case 6736:  /* *avx2_pcmpv32qi3_5 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 6430:  /* *sse4_1_mulv2siv2di3_mask */
    case 6428:  /* *vec_widen_smult_even_v8si_mask */
    case 6426:  /* *vec_widen_smult_even_v16si_mask */
    case 6424:  /* *vec_widen_umult_even_v4si_mask */
    case 6422:  /* *vec_widen_umult_even_v8si_mask */
    case 6420:  /* *vec_widen_umult_even_v16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6418:  /* *umulv8hi3_highpart_mask */
    case 6416:  /* *smulv8hi3_highpart_mask */
    case 6414:  /* *umulv16hi3_highpart_mask */
    case 6412:  /* *smulv16hi3_highpart_mask */
    case 6410:  /* *umulv32hi3_highpart_mask */
    case 6408:  /* *smulv32hi3_highpart_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6304:  /* avx512f_us_truncatev8div16qi2_mask_store_2 */
    case 6303:  /* avx512f_truncatev8div16qi2_mask_store_2 */
    case 6302:  /* avx512f_ss_truncatev8div16qi2_mask_store_2 */
    case 6283:  /* avx512vl_us_truncatev2div2si2_mask_store_2 */
    case 6282:  /* avx512vl_truncatev2div2si2_mask_store_2 */
    case 6281:  /* avx512vl_ss_truncatev2div2si2_mask_store_2 */
    case 6261:  /* avx512vl_us_truncatev2div2hi2_mask_store_2 */
    case 6260:  /* avx512vl_truncatev2div2hi2_mask_store_2 */
    case 6259:  /* avx512vl_ss_truncatev2div2hi2_mask_store_2 */
    case 6243:  /* avx512vl_us_truncatev4div4hi2_mask_store_2 */
    case 6242:  /* avx512vl_truncatev4div4hi2_mask_store_2 */
    case 6241:  /* avx512vl_ss_truncatev4div4hi2_mask_store_2 */
    case 6240:  /* avx512vl_us_truncatev4siv4hi2_mask_store_2 */
    case 6239:  /* avx512vl_truncatev4siv4hi2_mask_store_2 */
    case 6238:  /* avx512vl_ss_truncatev4siv4hi2_mask_store_2 */
    case 6197:  /* avx512vl_us_truncatev8siv8qi2_mask_store_2 */
    case 6196:  /* avx512vl_truncatev8siv8qi2_mask_store_2 */
    case 6195:  /* avx512vl_ss_truncatev8siv8qi2_mask_store_2 */
    case 6194:  /* avx512vl_us_truncatev8hiv8qi2_mask_store_2 */
    case 6193:  /* avx512vl_truncatev8hiv8qi2_mask_store_2 */
    case 6192:  /* avx512vl_ss_truncatev8hiv8qi2_mask_store_2 */
    case 6161:  /* avx512vl_us_truncatev4div4qi2_mask_store_2 */
    case 6160:  /* avx512vl_truncatev4div4qi2_mask_store_2 */
    case 6159:  /* avx512vl_ss_truncatev4div4qi2_mask_store_2 */
    case 6158:  /* avx512vl_us_truncatev4siv4qi2_mask_store_2 */
    case 6157:  /* avx512vl_truncatev4siv4qi2_mask_store_2 */
    case 6156:  /* avx512vl_ss_truncatev4siv4qi2_mask_store_2 */
    case 6125:  /* avx512vl_us_truncatev2div2qi2_mask_store_2 */
    case 6124:  /* avx512vl_truncatev2div2qi2_mask_store_2 */
    case 6123:  /* avx512vl_ss_truncatev2div2qi2_mask_store_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 6301:  /* *avx512f_us_truncatev8div16qi2_mask_store_1 */
    case 6300:  /* *avx512f_truncatev8div16qi2_mask_store_1 */
    case 6299:  /* *avx512f_ss_truncatev8div16qi2_mask_store_1 */
    case 6280:  /* *avx512vl_us_truncatev2div2si2_mask_store_1 */
    case 6279:  /* *avx512vl_truncatev2div2si2_mask_store_1 */
    case 6278:  /* *avx512vl_ss_truncatev2div2si2_mask_store_1 */
    case 6258:  /* *avx512vl_us_truncatev2div2hi2_mask_store_1 */
    case 6257:  /* *avx512vl_truncatev2div2hi2_mask_store_1 */
    case 6256:  /* *avx512vl_ss_truncatev2div2hi2_mask_store_1 */
    case 6237:  /* *avx512vl_us_truncatev4div4hi2_mask_store_1 */
    case 6236:  /* *avx512vl_truncatev4div4hi2_mask_store_1 */
    case 6235:  /* *avx512vl_ss_truncatev4div4hi2_mask_store_1 */
    case 6234:  /* *avx512vl_us_truncatev4siv4hi2_mask_store_1 */
    case 6233:  /* *avx512vl_truncatev4siv4hi2_mask_store_1 */
    case 6232:  /* *avx512vl_ss_truncatev4siv4hi2_mask_store_1 */
    case 6191:  /* *avx512vl_us_truncatev8siv8qi2_mask_store_1 */
    case 6190:  /* *avx512vl_truncatev8siv8qi2_mask_store_1 */
    case 6189:  /* *avx512vl_ss_truncatev8siv8qi2_mask_store_1 */
    case 6188:  /* *avx512vl_us_truncatev8hiv8qi2_mask_store_1 */
    case 6187:  /* *avx512vl_truncatev8hiv8qi2_mask_store_1 */
    case 6186:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_store_1 */
    case 6155:  /* *avx512vl_us_truncatev4div4qi2_mask_store_1 */
    case 6154:  /* *avx512vl_truncatev4div4qi2_mask_store_1 */
    case 6153:  /* *avx512vl_ss_truncatev4div4qi2_mask_store_1 */
    case 6152:  /* *avx512vl_us_truncatev4siv4qi2_mask_store_1 */
    case 6151:  /* *avx512vl_truncatev4siv4qi2_mask_store_1 */
    case 6150:  /* *avx512vl_ss_truncatev4siv4qi2_mask_store_1 */
    case 6122:  /* *avx512vl_us_truncatev2div2qi2_mask_store_1 */
    case 6121:  /* *avx512vl_truncatev2div2qi2_mask_store_1 */
    case 6120:  /* *avx512vl_ss_truncatev2div2qi2_mask_store_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 6207:  /* *avx512f_pshufb_truncv4siv4hi_1 */
    case 6107:  /* *avx512f_pshufb_truncv8hiv8qi_1 */
    case 6051:  /* *avx512f_permvar_truncv8siv8hi_1_hf */
    case 6049:  /* *avx512bw_permvar_truncv16siv16hi_1_hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 6008:  /* sse2_shufpd_v2df_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7166:  /* avx512f_shuf_i32x4_1_mask */
    case 7164:  /* avx512f_shuf_f32x4_1_mask */
    case 6003:  /* avx512f_shufps512_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 15));
      ro[19] = *(ro_loc[19] = &XEXP (XEXP (pat, 1), 1));
      ro[20] = *(ro_loc[20] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7165:  /* avx512f_shuf_i32x4_1 */
    case 7163:  /* avx512f_shuf_f32x4_1 */
    case 6002:  /* avx512f_shufps512_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 8));
      ro[12] = *(ro_loc[12] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 9));
      ro[13] = *(ro_loc[13] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 10));
      ro[14] = *(ro_loc[14] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 11));
      ro[15] = *(ro_loc[15] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 12));
      ro[16] = *(ro_loc[16] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 13));
      ro[17] = *(ro_loc[17] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 14));
      ro[18] = *(ro_loc[18] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 15));
      break;

    case 6001:  /* *avx512f_rndscalev2df_round */
    case 5999:  /* *avx512f_rndscalev4sf_round */
    case 5997:  /* *avx512f_rndscalev8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 7649:  /* *sse4_1_roundsd */
    case 7648:  /* *sse4_1_roundss */
    case 7647:  /* *sse4_1_roundsh */
    case 6000:  /* *avx512f_rndscalev2df */
    case 5998:  /* *avx512f_rndscalev4sf */
    case 5996:  /* *avx512f_rndscalev8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      break;

    case 5995:  /* avx512f_rndscalev2df_mask_round */
    case 5991:  /* avx512f_rndscalev4sf_mask_round */
    case 5987:  /* avx512f_rndscalev8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5994:  /* avx512f_rndscalev2df_round */
    case 5990:  /* avx512f_rndscalev4sf_round */
    case 5986:  /* avx512f_rndscalev8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5993:  /* avx512f_rndscalev2df_mask */
    case 5989:  /* avx512f_rndscalev4sf_mask */
    case 5985:  /* avx512f_rndscalev8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 7646:  /* sse4_1_roundsd */
    case 7645:  /* sse4_1_roundss */
    case 5992:  /* avx512f_rndscalev2df */
    case 5988:  /* avx512f_rndscalev4sf */
    case 5984:  /* avx512f_rndscalev8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 5947:  /* avx512f_sfixupimmv2df_mask_round */
    case 5945:  /* avx512f_sfixupimmv4sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 5946:  /* avx512f_sfixupimmv2df_mask */
    case 5944:  /* avx512f_sfixupimmv4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 5943:  /* avx512f_sfixupimmv2df_maskz_1_round */
    case 5939:  /* avx512f_sfixupimmv4sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5942:  /* avx512f_sfixupimmv2df_maskz_1 */
    case 5938:  /* avx512f_sfixupimmv4sf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5941:  /* avx512f_sfixupimmv2df_round */
    case 5937:  /* avx512f_sfixupimmv4sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5940:  /* avx512f_sfixupimmv2df */
    case 5936:  /* avx512f_sfixupimmv4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 5935:  /* avx512vl_fixupimmv2df_mask_round */
    case 5933:  /* avx512vl_fixupimmv4df_mask_round */
    case 5931:  /* avx512f_fixupimmv8df_mask_round */
    case 5929:  /* avx512vl_fixupimmv4sf_mask_round */
    case 5927:  /* avx512vl_fixupimmv8sf_mask_round */
    case 5925:  /* avx512f_fixupimmv16sf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5923:  /* avx512vl_fixupimmv2df_maskz_1_round */
    case 5919:  /* avx512vl_fixupimmv4df_maskz_1_round */
    case 5915:  /* avx512f_fixupimmv8df_maskz_1_round */
    case 5911:  /* avx512vl_fixupimmv4sf_maskz_1_round */
    case 5907:  /* avx512vl_fixupimmv8sf_maskz_1_round */
    case 5903:  /* avx512f_fixupimmv16sf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5921:  /* avx512vl_fixupimmv2df_round */
    case 5917:  /* avx512vl_fixupimmv4df_round */
    case 5913:  /* avx512f_fixupimmv8df_round */
    case 5909:  /* avx512vl_fixupimmv4sf_round */
    case 5905:  /* avx512vl_fixupimmv8sf_round */
    case 5901:  /* avx512f_fixupimmv16sf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 5934:  /* avx512vl_fixupimmv2df_mask */
    case 5932:  /* avx512vl_fixupimmv4df_mask */
    case 5930:  /* avx512f_fixupimmv8df_mask */
    case 5928:  /* avx512vl_fixupimmv4sf_mask */
    case 5926:  /* avx512vl_fixupimmv8sf_mask */
    case 5924:  /* avx512f_fixupimmv16sf_mask */
    case 5831:  /* avx512vl_vternlogv2di_mask */
    case 5830:  /* avx512vl_vternlogv4di_mask */
    case 5829:  /* avx512f_vternlogv8di_mask */
    case 5828:  /* avx512vl_vternlogv4si_mask */
    case 5827:  /* avx512vl_vternlogv8si_mask */
    case 5826:  /* avx512f_vternlogv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5069:  /* *avx512vl_vpternlogv2df_1 */
    case 5068:  /* *avx512vl_vpternlogv2df_1 */
    case 5067:  /* *avx512vl_vpternlogv2df_1 */
    case 5066:  /* *avx512vl_vpternlogv2df_1 */
    case 5065:  /* *avx512vl_vpternlogv2df_1 */
    case 5064:  /* *avx512vl_vpternlogv2df_1 */
    case 5063:  /* *avx512vl_vpternlogv2df_1 */
    case 5062:  /* *avx512vl_vpternlogv2df_1 */
    case 5061:  /* *avx512vl_vpternlogv2df_1 */
    case 5060:  /* *avx512vl_vpternlogv2df_1 */
    case 5059:  /* *avx512vl_vpternlogv2df_1 */
    case 5058:  /* *avx512vl_vpternlogv2df_1 */
    case 5057:  /* *avx512vl_vpternlogv2df_1 */
    case 5056:  /* *avx512vl_vpternlogv2df_1 */
    case 5055:  /* *avx512vl_vpternlogv2df_1 */
    case 5054:  /* *avx512vl_vpternlogv2df_1 */
    case 5053:  /* *avx512vl_vpternlogv2df_1 */
    case 5052:  /* *avx512vl_vpternlogv2df_1 */
    case 5051:  /* *avx512vl_vpternlogv2df_1 */
    case 5050:  /* *avx512vl_vpternlogv2df_1 */
    case 5049:  /* *avx512vl_vpternlogv2df_1 */
    case 5048:  /* *avx512vl_vpternlogv2df_1 */
    case 5047:  /* *avx512vl_vpternlogv2df_1 */
    case 5046:  /* *avx512vl_vpternlogv2df_1 */
    case 5045:  /* *avx512vl_vpternlogv2df_1 */
    case 5044:  /* *avx512vl_vpternlogv2df_1 */
    case 5043:  /* *avx512vl_vpternlogv2df_1 */
    case 5042:  /* *avx512vl_vpternlogv4df_1 */
    case 5041:  /* *avx512vl_vpternlogv4df_1 */
    case 5040:  /* *avx512vl_vpternlogv4df_1 */
    case 5039:  /* *avx512vl_vpternlogv4df_1 */
    case 5038:  /* *avx512vl_vpternlogv4df_1 */
    case 5037:  /* *avx512vl_vpternlogv4df_1 */
    case 5036:  /* *avx512vl_vpternlogv4df_1 */
    case 5035:  /* *avx512vl_vpternlogv4df_1 */
    case 5034:  /* *avx512vl_vpternlogv4df_1 */
    case 5033:  /* *avx512vl_vpternlogv4df_1 */
    case 5032:  /* *avx512vl_vpternlogv4df_1 */
    case 5031:  /* *avx512vl_vpternlogv4df_1 */
    case 5030:  /* *avx512vl_vpternlogv4df_1 */
    case 5029:  /* *avx512vl_vpternlogv4df_1 */
    case 5028:  /* *avx512vl_vpternlogv4df_1 */
    case 5027:  /* *avx512vl_vpternlogv4df_1 */
    case 5026:  /* *avx512vl_vpternlogv4df_1 */
    case 5025:  /* *avx512vl_vpternlogv4df_1 */
    case 5024:  /* *avx512vl_vpternlogv4df_1 */
    case 5023:  /* *avx512vl_vpternlogv4df_1 */
    case 5022:  /* *avx512vl_vpternlogv4df_1 */
    case 5021:  /* *avx512vl_vpternlogv4df_1 */
    case 5020:  /* *avx512vl_vpternlogv4df_1 */
    case 5019:  /* *avx512vl_vpternlogv4df_1 */
    case 5018:  /* *avx512vl_vpternlogv4df_1 */
    case 5017:  /* *avx512vl_vpternlogv4df_1 */
    case 5016:  /* *avx512vl_vpternlogv4df_1 */
    case 5015:  /* *avx512f_vpternlogv8df_1 */
    case 5014:  /* *avx512f_vpternlogv8df_1 */
    case 5013:  /* *avx512f_vpternlogv8df_1 */
    case 5012:  /* *avx512f_vpternlogv8df_1 */
    case 5011:  /* *avx512f_vpternlogv8df_1 */
    case 5010:  /* *avx512f_vpternlogv8df_1 */
    case 5009:  /* *avx512f_vpternlogv8df_1 */
    case 5008:  /* *avx512f_vpternlogv8df_1 */
    case 5007:  /* *avx512f_vpternlogv8df_1 */
    case 5006:  /* *avx512f_vpternlogv8df_1 */
    case 5005:  /* *avx512f_vpternlogv8df_1 */
    case 5004:  /* *avx512f_vpternlogv8df_1 */
    case 5003:  /* *avx512f_vpternlogv8df_1 */
    case 5002:  /* *avx512f_vpternlogv8df_1 */
    case 5001:  /* *avx512f_vpternlogv8df_1 */
    case 5000:  /* *avx512f_vpternlogv8df_1 */
    case 4999:  /* *avx512f_vpternlogv8df_1 */
    case 4998:  /* *avx512f_vpternlogv8df_1 */
    case 4997:  /* *avx512f_vpternlogv8df_1 */
    case 4996:  /* *avx512f_vpternlogv8df_1 */
    case 4995:  /* *avx512f_vpternlogv8df_1 */
    case 4994:  /* *avx512f_vpternlogv8df_1 */
    case 4993:  /* *avx512f_vpternlogv8df_1 */
    case 4992:  /* *avx512f_vpternlogv8df_1 */
    case 4991:  /* *avx512f_vpternlogv8df_1 */
    case 4990:  /* *avx512f_vpternlogv8df_1 */
    case 4989:  /* *avx512f_vpternlogv8df_1 */
    case 4988:  /* *avx512vl_vpternlogv4sf_1 */
    case 4987:  /* *avx512vl_vpternlogv4sf_1 */
    case 4986:  /* *avx512vl_vpternlogv4sf_1 */
    case 4985:  /* *avx512vl_vpternlogv4sf_1 */
    case 4984:  /* *avx512vl_vpternlogv4sf_1 */
    case 4983:  /* *avx512vl_vpternlogv4sf_1 */
    case 4982:  /* *avx512vl_vpternlogv4sf_1 */
    case 4981:  /* *avx512vl_vpternlogv4sf_1 */
    case 4980:  /* *avx512vl_vpternlogv4sf_1 */
    case 4979:  /* *avx512vl_vpternlogv4sf_1 */
    case 4978:  /* *avx512vl_vpternlogv4sf_1 */
    case 4977:  /* *avx512vl_vpternlogv4sf_1 */
    case 4976:  /* *avx512vl_vpternlogv4sf_1 */
    case 4975:  /* *avx512vl_vpternlogv4sf_1 */
    case 4974:  /* *avx512vl_vpternlogv4sf_1 */
    case 4973:  /* *avx512vl_vpternlogv4sf_1 */
    case 4972:  /* *avx512vl_vpternlogv4sf_1 */
    case 4971:  /* *avx512vl_vpternlogv4sf_1 */
    case 4970:  /* *avx512vl_vpternlogv4sf_1 */
    case 4969:  /* *avx512vl_vpternlogv4sf_1 */
    case 4968:  /* *avx512vl_vpternlogv4sf_1 */
    case 4967:  /* *avx512vl_vpternlogv4sf_1 */
    case 4966:  /* *avx512vl_vpternlogv4sf_1 */
    case 4965:  /* *avx512vl_vpternlogv4sf_1 */
    case 4964:  /* *avx512vl_vpternlogv4sf_1 */
    case 4963:  /* *avx512vl_vpternlogv4sf_1 */
    case 4962:  /* *avx512vl_vpternlogv4sf_1 */
    case 4961:  /* *avx512vl_vpternlogv8sf_1 */
    case 4960:  /* *avx512vl_vpternlogv8sf_1 */
    case 4959:  /* *avx512vl_vpternlogv8sf_1 */
    case 4958:  /* *avx512vl_vpternlogv8sf_1 */
    case 4957:  /* *avx512vl_vpternlogv8sf_1 */
    case 4956:  /* *avx512vl_vpternlogv8sf_1 */
    case 4955:  /* *avx512vl_vpternlogv8sf_1 */
    case 4954:  /* *avx512vl_vpternlogv8sf_1 */
    case 4953:  /* *avx512vl_vpternlogv8sf_1 */
    case 4952:  /* *avx512vl_vpternlogv8sf_1 */
    case 4951:  /* *avx512vl_vpternlogv8sf_1 */
    case 4950:  /* *avx512vl_vpternlogv8sf_1 */
    case 4949:  /* *avx512vl_vpternlogv8sf_1 */
    case 4948:  /* *avx512vl_vpternlogv8sf_1 */
    case 4947:  /* *avx512vl_vpternlogv8sf_1 */
    case 4946:  /* *avx512vl_vpternlogv8sf_1 */
    case 4945:  /* *avx512vl_vpternlogv8sf_1 */
    case 4944:  /* *avx512vl_vpternlogv8sf_1 */
    case 4943:  /* *avx512vl_vpternlogv8sf_1 */
    case 4942:  /* *avx512vl_vpternlogv8sf_1 */
    case 4941:  /* *avx512vl_vpternlogv8sf_1 */
    case 4940:  /* *avx512vl_vpternlogv8sf_1 */
    case 4939:  /* *avx512vl_vpternlogv8sf_1 */
    case 4938:  /* *avx512vl_vpternlogv8sf_1 */
    case 4937:  /* *avx512vl_vpternlogv8sf_1 */
    case 4936:  /* *avx512vl_vpternlogv8sf_1 */
    case 4935:  /* *avx512vl_vpternlogv8sf_1 */
    case 4934:  /* *avx512f_vpternlogv16sf_1 */
    case 4933:  /* *avx512f_vpternlogv16sf_1 */
    case 4932:  /* *avx512f_vpternlogv16sf_1 */
    case 4931:  /* *avx512f_vpternlogv16sf_1 */
    case 4930:  /* *avx512f_vpternlogv16sf_1 */
    case 4929:  /* *avx512f_vpternlogv16sf_1 */
    case 4928:  /* *avx512f_vpternlogv16sf_1 */
    case 4927:  /* *avx512f_vpternlogv16sf_1 */
    case 4926:  /* *avx512f_vpternlogv16sf_1 */
    case 4925:  /* *avx512f_vpternlogv16sf_1 */
    case 4924:  /* *avx512f_vpternlogv16sf_1 */
    case 4923:  /* *avx512f_vpternlogv16sf_1 */
    case 4922:  /* *avx512f_vpternlogv16sf_1 */
    case 4921:  /* *avx512f_vpternlogv16sf_1 */
    case 4920:  /* *avx512f_vpternlogv16sf_1 */
    case 4919:  /* *avx512f_vpternlogv16sf_1 */
    case 4918:  /* *avx512f_vpternlogv16sf_1 */
    case 4917:  /* *avx512f_vpternlogv16sf_1 */
    case 4916:  /* *avx512f_vpternlogv16sf_1 */
    case 4915:  /* *avx512f_vpternlogv16sf_1 */
    case 4914:  /* *avx512f_vpternlogv16sf_1 */
    case 4913:  /* *avx512f_vpternlogv16sf_1 */
    case 4912:  /* *avx512f_vpternlogv16sf_1 */
    case 4911:  /* *avx512f_vpternlogv16sf_1 */
    case 4910:  /* *avx512f_vpternlogv16sf_1 */
    case 4909:  /* *avx512f_vpternlogv16sf_1 */
    case 4908:  /* *avx512f_vpternlogv16sf_1 */
    case 4907:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4906:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4905:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4904:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4903:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4902:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4901:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4900:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4899:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4898:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4897:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4896:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4895:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4894:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4893:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4892:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4891:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4890:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4889:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4888:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4887:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4886:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4885:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4884:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4883:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4882:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4881:  /* *avx512fp16_vpternlogv8hf_1 */
    case 4880:  /* *avx512vl_vpternlogv16hf_1 */
    case 4879:  /* *avx512vl_vpternlogv16hf_1 */
    case 4878:  /* *avx512vl_vpternlogv16hf_1 */
    case 4877:  /* *avx512vl_vpternlogv16hf_1 */
    case 4876:  /* *avx512vl_vpternlogv16hf_1 */
    case 4875:  /* *avx512vl_vpternlogv16hf_1 */
    case 4874:  /* *avx512vl_vpternlogv16hf_1 */
    case 4873:  /* *avx512vl_vpternlogv16hf_1 */
    case 4872:  /* *avx512vl_vpternlogv16hf_1 */
    case 4871:  /* *avx512vl_vpternlogv16hf_1 */
    case 4870:  /* *avx512vl_vpternlogv16hf_1 */
    case 4869:  /* *avx512vl_vpternlogv16hf_1 */
    case 4868:  /* *avx512vl_vpternlogv16hf_1 */
    case 4867:  /* *avx512vl_vpternlogv16hf_1 */
    case 4866:  /* *avx512vl_vpternlogv16hf_1 */
    case 4865:  /* *avx512vl_vpternlogv16hf_1 */
    case 4864:  /* *avx512vl_vpternlogv16hf_1 */
    case 4863:  /* *avx512vl_vpternlogv16hf_1 */
    case 4862:  /* *avx512vl_vpternlogv16hf_1 */
    case 4861:  /* *avx512vl_vpternlogv16hf_1 */
    case 4860:  /* *avx512vl_vpternlogv16hf_1 */
    case 4859:  /* *avx512vl_vpternlogv16hf_1 */
    case 4858:  /* *avx512vl_vpternlogv16hf_1 */
    case 4857:  /* *avx512vl_vpternlogv16hf_1 */
    case 4856:  /* *avx512vl_vpternlogv16hf_1 */
    case 4855:  /* *avx512vl_vpternlogv16hf_1 */
    case 4854:  /* *avx512vl_vpternlogv16hf_1 */
    case 4853:  /* *avx512bw_vpternlogv32hf_1 */
    case 4852:  /* *avx512bw_vpternlogv32hf_1 */
    case 4851:  /* *avx512bw_vpternlogv32hf_1 */
    case 4850:  /* *avx512bw_vpternlogv32hf_1 */
    case 4849:  /* *avx512bw_vpternlogv32hf_1 */
    case 4848:  /* *avx512bw_vpternlogv32hf_1 */
    case 4847:  /* *avx512bw_vpternlogv32hf_1 */
    case 4846:  /* *avx512bw_vpternlogv32hf_1 */
    case 4845:  /* *avx512bw_vpternlogv32hf_1 */
    case 4844:  /* *avx512bw_vpternlogv32hf_1 */
    case 4843:  /* *avx512bw_vpternlogv32hf_1 */
    case 4842:  /* *avx512bw_vpternlogv32hf_1 */
    case 4841:  /* *avx512bw_vpternlogv32hf_1 */
    case 4840:  /* *avx512bw_vpternlogv32hf_1 */
    case 4839:  /* *avx512bw_vpternlogv32hf_1 */
    case 4838:  /* *avx512bw_vpternlogv32hf_1 */
    case 4837:  /* *avx512bw_vpternlogv32hf_1 */
    case 4836:  /* *avx512bw_vpternlogv32hf_1 */
    case 4835:  /* *avx512bw_vpternlogv32hf_1 */
    case 4834:  /* *avx512bw_vpternlogv32hf_1 */
    case 4833:  /* *avx512bw_vpternlogv32hf_1 */
    case 4832:  /* *avx512bw_vpternlogv32hf_1 */
    case 4831:  /* *avx512bw_vpternlogv32hf_1 */
    case 4830:  /* *avx512bw_vpternlogv32hf_1 */
    case 4829:  /* *avx512bw_vpternlogv32hf_1 */
    case 4828:  /* *avx512bw_vpternlogv32hf_1 */
    case 4827:  /* *avx512bw_vpternlogv32hf_1 */
    case 4826:  /* *avx512vl_vpternlogv2di_1 */
    case 4825:  /* *avx512vl_vpternlogv2di_1 */
    case 4824:  /* *avx512vl_vpternlogv2di_1 */
    case 4823:  /* *avx512vl_vpternlogv2di_1 */
    case 4822:  /* *avx512vl_vpternlogv2di_1 */
    case 4821:  /* *avx512vl_vpternlogv2di_1 */
    case 4820:  /* *avx512vl_vpternlogv2di_1 */
    case 4819:  /* *avx512vl_vpternlogv2di_1 */
    case 4818:  /* *avx512vl_vpternlogv2di_1 */
    case 4817:  /* *avx512vl_vpternlogv2di_1 */
    case 4816:  /* *avx512vl_vpternlogv2di_1 */
    case 4815:  /* *avx512vl_vpternlogv2di_1 */
    case 4814:  /* *avx512vl_vpternlogv2di_1 */
    case 4813:  /* *avx512vl_vpternlogv2di_1 */
    case 4812:  /* *avx512vl_vpternlogv2di_1 */
    case 4811:  /* *avx512vl_vpternlogv2di_1 */
    case 4810:  /* *avx512vl_vpternlogv2di_1 */
    case 4809:  /* *avx512vl_vpternlogv2di_1 */
    case 4808:  /* *avx512vl_vpternlogv2di_1 */
    case 4807:  /* *avx512vl_vpternlogv2di_1 */
    case 4806:  /* *avx512vl_vpternlogv2di_1 */
    case 4805:  /* *avx512vl_vpternlogv2di_1 */
    case 4804:  /* *avx512vl_vpternlogv2di_1 */
    case 4803:  /* *avx512vl_vpternlogv2di_1 */
    case 4802:  /* *avx512vl_vpternlogv2di_1 */
    case 4801:  /* *avx512vl_vpternlogv2di_1 */
    case 4800:  /* *avx512vl_vpternlogv2di_1 */
    case 4799:  /* *avx512vl_vpternlogv4di_1 */
    case 4798:  /* *avx512vl_vpternlogv4di_1 */
    case 4797:  /* *avx512vl_vpternlogv4di_1 */
    case 4796:  /* *avx512vl_vpternlogv4di_1 */
    case 4795:  /* *avx512vl_vpternlogv4di_1 */
    case 4794:  /* *avx512vl_vpternlogv4di_1 */
    case 4793:  /* *avx512vl_vpternlogv4di_1 */
    case 4792:  /* *avx512vl_vpternlogv4di_1 */
    case 4791:  /* *avx512vl_vpternlogv4di_1 */
    case 4790:  /* *avx512vl_vpternlogv4di_1 */
    case 4789:  /* *avx512vl_vpternlogv4di_1 */
    case 4788:  /* *avx512vl_vpternlogv4di_1 */
    case 4787:  /* *avx512vl_vpternlogv4di_1 */
    case 4786:  /* *avx512vl_vpternlogv4di_1 */
    case 4785:  /* *avx512vl_vpternlogv4di_1 */
    case 4784:  /* *avx512vl_vpternlogv4di_1 */
    case 4783:  /* *avx512vl_vpternlogv4di_1 */
    case 4782:  /* *avx512vl_vpternlogv4di_1 */
    case 4781:  /* *avx512vl_vpternlogv4di_1 */
    case 4780:  /* *avx512vl_vpternlogv4di_1 */
    case 4779:  /* *avx512vl_vpternlogv4di_1 */
    case 4778:  /* *avx512vl_vpternlogv4di_1 */
    case 4777:  /* *avx512vl_vpternlogv4di_1 */
    case 4776:  /* *avx512vl_vpternlogv4di_1 */
    case 4775:  /* *avx512vl_vpternlogv4di_1 */
    case 4774:  /* *avx512vl_vpternlogv4di_1 */
    case 4773:  /* *avx512vl_vpternlogv4di_1 */
    case 4772:  /* *avx512f_vpternlogv8di_1 */
    case 4771:  /* *avx512f_vpternlogv8di_1 */
    case 4770:  /* *avx512f_vpternlogv8di_1 */
    case 4769:  /* *avx512f_vpternlogv8di_1 */
    case 4768:  /* *avx512f_vpternlogv8di_1 */
    case 4767:  /* *avx512f_vpternlogv8di_1 */
    case 4766:  /* *avx512f_vpternlogv8di_1 */
    case 4765:  /* *avx512f_vpternlogv8di_1 */
    case 4764:  /* *avx512f_vpternlogv8di_1 */
    case 4763:  /* *avx512f_vpternlogv8di_1 */
    case 4762:  /* *avx512f_vpternlogv8di_1 */
    case 4761:  /* *avx512f_vpternlogv8di_1 */
    case 4760:  /* *avx512f_vpternlogv8di_1 */
    case 4759:  /* *avx512f_vpternlogv8di_1 */
    case 4758:  /* *avx512f_vpternlogv8di_1 */
    case 4757:  /* *avx512f_vpternlogv8di_1 */
    case 4756:  /* *avx512f_vpternlogv8di_1 */
    case 4755:  /* *avx512f_vpternlogv8di_1 */
    case 4754:  /* *avx512f_vpternlogv8di_1 */
    case 4753:  /* *avx512f_vpternlogv8di_1 */
    case 4752:  /* *avx512f_vpternlogv8di_1 */
    case 4751:  /* *avx512f_vpternlogv8di_1 */
    case 4750:  /* *avx512f_vpternlogv8di_1 */
    case 4749:  /* *avx512f_vpternlogv8di_1 */
    case 4748:  /* *avx512f_vpternlogv8di_1 */
    case 4747:  /* *avx512f_vpternlogv8di_1 */
    case 4746:  /* *avx512f_vpternlogv8di_1 */
    case 4745:  /* *avx512vl_vpternlogv4si_1 */
    case 4744:  /* *avx512vl_vpternlogv4si_1 */
    case 4743:  /* *avx512vl_vpternlogv4si_1 */
    case 4742:  /* *avx512vl_vpternlogv4si_1 */
    case 4741:  /* *avx512vl_vpternlogv4si_1 */
    case 4740:  /* *avx512vl_vpternlogv4si_1 */
    case 4739:  /* *avx512vl_vpternlogv4si_1 */
    case 4738:  /* *avx512vl_vpternlogv4si_1 */
    case 4737:  /* *avx512vl_vpternlogv4si_1 */
    case 4736:  /* *avx512vl_vpternlogv4si_1 */
    case 4735:  /* *avx512vl_vpternlogv4si_1 */
    case 4734:  /* *avx512vl_vpternlogv4si_1 */
    case 4733:  /* *avx512vl_vpternlogv4si_1 */
    case 4732:  /* *avx512vl_vpternlogv4si_1 */
    case 4731:  /* *avx512vl_vpternlogv4si_1 */
    case 4730:  /* *avx512vl_vpternlogv4si_1 */
    case 4729:  /* *avx512vl_vpternlogv4si_1 */
    case 4728:  /* *avx512vl_vpternlogv4si_1 */
    case 4727:  /* *avx512vl_vpternlogv4si_1 */
    case 4726:  /* *avx512vl_vpternlogv4si_1 */
    case 4725:  /* *avx512vl_vpternlogv4si_1 */
    case 4724:  /* *avx512vl_vpternlogv4si_1 */
    case 4723:  /* *avx512vl_vpternlogv4si_1 */
    case 4722:  /* *avx512vl_vpternlogv4si_1 */
    case 4721:  /* *avx512vl_vpternlogv4si_1 */
    case 4720:  /* *avx512vl_vpternlogv4si_1 */
    case 4719:  /* *avx512vl_vpternlogv4si_1 */
    case 4718:  /* *avx512vl_vpternlogv8si_1 */
    case 4717:  /* *avx512vl_vpternlogv8si_1 */
    case 4716:  /* *avx512vl_vpternlogv8si_1 */
    case 4715:  /* *avx512vl_vpternlogv8si_1 */
    case 4714:  /* *avx512vl_vpternlogv8si_1 */
    case 4713:  /* *avx512vl_vpternlogv8si_1 */
    case 4712:  /* *avx512vl_vpternlogv8si_1 */
    case 4711:  /* *avx512vl_vpternlogv8si_1 */
    case 4710:  /* *avx512vl_vpternlogv8si_1 */
    case 4709:  /* *avx512vl_vpternlogv8si_1 */
    case 4708:  /* *avx512vl_vpternlogv8si_1 */
    case 4707:  /* *avx512vl_vpternlogv8si_1 */
    case 4706:  /* *avx512vl_vpternlogv8si_1 */
    case 4705:  /* *avx512vl_vpternlogv8si_1 */
    case 4704:  /* *avx512vl_vpternlogv8si_1 */
    case 4703:  /* *avx512vl_vpternlogv8si_1 */
    case 4702:  /* *avx512vl_vpternlogv8si_1 */
    case 4701:  /* *avx512vl_vpternlogv8si_1 */
    case 4700:  /* *avx512vl_vpternlogv8si_1 */
    case 4699:  /* *avx512vl_vpternlogv8si_1 */
    case 4698:  /* *avx512vl_vpternlogv8si_1 */
    case 4697:  /* *avx512vl_vpternlogv8si_1 */
    case 4696:  /* *avx512vl_vpternlogv8si_1 */
    case 4695:  /* *avx512vl_vpternlogv8si_1 */
    case 4694:  /* *avx512vl_vpternlogv8si_1 */
    case 4693:  /* *avx512vl_vpternlogv8si_1 */
    case 4692:  /* *avx512vl_vpternlogv8si_1 */
    case 4691:  /* *avx512f_vpternlogv16si_1 */
    case 4690:  /* *avx512f_vpternlogv16si_1 */
    case 4689:  /* *avx512f_vpternlogv16si_1 */
    case 4688:  /* *avx512f_vpternlogv16si_1 */
    case 4687:  /* *avx512f_vpternlogv16si_1 */
    case 4686:  /* *avx512f_vpternlogv16si_1 */
    case 4685:  /* *avx512f_vpternlogv16si_1 */
    case 4684:  /* *avx512f_vpternlogv16si_1 */
    case 4683:  /* *avx512f_vpternlogv16si_1 */
    case 4682:  /* *avx512f_vpternlogv16si_1 */
    case 4681:  /* *avx512f_vpternlogv16si_1 */
    case 4680:  /* *avx512f_vpternlogv16si_1 */
    case 4679:  /* *avx512f_vpternlogv16si_1 */
    case 4678:  /* *avx512f_vpternlogv16si_1 */
    case 4677:  /* *avx512f_vpternlogv16si_1 */
    case 4676:  /* *avx512f_vpternlogv16si_1 */
    case 4675:  /* *avx512f_vpternlogv16si_1 */
    case 4674:  /* *avx512f_vpternlogv16si_1 */
    case 4673:  /* *avx512f_vpternlogv16si_1 */
    case 4672:  /* *avx512f_vpternlogv16si_1 */
    case 4671:  /* *avx512f_vpternlogv16si_1 */
    case 4670:  /* *avx512f_vpternlogv16si_1 */
    case 4669:  /* *avx512f_vpternlogv16si_1 */
    case 4668:  /* *avx512f_vpternlogv16si_1 */
    case 4667:  /* *avx512f_vpternlogv16si_1 */
    case 4666:  /* *avx512f_vpternlogv16si_1 */
    case 4665:  /* *avx512f_vpternlogv16si_1 */
    case 4664:  /* *avx512vl_vpternlogv8hi_1 */
    case 4663:  /* *avx512vl_vpternlogv8hi_1 */
    case 4662:  /* *avx512vl_vpternlogv8hi_1 */
    case 4661:  /* *avx512vl_vpternlogv8hi_1 */
    case 4660:  /* *avx512vl_vpternlogv8hi_1 */
    case 4659:  /* *avx512vl_vpternlogv8hi_1 */
    case 4658:  /* *avx512vl_vpternlogv8hi_1 */
    case 4657:  /* *avx512vl_vpternlogv8hi_1 */
    case 4656:  /* *avx512vl_vpternlogv8hi_1 */
    case 4655:  /* *avx512vl_vpternlogv8hi_1 */
    case 4654:  /* *avx512vl_vpternlogv8hi_1 */
    case 4653:  /* *avx512vl_vpternlogv8hi_1 */
    case 4652:  /* *avx512vl_vpternlogv8hi_1 */
    case 4651:  /* *avx512vl_vpternlogv8hi_1 */
    case 4650:  /* *avx512vl_vpternlogv8hi_1 */
    case 4649:  /* *avx512vl_vpternlogv8hi_1 */
    case 4648:  /* *avx512vl_vpternlogv8hi_1 */
    case 4647:  /* *avx512vl_vpternlogv8hi_1 */
    case 4646:  /* *avx512vl_vpternlogv8hi_1 */
    case 4645:  /* *avx512vl_vpternlogv8hi_1 */
    case 4644:  /* *avx512vl_vpternlogv8hi_1 */
    case 4643:  /* *avx512vl_vpternlogv8hi_1 */
    case 4642:  /* *avx512vl_vpternlogv8hi_1 */
    case 4641:  /* *avx512vl_vpternlogv8hi_1 */
    case 4640:  /* *avx512vl_vpternlogv8hi_1 */
    case 4639:  /* *avx512vl_vpternlogv8hi_1 */
    case 4638:  /* *avx512vl_vpternlogv8hi_1 */
    case 4637:  /* *avx512vl_vpternlogv16hi_1 */
    case 4636:  /* *avx512vl_vpternlogv16hi_1 */
    case 4635:  /* *avx512vl_vpternlogv16hi_1 */
    case 4634:  /* *avx512vl_vpternlogv16hi_1 */
    case 4633:  /* *avx512vl_vpternlogv16hi_1 */
    case 4632:  /* *avx512vl_vpternlogv16hi_1 */
    case 4631:  /* *avx512vl_vpternlogv16hi_1 */
    case 4630:  /* *avx512vl_vpternlogv16hi_1 */
    case 4629:  /* *avx512vl_vpternlogv16hi_1 */
    case 4628:  /* *avx512vl_vpternlogv16hi_1 */
    case 4627:  /* *avx512vl_vpternlogv16hi_1 */
    case 4626:  /* *avx512vl_vpternlogv16hi_1 */
    case 4625:  /* *avx512vl_vpternlogv16hi_1 */
    case 4624:  /* *avx512vl_vpternlogv16hi_1 */
    case 4623:  /* *avx512vl_vpternlogv16hi_1 */
    case 4622:  /* *avx512vl_vpternlogv16hi_1 */
    case 4621:  /* *avx512vl_vpternlogv16hi_1 */
    case 4620:  /* *avx512vl_vpternlogv16hi_1 */
    case 4619:  /* *avx512vl_vpternlogv16hi_1 */
    case 4618:  /* *avx512vl_vpternlogv16hi_1 */
    case 4617:  /* *avx512vl_vpternlogv16hi_1 */
    case 4616:  /* *avx512vl_vpternlogv16hi_1 */
    case 4615:  /* *avx512vl_vpternlogv16hi_1 */
    case 4614:  /* *avx512vl_vpternlogv16hi_1 */
    case 4613:  /* *avx512vl_vpternlogv16hi_1 */
    case 4612:  /* *avx512vl_vpternlogv16hi_1 */
    case 4611:  /* *avx512vl_vpternlogv16hi_1 */
    case 4610:  /* *avx512bw_vpternlogv32hi_1 */
    case 4609:  /* *avx512bw_vpternlogv32hi_1 */
    case 4608:  /* *avx512bw_vpternlogv32hi_1 */
    case 4607:  /* *avx512bw_vpternlogv32hi_1 */
    case 4606:  /* *avx512bw_vpternlogv32hi_1 */
    case 4605:  /* *avx512bw_vpternlogv32hi_1 */
    case 4604:  /* *avx512bw_vpternlogv32hi_1 */
    case 4603:  /* *avx512bw_vpternlogv32hi_1 */
    case 4602:  /* *avx512bw_vpternlogv32hi_1 */
    case 4601:  /* *avx512bw_vpternlogv32hi_1 */
    case 4600:  /* *avx512bw_vpternlogv32hi_1 */
    case 4599:  /* *avx512bw_vpternlogv32hi_1 */
    case 4598:  /* *avx512bw_vpternlogv32hi_1 */
    case 4597:  /* *avx512bw_vpternlogv32hi_1 */
    case 4596:  /* *avx512bw_vpternlogv32hi_1 */
    case 4595:  /* *avx512bw_vpternlogv32hi_1 */
    case 4594:  /* *avx512bw_vpternlogv32hi_1 */
    case 4593:  /* *avx512bw_vpternlogv32hi_1 */
    case 4592:  /* *avx512bw_vpternlogv32hi_1 */
    case 4591:  /* *avx512bw_vpternlogv32hi_1 */
    case 4590:  /* *avx512bw_vpternlogv32hi_1 */
    case 4589:  /* *avx512bw_vpternlogv32hi_1 */
    case 4588:  /* *avx512bw_vpternlogv32hi_1 */
    case 4587:  /* *avx512bw_vpternlogv32hi_1 */
    case 4586:  /* *avx512bw_vpternlogv32hi_1 */
    case 4585:  /* *avx512bw_vpternlogv32hi_1 */
    case 4584:  /* *avx512bw_vpternlogv32hi_1 */
    case 4583:  /* *avx512vl_vpternlogv16qi_1 */
    case 4582:  /* *avx512vl_vpternlogv16qi_1 */
    case 4581:  /* *avx512vl_vpternlogv16qi_1 */
    case 4580:  /* *avx512vl_vpternlogv16qi_1 */
    case 4579:  /* *avx512vl_vpternlogv16qi_1 */
    case 4578:  /* *avx512vl_vpternlogv16qi_1 */
    case 4577:  /* *avx512vl_vpternlogv16qi_1 */
    case 4576:  /* *avx512vl_vpternlogv16qi_1 */
    case 4575:  /* *avx512vl_vpternlogv16qi_1 */
    case 4574:  /* *avx512vl_vpternlogv16qi_1 */
    case 4573:  /* *avx512vl_vpternlogv16qi_1 */
    case 4572:  /* *avx512vl_vpternlogv16qi_1 */
    case 4571:  /* *avx512vl_vpternlogv16qi_1 */
    case 4570:  /* *avx512vl_vpternlogv16qi_1 */
    case 4569:  /* *avx512vl_vpternlogv16qi_1 */
    case 4568:  /* *avx512vl_vpternlogv16qi_1 */
    case 4567:  /* *avx512vl_vpternlogv16qi_1 */
    case 4566:  /* *avx512vl_vpternlogv16qi_1 */
    case 4565:  /* *avx512vl_vpternlogv16qi_1 */
    case 4564:  /* *avx512vl_vpternlogv16qi_1 */
    case 4563:  /* *avx512vl_vpternlogv16qi_1 */
    case 4562:  /* *avx512vl_vpternlogv16qi_1 */
    case 4561:  /* *avx512vl_vpternlogv16qi_1 */
    case 4560:  /* *avx512vl_vpternlogv16qi_1 */
    case 4559:  /* *avx512vl_vpternlogv16qi_1 */
    case 4558:  /* *avx512vl_vpternlogv16qi_1 */
    case 4557:  /* *avx512vl_vpternlogv16qi_1 */
    case 4556:  /* *avx512vl_vpternlogv32qi_1 */
    case 4555:  /* *avx512vl_vpternlogv32qi_1 */
    case 4554:  /* *avx512vl_vpternlogv32qi_1 */
    case 4553:  /* *avx512vl_vpternlogv32qi_1 */
    case 4552:  /* *avx512vl_vpternlogv32qi_1 */
    case 4551:  /* *avx512vl_vpternlogv32qi_1 */
    case 4550:  /* *avx512vl_vpternlogv32qi_1 */
    case 4549:  /* *avx512vl_vpternlogv32qi_1 */
    case 4548:  /* *avx512vl_vpternlogv32qi_1 */
    case 4547:  /* *avx512vl_vpternlogv32qi_1 */
    case 4546:  /* *avx512vl_vpternlogv32qi_1 */
    case 4545:  /* *avx512vl_vpternlogv32qi_1 */
    case 4544:  /* *avx512vl_vpternlogv32qi_1 */
    case 4543:  /* *avx512vl_vpternlogv32qi_1 */
    case 4542:  /* *avx512vl_vpternlogv32qi_1 */
    case 4541:  /* *avx512vl_vpternlogv32qi_1 */
    case 4540:  /* *avx512vl_vpternlogv32qi_1 */
    case 4539:  /* *avx512vl_vpternlogv32qi_1 */
    case 4538:  /* *avx512vl_vpternlogv32qi_1 */
    case 4537:  /* *avx512vl_vpternlogv32qi_1 */
    case 4536:  /* *avx512vl_vpternlogv32qi_1 */
    case 4535:  /* *avx512vl_vpternlogv32qi_1 */
    case 4534:  /* *avx512vl_vpternlogv32qi_1 */
    case 4533:  /* *avx512vl_vpternlogv32qi_1 */
    case 4532:  /* *avx512vl_vpternlogv32qi_1 */
    case 4531:  /* *avx512vl_vpternlogv32qi_1 */
    case 4530:  /* *avx512vl_vpternlogv32qi_1 */
    case 4529:  /* *avx512bw_vpternlogv64qi_1 */
    case 4528:  /* *avx512bw_vpternlogv64qi_1 */
    case 4527:  /* *avx512bw_vpternlogv64qi_1 */
    case 4526:  /* *avx512bw_vpternlogv64qi_1 */
    case 4525:  /* *avx512bw_vpternlogv64qi_1 */
    case 4524:  /* *avx512bw_vpternlogv64qi_1 */
    case 4523:  /* *avx512bw_vpternlogv64qi_1 */
    case 4522:  /* *avx512bw_vpternlogv64qi_1 */
    case 4521:  /* *avx512bw_vpternlogv64qi_1 */
    case 4520:  /* *avx512bw_vpternlogv64qi_1 */
    case 4519:  /* *avx512bw_vpternlogv64qi_1 */
    case 4518:  /* *avx512bw_vpternlogv64qi_1 */
    case 4517:  /* *avx512bw_vpternlogv64qi_1 */
    case 4516:  /* *avx512bw_vpternlogv64qi_1 */
    case 4515:  /* *avx512bw_vpternlogv64qi_1 */
    case 4514:  /* *avx512bw_vpternlogv64qi_1 */
    case 4513:  /* *avx512bw_vpternlogv64qi_1 */
    case 4512:  /* *avx512bw_vpternlogv64qi_1 */
    case 4511:  /* *avx512bw_vpternlogv64qi_1 */
    case 4510:  /* *avx512bw_vpternlogv64qi_1 */
    case 4509:  /* *avx512bw_vpternlogv64qi_1 */
    case 4508:  /* *avx512bw_vpternlogv64qi_1 */
    case 4507:  /* *avx512bw_vpternlogv64qi_1 */
    case 4506:  /* *avx512bw_vpternlogv64qi_1 */
    case 4505:  /* *avx512bw_vpternlogv64qi_1 */
    case 4504:  /* *avx512bw_vpternlogv64qi_1 */
    case 4503:  /* *avx512bw_vpternlogv64qi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 5922:  /* avx512vl_fixupimmv2df_maskz_1 */
    case 5918:  /* avx512vl_fixupimmv4df_maskz_1 */
    case 5914:  /* avx512f_fixupimmv8df_maskz_1 */
    case 5910:  /* avx512vl_fixupimmv4sf_maskz_1 */
    case 5906:  /* avx512vl_fixupimmv8sf_maskz_1 */
    case 5902:  /* avx512f_fixupimmv16sf_maskz_1 */
    case 4481:  /* avx512vl_vternlogv2di_maskz_1 */
    case 4479:  /* avx512vl_vternlogv4di_maskz_1 */
    case 4477:  /* avx512f_vternlogv8di_maskz_1 */
    case 4475:  /* avx512vl_vternlogv4si_maskz_1 */
    case 4473:  /* avx512vl_vternlogv8si_maskz_1 */
    case 4471:  /* avx512f_vternlogv16si_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7808:  /* xop_vpermil2v2df3 */
    case 7807:  /* xop_vpermil2v4df3 */
    case 7806:  /* xop_vpermil2v4sf3 */
    case 7805:  /* xop_vpermil2v8sf3 */
    case 7387:  /* sse4a_insertqi */
    case 5920:  /* avx512vl_fixupimmv2df */
    case 5916:  /* avx512vl_fixupimmv4df */
    case 5912:  /* avx512f_fixupimmv8df */
    case 5908:  /* avx512vl_fixupimmv4sf */
    case 5904:  /* avx512vl_fixupimmv8sf */
    case 5900:  /* avx512f_fixupimmv16sf */
    case 4502:  /* *avx512vl_vternlogv2df_all */
    case 4501:  /* *avx512vl_vternlogv4df_all */
    case 4500:  /* *avx512f_vternlogv8df_all */
    case 4499:  /* *avx512vl_vternlogv4sf_all */
    case 4498:  /* *avx512vl_vternlogv8sf_all */
    case 4497:  /* *avx512f_vternlogv16sf_all */
    case 4496:  /* *avx512fp16_vternlogv8hf_all */
    case 4495:  /* *avx512vl_vternlogv16hf_all */
    case 4494:  /* *avx512bw_vternlogv32hf_all */
    case 4493:  /* *avx512vl_vternlogv2di_all */
    case 4492:  /* *avx512vl_vternlogv4di_all */
    case 4491:  /* *avx512f_vternlogv8di_all */
    case 4490:  /* *avx512vl_vternlogv4si_all */
    case 4489:  /* *avx512vl_vternlogv8si_all */
    case 4488:  /* *avx512f_vternlogv16si_all */
    case 4487:  /* *avx512vl_vternlogv8hi_all */
    case 4486:  /* *avx512vl_vternlogv16hi_all */
    case 4485:  /* *avx512bw_vternlogv32hi_all */
    case 4484:  /* *avx512vl_vternlogv16qi_all */
    case 4483:  /* *avx512vl_vternlogv32qi_all */
    case 4482:  /* *avx512bw_vternlogv64qi_all */
    case 4480:  /* avx512vl_vternlogv2di */
    case 4478:  /* avx512vl_vternlogv4di */
    case 4476:  /* avx512f_vternlogv8di */
    case 4474:  /* avx512vl_vternlogv4si */
    case 4472:  /* avx512vl_vternlogv8si */
    case 4470:  /* avx512f_vternlogv16si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 3));
      break;

    case 5879:  /* avx512f_sgetexpv2df_mask_round */
    case 5875:  /* avx512f_sgetexpv4sf_mask_round */
    case 5871:  /* avx512f_sgetexpv8hf_mask_round */
    case 4433:  /* avx512f_vmscalefv2df_mask_round */
    case 4429:  /* avx512f_vmscalefv4sf_mask_round */
    case 4425:  /* avx512f_vmscalefv8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5877:  /* avx512f_sgetexpv2df_mask */
    case 5873:  /* avx512f_sgetexpv4sf_mask */
    case 5869:  /* avx512f_sgetexpv8hf_mask */
    case 4432:  /* avx512f_vmscalefv2df_mask */
    case 4428:  /* avx512f_vmscalefv4sf_mask */
    case 4424:  /* avx512f_vmscalefv8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 7888:  /* avx2_permv4df_1_mask */
    case 7886:  /* avx2_permv4di_1_mask */
    case 7182:  /* sse2_pshuflw_1_mask */
    case 7176:  /* sse2_pshufd_1_mask */
    case 4347:  /* avx512f_vextracti32x4_1_mask */
    case 4346:  /* avx512f_vextractf32x4_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (pat, 1), 1));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4343:  /* avx512dq_vextracti64x2_1_mask */
    case 4342:  /* avx512dq_vextractf64x2_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4337:  /* sse4_1_insertps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 7226:  /* vec_setv4di_0 */
    case 7225:  /* vec_setv8di_0 */
    case 7189:  /* sse2_loadld */
    case 6035:  /* vec_setv4df_0 */
    case 6034:  /* vec_setv8df_0 */
    case 4338:  /* vec_setv2df_0 */
    case 4332:  /* vec_setv16sf_0 */
    case 4331:  /* vec_setv16si_0 */
    case 4330:  /* vec_setv8sf_0 */
    case 4329:  /* vec_setv8si_0 */
    case 4318:  /* vec_setv32bf_0 */
    case 4317:  /* vec_setv16bf_0 */
    case 4316:  /* vec_setv32hf_0 */
    case 4315:  /* vec_setv16hf_0 */
    case 4314:  /* vec_setv32hi_0 */
    case 4313:  /* vec_setv16hi_0 */
    case 4312:  /* vec_setv8bf_0 */
    case 4311:  /* vec_setv8hf_0 */
    case 4310:  /* vec_setv8hi_0 */
    case 4309:  /* vec_setv4sf_0 */
    case 4308:  /* vec_setv4si_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 8184:  /* vec_set_lo_v32qi */
    case 8180:  /* vec_set_lo_v16bf */
    case 8179:  /* vec_set_lo_v16hf */
    case 8178:  /* vec_set_lo_v16hi */
    case 8172:  /* vec_set_lo_v8sf */
    case 8170:  /* vec_set_lo_v8si */
    case 8164:  /* vec_set_lo_v4df */
    case 8162:  /* vec_set_lo_v4di */
    case 7141:  /* vec_set_lo_v8di */
    case 7139:  /* vec_set_lo_v8df */
    case 7133:  /* vec_set_lo_v16si */
    case 7131:  /* vec_set_lo_v16sf */
    case 6028:  /* sse2_loadlpd */
    case 4296:  /* sse_loadlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 7149:  /* *avx512dq_shuf_f64x2_1 */
    case 7147:  /* *avx512dq_shuf_i64x2_1 */
    case 6006:  /* avx_shufpd256_1 */
    case 4292:  /* sse_shufps_v4sf */
    case 4291:  /* sse_shufps_v4si */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 7150:  /* avx512dq_shuf_f64x2_1_mask */
    case 7148:  /* avx512dq_shuf_i64x2_1_mask */
    case 6007:  /* avx_shufpd256_1_mask */
    case 4290:  /* sse_shufps_v4sf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XEXP (XEXP (pat, 1), 1));
      ro[8] = *(ro_loc[8] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7162:  /* avx512vl_shuf_f32x4_1_mask */
    case 7160:  /* avx512vl_shuf_i32x4_1_mask */
    case 7154:  /* avx512f_shuf_i64x2_1_mask */
    case 7152:  /* avx512f_shuf_f64x2_1_mask */
    case 6005:  /* avx512f_shufpd512_1_mask */
    case 4289:  /* avx_shufps256_1_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 7));
      ro[11] = *(ro_loc[11] = &XEXP (XEXP (pat, 1), 1));
      ro[12] = *(ro_loc[12] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7161:  /* avx512vl_shuf_f32x4_1 */
    case 7159:  /* avx512vl_shuf_i32x4_1 */
    case 7153:  /* avx512f_shuf_i64x2_1 */
    case 7151:  /* avx512f_shuf_f64x2_1 */
    case 6004:  /* avx512f_shufpd512_1 */
    case 4288:  /* avx_shufps256_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      ro[7] = *(ro_loc[7] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 4));
      ro[8] = *(ro_loc[8] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 5));
      ro[9] = *(ro_loc[9] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 6));
      ro[10] = *(ro_loc[10] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 7));
      break;

    case 4417:  /* avx_movddup256_mask */
    case 4413:  /* avx512f_movddup512_mask */
    case 4287:  /* avx512f_movsldup512_mask */
    case 4285:  /* sse3_movsldup_mask */
    case 4283:  /* avx_movsldup256_mask */
    case 4281:  /* avx512f_movshdup512_mask */
    case 4279:  /* sse3_movshdup_mask */
    case 4277:  /* avx_movshdup256_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 4416:  /* avx_movddup256 */
    case 4412:  /* avx512f_movddup512 */
    case 4286:  /* *avx512f_movsldup512 */
    case 4284:  /* sse3_movsldup */
    case 4282:  /* avx_movsldup256 */
    case 4280:  /* *avx512f_movshdup512 */
    case 4278:  /* sse3_movshdup */
    case 4276:  /* avx_movshdup256 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 7112:  /* vec_interleave_lowv4si_mask */
    case 7110:  /* avx512f_interleave_lowv16si_mask */
    case 7108:  /* avx2_interleave_lowv8si_mask */
    case 7106:  /* vec_interleave_highv4si_mask */
    case 7104:  /* avx512f_interleave_highv16si_mask */
    case 7102:  /* avx2_interleave_highv8si_mask */
    case 7100:  /* vec_interleave_lowv8bf_mask */
    case 7098:  /* vec_interleave_lowv8hf_mask */
    case 7096:  /* vec_interleave_lowv8hi_mask */
    case 7094:  /* avx2_interleave_lowv16bf_mask */
    case 7092:  /* avx2_interleave_lowv16hf_mask */
    case 7090:  /* avx2_interleave_lowv16hi_mask */
    case 7088:  /* avx512bw_interleave_lowv32bf_mask */
    case 7086:  /* avx512bw_interleave_lowv32hf_mask */
    case 7084:  /* avx512bw_interleave_lowv32hi_mask */
    case 7082:  /* vec_interleave_highv8bf_mask */
    case 7080:  /* vec_interleave_highv8hf_mask */
    case 7078:  /* vec_interleave_highv8hi_mask */
    case 7076:  /* avx2_interleave_highv16bf_mask */
    case 7074:  /* avx2_interleave_highv16hf_mask */
    case 7072:  /* avx2_interleave_highv16hi_mask */
    case 7070:  /* avx512bw_interleave_highv32bf_mask */
    case 7068:  /* avx512bw_interleave_highv32hf_mask */
    case 7066:  /* avx512bw_interleave_highv32hi_mask */
    case 7064:  /* vec_interleave_lowv16qi_mask */
    case 7062:  /* avx2_interleave_lowv32qi_mask */
    case 7060:  /* avx512bw_interleave_lowv64qi_mask */
    case 7058:  /* vec_interleave_highv16qi_mask */
    case 7056:  /* avx2_interleave_highv32qi_mask */
    case 7054:  /* avx512bw_interleave_highv64qi_mask */
    case 6020:  /* vec_interleave_lowv2di_mask */
    case 6018:  /* avx512f_interleave_lowv8di_mask */
    case 6016:  /* avx2_interleave_lowv4di_mask */
    case 6014:  /* vec_interleave_highv2di_mask */
    case 6012:  /* avx512f_interleave_highv8di_mask */
    case 6010:  /* avx2_interleave_highv4di_mask */
    case 4420:  /* avx512vl_unpcklpd128_mask */
    case 4419:  /* avx_unpcklpd256_mask */
    case 4415:  /* avx512f_unpcklpd512_mask */
    case 4410:  /* avx512vl_unpckhpd128_mask */
    case 4409:  /* avx_unpckhpd256_mask */
    case 4407:  /* avx512f_unpckhpd512_mask */
    case 4274:  /* unpcklps128_mask */
    case 4273:  /* avx_unpcklps256_mask */
    case 4271:  /* avx512f_unpcklps512_mask */
    case 4269:  /* vec_interleave_highv4sf_mask */
    case 4267:  /* avx_unpckhps256_mask */
    case 4265:  /* avx512f_unpckhps512_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4257:  /* *avx512vl_cvtmask2qv2di */
    case 4256:  /* *avx512vl_cvtmask2qv4di */
    case 4255:  /* *avx512f_cvtmask2qv8di */
    case 4254:  /* *avx512vl_cvtmask2dv4si */
    case 4253:  /* *avx512vl_cvtmask2dv8si */
    case 4252:  /* *avx512f_cvtmask2dv16si */
    case 4251:  /* *avx512vl_cvtmask2wv8hi */
    case 4250:  /* *avx512vl_cvtmask2wv16hi */
    case 4249:  /* *avx512bw_cvtmask2wv32hi */
    case 4248:  /* *avx512vl_cvtmask2bv32qi */
    case 4247:  /* *avx512vl_cvtmask2bv16qi */
    case 4246:  /* *avx512bw_cvtmask2bv64qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 2));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4214:  /* sse2_cvtss2sd_mask_round */
    case 4209:  /* sse2_cvtsd2ss_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4213:  /* sse2_cvtss2sd_mask */
    case 4208:  /* sse2_cvtsd2ss_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 6298:  /* *avx512f_us_truncatev8div16qi2_mask_1 */
    case 6297:  /* *avx512f_truncatev8div16qi2_mask_1 */
    case 6296:  /* *avx512f_ss_truncatev8div16qi2_mask_1 */
    case 6277:  /* *avx512vl_us_truncatev2div2si2_mask_1 */
    case 6276:  /* *avx512vl_truncatev2div2si2_mask_1 */
    case 6275:  /* *avx512vl_ss_truncatev2div2si2_mask_1 */
    case 6255:  /* *avx512vl_us_truncatev2div2hi2_mask_1 */
    case 6254:  /* *avx512vl_truncatev2div2hi2_mask_1 */
    case 6253:  /* *avx512vl_ss_truncatev2div2hi2_mask_1 */
    case 6231:  /* *avx512vl_us_truncatev4div4hi2_mask_1 */
    case 6230:  /* *avx512vl_truncatev4div4hi2_mask_1 */
    case 6229:  /* *avx512vl_ss_truncatev4div4hi2_mask_1 */
    case 6228:  /* *avx512vl_us_truncatev4siv4hi2_mask_1 */
    case 6227:  /* *avx512vl_truncatev4siv4hi2_mask_1 */
    case 6226:  /* *avx512vl_ss_truncatev4siv4hi2_mask_1 */
    case 6185:  /* *avx512vl_us_truncatev8siv8qi2_mask_1 */
    case 6184:  /* *avx512vl_truncatev8siv8qi2_mask_1 */
    case 6183:  /* *avx512vl_ss_truncatev8siv8qi2_mask_1 */
    case 6182:  /* *avx512vl_us_truncatev8hiv8qi2_mask_1 */
    case 6181:  /* *avx512vl_truncatev8hiv8qi2_mask_1 */
    case 6180:  /* *avx512vl_ss_truncatev8hiv8qi2_mask_1 */
    case 6149:  /* *avx512vl_us_truncatev4div4qi2_mask_1 */
    case 6148:  /* *avx512vl_truncatev4div4qi2_mask_1 */
    case 6147:  /* *avx512vl_ss_truncatev4div4qi2_mask_1 */
    case 6146:  /* *avx512vl_us_truncatev4siv4qi2_mask_1 */
    case 6145:  /* *avx512vl_truncatev4siv4qi2_mask_1 */
    case 6144:  /* *avx512vl_ss_truncatev4siv4qi2_mask_1 */
    case 6119:  /* *avx512vl_us_truncatev2div2qi2_mask_1 */
    case 6118:  /* *avx512vl_truncatev2div2qi2_mask_1 */
    case 6117:  /* *avx512vl_ss_truncatev2div2qi2_mask_1 */
    case 4205:  /* *sse2_cvttpd2dq_mask_1 */
    case 4146:  /* *fixuns_truncv2dfv2si2_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 6295:  /* avx512f_us_truncatev8div16qi2_mask */
    case 6294:  /* avx512f_truncatev8div16qi2_mask */
    case 6293:  /* avx512f_ss_truncatev8div16qi2_mask */
    case 6274:  /* avx512vl_us_truncatev2div2si2_mask */
    case 6273:  /* avx512vl_truncatev2div2si2_mask */
    case 6272:  /* avx512vl_ss_truncatev2div2si2_mask */
    case 6252:  /* avx512vl_us_truncatev2div2hi2_mask */
    case 6251:  /* avx512vl_truncatev2div2hi2_mask */
    case 6250:  /* avx512vl_ss_truncatev2div2hi2_mask */
    case 6225:  /* avx512vl_us_truncatev4div4hi2_mask */
    case 6224:  /* avx512vl_truncatev4div4hi2_mask */
    case 6223:  /* avx512vl_ss_truncatev4div4hi2_mask */
    case 6222:  /* avx512vl_us_truncatev4siv4hi2_mask */
    case 6221:  /* avx512vl_truncatev4siv4hi2_mask */
    case 6220:  /* avx512vl_ss_truncatev4siv4hi2_mask */
    case 6179:  /* avx512vl_us_truncatev8siv8qi2_mask */
    case 6178:  /* avx512vl_truncatev8siv8qi2_mask */
    case 6177:  /* avx512vl_ss_truncatev8siv8qi2_mask */
    case 6176:  /* avx512vl_us_truncatev8hiv8qi2_mask */
    case 6175:  /* avx512vl_truncatev8hiv8qi2_mask */
    case 6174:  /* avx512vl_ss_truncatev8hiv8qi2_mask */
    case 6143:  /* avx512vl_us_truncatev4div4qi2_mask */
    case 6142:  /* avx512vl_truncatev4div4qi2_mask */
    case 6141:  /* avx512vl_ss_truncatev4div4qi2_mask */
    case 6140:  /* avx512vl_us_truncatev4siv4qi2_mask */
    case 6139:  /* avx512vl_truncatev4siv4qi2_mask */
    case 6138:  /* avx512vl_ss_truncatev4siv4qi2_mask */
    case 6116:  /* avx512vl_us_truncatev2div2qi2_mask */
    case 6115:  /* avx512vl_truncatev2div2qi2_mask */
    case 6114:  /* avx512vl_ss_truncatev2div2qi2_mask */
    case 4204:  /* sse2_cvttpd2dq_mask */
    case 4145:  /* fixuns_truncv2dfv2si2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4135:  /* *fixuns_notruncv2dfv2si2_mask_1 */
    case 4124:  /* *sse2_cvtpd2dq_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4134:  /* fixuns_notruncv2dfv2si2_mask */
    case 4123:  /* sse2_cvtpd2dq_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 4012:  /* avx512dq_cvtps2uqqv2di_mask */
    case 4004:  /* avx512dq_cvtps2qqv2di_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8320:  /* vcvtph2ps */
    case 7282:  /* *sse2_pmovmskb_ext */
    case 7281:  /* *sse2_pmovmskb_zext */
    case 7280:  /* *avx2_pmovmskb_zext */
    case 7253:  /* *sse2_movmskpd_uext */
    case 7252:  /* *sse2_movmskpd_ext */
    case 7251:  /* *avx_movmskpd256_uext */
    case 7250:  /* *avx_movmskpd256_ext */
    case 7249:  /* *sse_movmskps_uext */
    case 7248:  /* *sse_movmskps_ext */
    case 7247:  /* *avx_movmskps256_uext */
    case 7246:  /* *avx_movmskps256_ext */
    case 4133:  /* fixuns_notruncv2dfv2si2 */
    case 4122:  /* sse2_cvtpd2dq */
    case 3934:  /* sse_cvtps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 3933:  /* sse_cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 3928:  /* avx512fp16_vcvtss2sh_mask_round */
    case 3924:  /* avx512fp16_vcvtsd2sh_mask_round */
    case 3916:  /* avx512fp16_vcvtsh2ss_mask_round */
    case 3912:  /* avx512fp16_vcvtsh2sd_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3926:  /* avx512fp16_vcvtss2sh_round */
    case 3922:  /* avx512fp16_vcvtsd2sh_round */
    case 3915:  /* avx512fp16_vcvtsh2ss_round */
    case 3911:  /* avx512fp16_vcvtsh2sd_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3927:  /* avx512fp16_vcvtss2sh_mask */
    case 3923:  /* avx512fp16_vcvtsd2sh_mask */
    case 3914:  /* avx512fp16_vcvtsh2ss_mask */
    case 3910:  /* avx512fp16_vcvtsh2sd_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 3925:  /* avx512fp16_vcvtss2sh */
    case 3921:  /* avx512fp16_vcvtsd2sh */
    case 3913:  /* avx512fp16_vcvtsh2ss */
    case 3909:  /* avx512fp16_vcvtsh2sd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4058:  /* sse2_cvttsd2siq_round */
    case 4056:  /* sse2_cvttsd2si_round */
    case 4048:  /* avx512f_vcvttsd2usiq_round */
    case 4046:  /* avx512f_vcvttsd2usi_round */
    case 4040:  /* avx512f_vcvttss2usiq_round */
    case 4038:  /* avx512f_vcvttss2usi_round */
    case 3949:  /* sse_cvttss2siq_round */
    case 3947:  /* sse_cvttss2si_round */
    case 3859:  /* avx512fp16_fixuns_truncdi2_round */
    case 3857:  /* avx512fp16_fix_truncdi2_round */
    case 3855:  /* avx512fp16_fixuns_truncsi2_round */
    case 3853:  /* avx512fp16_fix_truncsi2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8043:  /* avx512dq_broadcastv8sf_mask */
    case 8041:  /* avx512dq_broadcastv16sf_mask */
    case 8039:  /* avx512dq_broadcastv4si_mask */
    case 8037:  /* avx512dq_broadcastv8si_mask */
    case 8035:  /* avx512dq_broadcastv16si_mask */
    case 7948:  /* avx512vl_vec_dupv8bf_mask */
    case 7946:  /* avx512vl_vec_dupv16bf_mask */
    case 7944:  /* avx512bw_vec_dupv32bf_mask */
    case 7942:  /* avx512fp16_vec_dupv8hf_mask */
    case 7940:  /* avx512vl_vec_dupv16hf_mask */
    case 7938:  /* avx512bw_vec_dupv32hf_mask */
    case 7936:  /* avx512vl_vec_dupv8hi_mask */
    case 7934:  /* avx512vl_vec_dupv16hi_mask */
    case 7932:  /* avx512bw_vec_dupv32hi_mask */
    case 7930:  /* avx512vl_vec_dupv32qi_mask */
    case 7928:  /* avx512vl_vec_dupv16qi_mask */
    case 7926:  /* avx512bw_vec_dupv64qi_mask */
    case 7924:  /* avx512vl_vec_dupv2df_mask */
    case 7922:  /* avx512vl_vec_dupv4df_mask */
    case 7920:  /* avx512f_vec_dupv8df_mask */
    case 7918:  /* avx512vl_vec_dupv4sf_mask */
    case 7916:  /* avx512vl_vec_dupv8sf_mask */
    case 7914:  /* avx512f_vec_dupv16sf_mask */
    case 7912:  /* avx512vl_vec_dupv2di_mask */
    case 7910:  /* avx512vl_vec_dupv4di_mask */
    case 7908:  /* avx512f_vec_dupv8di_mask */
    case 7906:  /* avx512vl_vec_dupv4si_mask */
    case 7904:  /* avx512vl_vec_dupv8si_mask */
    case 7902:  /* avx512f_vec_dupv16si_mask */
    case 7611:  /* sse4_1_zero_extendv2siv2di2_mask */
    case 7609:  /* sse4_1_sign_extendv2siv2di2_mask */
    case 7587:  /* sse4_1_zero_extendv2hiv2di2_mask */
    case 7585:  /* sse4_1_sign_extendv2hiv2di2_mask */
    case 7575:  /* avx2_zero_extendv4hiv4di2_mask */
    case 7573:  /* avx2_sign_extendv4hiv4di2_mask */
    case 7560:  /* sse4_1_zero_extendv2qiv2di2_mask */
    case 7558:  /* sse4_1_sign_extendv2qiv2di2_mask */
    case 7548:  /* avx2_zero_extendv4qiv4di2_mask */
    case 7546:  /* avx2_sign_extendv4qiv4di2_mask */
    case 7536:  /* avx512f_zero_extendv8qiv8di2_mask */
    case 7534:  /* avx512f_sign_extendv8qiv8di2_mask */
    case 7520:  /* sse4_1_zero_extendv4hiv4si2_mask */
    case 7518:  /* sse4_1_sign_extendv4hiv4si2_mask */
    case 7492:  /* sse4_1_zero_extendv4qiv4si2_mask */
    case 7490:  /* sse4_1_sign_extendv4qiv4si2_mask */
    case 7480:  /* avx2_zero_extendv8qiv8si2_mask */
    case 7478:  /* avx2_sign_extendv8qiv8si2_mask */
    case 7460:  /* sse4_1_zero_extendv8qiv8hi2_mask */
    case 7458:  /* sse4_1_sign_extendv8qiv8hi2_mask */
    case 4259:  /* sse2_cvtps2pd_mask */
    case 4198:  /* avx512dq_fixuns_truncv2sfv2di2_mask */
    case 4196:  /* avx512dq_fix_truncv2sfv2di2_mask */
    case 4114:  /* sse2_cvtdq2pd_mask */
    case 4110:  /* floatunsv2siv2df2_mask */
    case 3885:  /* avx512fp16_float_extend_phv2df2_mask */
    case 3879:  /* avx512fp16_float_extend_phv4sf2_mask */
    case 3877:  /* avx512fp16_float_extend_phv4df2_mask */
    case 3847:  /* avx512fp16_fixuns_truncv2di2_mask */
    case 3845:  /* avx512fp16_fix_truncv2di2_mask */
    case 3835:  /* avx512fp16_fixuns_truncv4di2_mask */
    case 3833:  /* avx512fp16_fix_truncv4di2_mask */
    case 3831:  /* avx512fp16_fixuns_truncv4si2_mask */
    case 3829:  /* avx512fp16_fix_truncv4si2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 4212:  /* sse2_cvtss2sd_round */
    case 4207:  /* sse2_cvtsd2ss_round */
    case 4032:  /* sse2_cvtsi2sdq_round */
    case 3956:  /* cvtusi2sd64_round */
    case 3954:  /* cvtusi2ss64_round */
    case 3951:  /* cvtusi2ss32_round */
    case 3939:  /* sse_cvtsi2ssq_round */
    case 3937:  /* sse_cvtsi2ss_round */
    case 3779:  /* avx512fp16_vcvtusi2shq_round */
    case 3777:  /* avx512fp16_vcvtsi2shq_round */
    case 3775:  /* avx512fp16_vcvtusi2sh_round */
    case 3773:  /* avx512fp16_vcvtsi2sh_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4215:  /* *sse2_vd_cvtss2sd */
    case 4211:  /* sse2_cvtss2sd */
    case 4210:  /* *sse2_vd_cvtsd2ss */
    case 4206:  /* sse2_cvtsd2ss */
    case 4031:  /* sse2_cvtsi2sdq */
    case 4030:  /* sse2_cvtsi2sd */
    case 3955:  /* cvtusi2sd64 */
    case 3953:  /* cvtusi2ss64 */
    case 3952:  /* cvtusi2sd32 */
    case 3950:  /* cvtusi2ss32 */
    case 3938:  /* sse_cvtsi2ssq */
    case 3936:  /* sse_cvtsi2ss */
    case 3778:  /* avx512fp16_vcvtusi2shq */
    case 3776:  /* avx512fp16_vcvtsi2shq */
    case 3774:  /* avx512fp16_vcvtusi2sh */
    case 3772:  /* avx512fp16_vcvtsi2sh */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 4052:  /* sse2_cvtsd2siq_round */
    case 4050:  /* sse2_cvtsd2si_round */
    case 4044:  /* avx512f_vcvtsd2usiq_round */
    case 4042:  /* avx512f_vcvtsd2usi_round */
    case 4036:  /* avx512f_vcvtss2usiq_round */
    case 4034:  /* avx512f_vcvtss2usi_round */
    case 3943:  /* sse_cvtss2siq_round */
    case 3941:  /* sse_cvtss2si_round */
    case 3767:  /* avx512fp16_vcvtsh2siq_round */
    case 3765:  /* avx512fp16_vcvtsh2usiq_round */
    case 3763:  /* avx512fp16_vcvtsh2si_round */
    case 3761:  /* avx512fp16_vcvtsh2usi_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4225:  /* *sse2_cvtpd2ps_mask_1 */
    case 4104:  /* *floatunsv2div2sf2_mask_1 */
    case 4103:  /* *floatv2div2sf2_mask_1 */
    case 3908:  /* *avx512fp16_vcvtpd2ph_v2df_mask_1 */
    case 3905:  /* *avx512fp16_vcvtps2ph_v4sf_mask_1 */
    case 3904:  /* *avx512fp16_vcvtpd2ph_v4df_mask_1 */
    case 3759:  /* *avx512fp16_vcvtuqq2ph_v2di_mask_1 */
    case 3758:  /* *avx512fp16_vcvtqq2ph_v2di_mask_1 */
    case 3753:  /* *avx512fp16_vcvtuqq2ph_v4di_mask_1 */
    case 3752:  /* *avx512fp16_vcvtqq2ph_v4di_mask_1 */
    case 3751:  /* *avx512fp16_vcvtudq2ph_v4si_mask_1 */
    case 3750:  /* *avx512fp16_vcvtdq2ph_v4si_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 9026:  /* avx512f_cvtneps2bf16_v4sf_mask_1 */
    case 4224:  /* *sse2_cvtpd2ps_mask */
    case 4102:  /* *floatunsv2div2sf2_mask */
    case 4101:  /* *floatv2div2sf2_mask */
    case 3907:  /* *avx512fp16_vcvtpd2ph_v2df_mask */
    case 3903:  /* *avx512fp16_vcvtps2ph_v4sf_mask */
    case 3902:  /* *avx512fp16_vcvtpd2ph_v4df_mask */
    case 3757:  /* *avx512fp16_vcvtuqq2ph_v2di_mask */
    case 3756:  /* *avx512fp16_vcvtqq2ph_v2di_mask */
    case 3749:  /* *avx512fp16_vcvtuqq2ph_v4di_mask */
    case 3748:  /* *avx512fp16_vcvtqq2ph_v4di_mask */
    case 3747:  /* *avx512fp16_vcvtudq2ph_v4si_mask */
    case 3746:  /* *avx512fp16_vcvtdq2ph_v4si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8329:  /* avx512f_vcvtph2ps512_mask_round */
    case 7705:  /* avx512er_rsqrt28v8df_mask_round */
    case 7701:  /* avx512er_rsqrt28v16sf_mask_round */
    case 7689:  /* avx512er_rcp28v8df_mask_round */
    case 7685:  /* avx512er_rcp28v16sf_mask_round */
    case 7681:  /* avx512er_exp2v8df_mask_round */
    case 7677:  /* avx512er_exp2v16sf_mask_round */
    case 5867:  /* avx512vl_getexpv2df_mask_round */
    case 5863:  /* avx512vl_getexpv4df_mask_round */
    case 5859:  /* avx512f_getexpv8df_mask_round */
    case 5855:  /* avx512vl_getexpv4sf_mask_round */
    case 5851:  /* avx512vl_getexpv8sf_mask_round */
    case 5847:  /* avx512f_getexpv16sf_mask_round */
    case 5843:  /* avx512fp16_getexpv8hf_mask_round */
    case 5839:  /* avx512vl_getexpv16hf_mask_round */
    case 5835:  /* avx512bw_getexpv32hf_mask_round */
    case 4178:  /* fixuns_notruncv8dfv8di2_mask_round */
    case 4170:  /* fix_notruncv8dfv8di2_mask_round */
    case 4132:  /* fixuns_notruncv4dfv4si2_mask_round */
    case 4128:  /* fixuns_notruncv8dfv8si2_mask_round */
    case 4118:  /* avx512f_cvtpd2dq512_mask_round */
    case 4008:  /* avx512dq_cvtps2uqqv8di_mask_round */
    case 4000:  /* avx512dq_cvtps2qqv8di_mask_round */
    case 3996:  /* avx512vl_fixuns_notruncv4sfv4si_mask_round */
    case 3992:  /* avx512vl_fixuns_notruncv8sfv8si_mask_round */
    case 3988:  /* avx512f_fixuns_notruncv16sfv16si_mask_round */
    case 3984:  /* avx512f_fix_notruncv16sfv16si_mask_round */
    case 3693:  /* avx512fp16_vcvtph2qq_v2di_mask_round */
    case 3689:  /* avx512fp16_vcvtph2uqq_v2di_mask_round */
    case 3685:  /* avx512fp16_vcvtph2dq_v4si_mask_round */
    case 3681:  /* avx512fp16_vcvtph2udq_v4si_mask_round */
    case 3677:  /* avx512fp16_vcvtph2w_v8hi_mask_round */
    case 3673:  /* avx512fp16_vcvtph2uw_v8hi_mask_round */
    case 3669:  /* avx512fp16_vcvtph2qq_v4di_mask_round */
    case 3665:  /* avx512fp16_vcvtph2uqq_v4di_mask_round */
    case 3661:  /* avx512fp16_vcvtph2dq_v8si_mask_round */
    case 3657:  /* avx512fp16_vcvtph2udq_v8si_mask_round */
    case 3653:  /* avx512fp16_vcvtph2w_v16hi_mask_round */
    case 3649:  /* avx512fp16_vcvtph2uw_v16hi_mask_round */
    case 3645:  /* avx512fp16_vcvtph2qq_v8di_mask_round */
    case 3641:  /* avx512fp16_vcvtph2uqq_v8di_mask_round */
    case 3637:  /* avx512fp16_vcvtph2dq_v16si_mask_round */
    case 3633:  /* avx512fp16_vcvtph2udq_v16si_mask_round */
    case 3629:  /* avx512fp16_vcvtph2w_v32hi_mask_round */
    case 3625:  /* avx512fp16_vcvtph2uw_v32hi_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8327:  /* *avx512f_vcvtph2ps512_round */
    case 7703:  /* *avx512er_rsqrt28v8df_round */
    case 7699:  /* *avx512er_rsqrt28v16sf_round */
    case 7687:  /* *avx512er_rcp28v8df_round */
    case 7683:  /* *avx512er_rcp28v16sf_round */
    case 7679:  /* avx512er_exp2v8df_round */
    case 7675:  /* avx512er_exp2v16sf_round */
    case 5865:  /* avx512vl_getexpv2df_round */
    case 5861:  /* avx512vl_getexpv4df_round */
    case 5857:  /* avx512f_getexpv8df_round */
    case 5853:  /* avx512vl_getexpv4sf_round */
    case 5849:  /* avx512vl_getexpv8sf_round */
    case 5845:  /* avx512f_getexpv16sf_round */
    case 5841:  /* avx512fp16_getexpv8hf_round */
    case 5837:  /* avx512vl_getexpv16hf_round */
    case 5833:  /* avx512bw_getexpv32hf_round */
    case 4176:  /* fixuns_notruncv8dfv8di2_round */
    case 4168:  /* fix_notruncv8dfv8di2_round */
    case 4130:  /* fixuns_notruncv4dfv4si2_round */
    case 4126:  /* fixuns_notruncv8dfv8si2_round */
    case 4116:  /* avx512f_cvtpd2dq512_round */
    case 4006:  /* *avx512dq_cvtps2uqqv8di_round */
    case 3998:  /* *avx512dq_cvtps2qqv8di_round */
    case 3994:  /* *avx512vl_fixuns_notruncv4sfv4si_round */
    case 3990:  /* *avx512vl_fixuns_notruncv8sfv8si_round */
    case 3986:  /* *avx512f_fixuns_notruncv16sfv16si_round */
    case 3982:  /* avx512f_fix_notruncv16sfv16si_round */
    case 3691:  /* avx512fp16_vcvtph2qq_v2di_round */
    case 3687:  /* avx512fp16_vcvtph2uqq_v2di_round */
    case 3683:  /* avx512fp16_vcvtph2dq_v4si_round */
    case 3679:  /* avx512fp16_vcvtph2udq_v4si_round */
    case 3675:  /* avx512fp16_vcvtph2w_v8hi_round */
    case 3671:  /* avx512fp16_vcvtph2uw_v8hi_round */
    case 3667:  /* avx512fp16_vcvtph2qq_v4di_round */
    case 3663:  /* avx512fp16_vcvtph2uqq_v4di_round */
    case 3659:  /* avx512fp16_vcvtph2dq_v8si_round */
    case 3655:  /* avx512fp16_vcvtph2udq_v8si_round */
    case 3651:  /* avx512fp16_vcvtph2w_v16hi_round */
    case 3647:  /* avx512fp16_vcvtph2uw_v16hi_round */
    case 3643:  /* avx512fp16_vcvtph2qq_v8di_round */
    case 3639:  /* avx512fp16_vcvtph2uqq_v8di_round */
    case 3635:  /* avx512fp16_vcvtph2dq_v16si_round */
    case 3631:  /* avx512fp16_vcvtph2udq_v16si_round */
    case 3627:  /* avx512fp16_vcvtph2w_v32hi_round */
    case 3623:  /* avx512fp16_vcvtph2uw_v32hi_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3621:  /* avx512fp16_fcmulcsh_v8hf_mask_round */
    case 3617:  /* avx512fp16_fmulcsh_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3620:  /* avx512fp16_fcmulcsh_v8hf_mask */
    case 3616:  /* avx512fp16_fmulcsh_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5878:  /* avx512f_sgetexpv2df_round */
    case 5874:  /* avx512f_sgetexpv4sf_round */
    case 5870:  /* avx512f_sgetexpv8hf_round */
    case 4431:  /* avx512f_vmscalefv2df_round */
    case 4427:  /* avx512f_vmscalefv4sf_round */
    case 4423:  /* avx512f_vmscalefv8hf_round */
    case 3619:  /* avx512fp16_fcmulcsh_v8hf_round */
    case 3615:  /* avx512fp16_fmulcsh_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 5876:  /* avx512f_sgetexpv2df */
    case 5872:  /* avx512f_sgetexpv4sf */
    case 5868:  /* avx512f_sgetexpv8hf */
    case 4430:  /* avx512f_vmscalefv2df */
    case 4426:  /* avx512f_vmscalefv4sf */
    case 4422:  /* avx512f_vmscalefv8hf */
    case 3618:  /* avx512fp16_fcmulcsh_v8hf */
    case 3614:  /* avx512fp16_fmulcsh_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3613:  /* avx512fp16_fcmaddcsh_v8hf_mask_round */
    case 3611:  /* avx512fp16_fmaddcsh_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 3612:  /* avx512fp16_fcmaddcsh_v8hf_mask */
    case 3610:  /* avx512fp16_fmaddcsh_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 3609:  /* avx512fp16_fma_fcmaddcsh_v8hf_maskz_round */
    case 3605:  /* avx512fp16_fma_fmaddcsh_v8hf_maskz_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3608:  /* avx512fp16_fma_fcmaddcsh_v8hf_round */
    case 3604:  /* avx512fp16_fma_fmaddcsh_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3607:  /* avx512fp16_fma_fcmaddcsh_v8hf_maskz */
    case 3603:  /* avx512fp16_fma_fmaddcsh_v8hf_maskz */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3606:  /* avx512fp16_fma_fcmaddcsh_v8hf */
    case 3602:  /* avx512fp16_fma_fmaddcsh_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 3593:  /* avx512bw_fcmulc_v32hf_mask_round */
    case 3589:  /* avx512bw_fmulc_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3601:  /* avx512fp16_fcmulc_v8hf_mask */
    case 3599:  /* avx512fp16_fmulc_v8hf_mask */
    case 3597:  /* avx512vl_fcmulc_v16hf_mask */
    case 3595:  /* avx512vl_fmulc_v16hf_mask */
    case 3591:  /* avx512bw_fcmulc_v32hf_mask */
    case 3587:  /* avx512bw_fmulc_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      break;

    case 3581:  /* avx512bw_fcmaddc_v32hf_mask_round */
    case 3579:  /* avx512bw_fmaddc_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3585:  /* avx512fp16_fcmaddc_v8hf_mask */
    case 3584:  /* avx512fp16_fmaddc_v8hf_mask */
    case 3583:  /* avx512vl_fcmaddc_v16hf_mask */
    case 3582:  /* avx512vl_fmaddc_v16hf_mask */
    case 3580:  /* avx512bw_fcmaddc_v32hf_mask */
    case 3578:  /* avx512bw_fmaddc_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3577:  /* fma_v8hf_fcmaddc_bcst */
    case 3576:  /* fma_v16hf_fcmaddc_bcst */
    case 3575:  /* fma_v32hf_fcmaddc_bcst */
    case 3574:  /* fma_v8hf_fmaddc_bcst */
    case 3573:  /* fma_v16hf_fmaddc_bcst */
    case 3572:  /* fma_v32hf_fmaddc_bcst */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 3545:  /* fma_fcmaddc_v32hf_maskz_1_round */
    case 3541:  /* fma_fmaddc_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3553:  /* fma_fcmaddc_v8hf_maskz_1 */
    case 3551:  /* fma_fmaddc_v8hf_maskz_1 */
    case 3549:  /* fma_fcmaddc_v16hf_maskz_1 */
    case 3547:  /* fma_fmaddc_v16hf_maskz_1 */
    case 3544:  /* fma_fcmaddc_v32hf_maskz_1 */
    case 3540:  /* fma_fmaddc_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      break;

    case 3537:  /* *fma4i_vmfnmsub_v2df */
    case 3536:  /* *fma4i_vmfnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3533:  /* *fma4i_vmfmsub_v2df */
    case 3532:  /* *fma4i_vmfmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3531:  /* *fma4i_vmfmadd_v2df */
    case 3530:  /* *fma4i_vmfmadd_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 3529:  /* *avx512f_vmfnmsub_v2df_maskz_1_round */
    case 3527:  /* *avx512f_vmfnmsub_v4sf_maskz_1_round */
    case 3525:  /* *avx512f_vmfnmsub_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3528:  /* *avx512f_vmfnmsub_v2df_maskz_1 */
    case 3526:  /* *avx512f_vmfnmsub_v4sf_maskz_1 */
    case 3524:  /* *avx512f_vmfnmsub_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3523:  /* *avx512f_vmfnmsub_v2df_mask3_round */
    case 3521:  /* *avx512f_vmfnmsub_v4sf_mask3_round */
    case 3519:  /* *avx512f_vmfnmsub_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3522:  /* *avx512f_vmfnmsub_v2df_mask3 */
    case 3520:  /* *avx512f_vmfnmsub_v4sf_mask3 */
    case 3518:  /* *avx512f_vmfnmsub_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3517:  /* *avx512f_vmfnmsub_v2df_mask_round */
    case 3515:  /* *avx512f_vmfnmsub_v4sf_mask_round */
    case 3513:  /* *avx512f_vmfnmsub_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3516:  /* *avx512f_vmfnmsub_v2df_mask */
    case 3514:  /* *avx512f_vmfnmsub_v4sf_mask */
    case 3512:  /* *avx512f_vmfnmsub_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3511:  /* avx512f_vmfnmadd_v2df_maskz_1_round */
    case 3509:  /* avx512f_vmfnmadd_v4sf_maskz_1_round */
    case 3507:  /* avx512f_vmfnmadd_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3510:  /* avx512f_vmfnmadd_v2df_maskz_1 */
    case 3508:  /* avx512f_vmfnmadd_v4sf_maskz_1 */
    case 3506:  /* avx512f_vmfnmadd_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3505:  /* avx512f_vmfnmadd_v2df_mask3_round */
    case 3503:  /* avx512f_vmfnmadd_v4sf_mask3_round */
    case 3501:  /* avx512f_vmfnmadd_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3504:  /* avx512f_vmfnmadd_v2df_mask3 */
    case 3502:  /* avx512f_vmfnmadd_v4sf_mask3 */
    case 3500:  /* avx512f_vmfnmadd_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3499:  /* avx512f_vmfnmadd_v2df_mask_round */
    case 3497:  /* avx512f_vmfnmadd_v4sf_mask_round */
    case 3495:  /* avx512f_vmfnmadd_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3498:  /* avx512f_vmfnmadd_v2df_mask */
    case 3496:  /* avx512f_vmfnmadd_v4sf_mask */
    case 3494:  /* avx512f_vmfnmadd_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3493:  /* *avx512f_vmfmsub_v2df_maskz_1_round */
    case 3491:  /* *avx512f_vmfmsub_v4sf_maskz_1_round */
    case 3489:  /* *avx512f_vmfmsub_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3492:  /* *avx512f_vmfmsub_v2df_maskz_1 */
    case 3490:  /* *avx512f_vmfmsub_v4sf_maskz_1 */
    case 3488:  /* *avx512f_vmfmsub_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3487:  /* avx512f_vmfmsub_v2df_mask3_round */
    case 3485:  /* avx512f_vmfmsub_v4sf_mask3_round */
    case 3483:  /* avx512f_vmfmsub_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3486:  /* avx512f_vmfmsub_v2df_mask3 */
    case 3484:  /* avx512f_vmfmsub_v4sf_mask3 */
    case 3482:  /* avx512f_vmfmsub_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3481:  /* *avx512f_vmfmsub_v2df_mask_round */
    case 3479:  /* *avx512f_vmfmsub_v4sf_mask_round */
    case 3477:  /* *avx512f_vmfmsub_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3480:  /* *avx512f_vmfmsub_v2df_mask */
    case 3478:  /* *avx512f_vmfmsub_v4sf_mask */
    case 3476:  /* *avx512f_vmfmsub_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3475:  /* avx512f_vmfmadd_v2df_maskz_1_round */
    case 3473:  /* avx512f_vmfmadd_v4sf_maskz_1_round */
    case 3471:  /* avx512f_vmfmadd_v8hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3474:  /* avx512f_vmfmadd_v2df_maskz_1 */
    case 3472:  /* avx512f_vmfmadd_v4sf_maskz_1 */
    case 3470:  /* avx512f_vmfmadd_v8hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3469:  /* avx512f_vmfmadd_v2df_mask3_round */
    case 3467:  /* avx512f_vmfmadd_v4sf_mask3_round */
    case 3465:  /* avx512f_vmfmadd_v8hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3468:  /* avx512f_vmfmadd_v2df_mask3 */
    case 3466:  /* avx512f_vmfmadd_v4sf_mask3 */
    case 3464:  /* avx512f_vmfmadd_v8hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 3463:  /* avx512f_vmfmadd_v2df_mask_round */
    case 3461:  /* avx512f_vmfmadd_v4sf_mask_round */
    case 3459:  /* avx512f_vmfmadd_v8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3462:  /* avx512f_vmfmadd_v2df_mask */
    case 3460:  /* avx512f_vmfmadd_v4sf_mask */
    case 3458:  /* avx512f_vmfmadd_v8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[1] = 1;
      break;

    case 3457:  /* *fmai_fnmsub_v2df_round */
    case 3455:  /* *fmai_fnmsub_v4sf_round */
    case 3453:  /* *fmai_fnmsub_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3456:  /* *fmai_fnmsub_v2df */
    case 3454:  /* *fmai_fnmsub_v4sf */
    case 3452:  /* *fmai_fnmsub_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3451:  /* *fmai_fnmadd_v2df_round */
    case 3449:  /* *fmai_fnmadd_v4sf_round */
    case 3447:  /* *fmai_fnmadd_v8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3450:  /* *fmai_fnmadd_v2df */
    case 3448:  /* *fmai_fnmadd_v4sf */
    case 3446:  /* *fmai_fnmadd_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3445:  /* *fmai_fmsub_v2df */
    case 3443:  /* *fmai_fmsub_v4sf */
    case 3441:  /* *fmai_fmsub_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3444:  /* *fmai_fmsub_v2df */
    case 3442:  /* *fmai_fmsub_v4sf */
    case 3440:  /* *fmai_fmsub_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3439:  /* *fmai_fmadd_v2df */
    case 3437:  /* *fmai_fmadd_v4sf */
    case 3435:  /* *fmai_fmadd_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3438:  /* *fmai_fmadd_v2df */
    case 3436:  /* *fmai_fmadd_v4sf */
    case 3434:  /* *fmai_fmadd_v8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3433:  /* avx512vl_fmsubadd_v2df_mask3_round */
    case 3431:  /* avx512vl_fmsubadd_v4df_mask3_round */
    case 3429:  /* avx512f_fmsubadd_v8df_mask3_round */
    case 3427:  /* avx512vl_fmsubadd_v4sf_mask3_round */
    case 3425:  /* avx512vl_fmsubadd_v8sf_mask3_round */
    case 3423:  /* avx512f_fmsubadd_v16sf_mask3_round */
    case 3421:  /* avx512fp16_fmsubadd_v8hf_mask3_round */
    case 3419:  /* avx512vl_fmsubadd_v16hf_mask3_round */
    case 3417:  /* avx512bw_fmsubadd_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3432:  /* avx512vl_fmsubadd_v2df_mask3 */
    case 3430:  /* avx512vl_fmsubadd_v4df_mask3 */
    case 3428:  /* avx512f_fmsubadd_v8df_mask3 */
    case 3426:  /* avx512vl_fmsubadd_v4sf_mask3 */
    case 3424:  /* avx512vl_fmsubadd_v8sf_mask3 */
    case 3422:  /* avx512f_fmsubadd_v16sf_mask3 */
    case 3420:  /* avx512fp16_fmsubadd_v8hf_mask3 */
    case 3418:  /* avx512vl_fmsubadd_v16hf_mask3 */
    case 3416:  /* avx512bw_fmsubadd_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3415:  /* avx512vl_fmsubadd_v2df_mask_round */
    case 3413:  /* avx512vl_fmsubadd_v4df_mask_round */
    case 3411:  /* avx512f_fmsubadd_v8df_mask_round */
    case 3409:  /* avx512vl_fmsubadd_v4sf_mask_round */
    case 3407:  /* avx512vl_fmsubadd_v8sf_mask_round */
    case 3405:  /* avx512f_fmsubadd_v16sf_mask_round */
    case 3403:  /* avx512fp16_fmsubadd_v8hf_mask_round */
    case 3401:  /* avx512vl_fmsubadd_v16hf_mask_round */
    case 3399:  /* avx512bw_fmsubadd_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3414:  /* avx512vl_fmsubadd_v2df_mask */
    case 3412:  /* avx512vl_fmsubadd_v4df_mask */
    case 3410:  /* avx512f_fmsubadd_v8df_mask */
    case 3408:  /* avx512vl_fmsubadd_v4sf_mask */
    case 3406:  /* avx512vl_fmsubadd_v8sf_mask */
    case 3404:  /* avx512f_fmsubadd_v16sf_mask */
    case 3402:  /* avx512fp16_fmsubadd_v8hf_mask */
    case 3400:  /* avx512vl_fmsubadd_v16hf_mask */
    case 3398:  /* avx512bw_fmsubadd_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3393:  /* fma_fmsubadd_v8df_maskz_1_round */
    case 3384:  /* fma_fmsubadd_v16sf_maskz_1_round */
    case 3374:  /* fma_fmsubadd_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3392:  /* *fma_fmsubadd_v8df_round */
    case 3383:  /* *fma_fmsubadd_v16sf_round */
    case 3373:  /* *fma_fmsubadd_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3397:  /* fma_fmsubadd_v2df_maskz_1 */
    case 3395:  /* fma_fmsubadd_v4df_maskz_1 */
    case 3391:  /* fma_fmsubadd_v8df_maskz_1 */
    case 3388:  /* fma_fmsubadd_v4sf_maskz_1 */
    case 3386:  /* fma_fmsubadd_v8sf_maskz_1 */
    case 3382:  /* fma_fmsubadd_v16sf_maskz_1 */
    case 3378:  /* fma_fmsubadd_v8hf_maskz_1 */
    case 3376:  /* fma_fmsubadd_v16hf_maskz_1 */
    case 3372:  /* fma_fmsubadd_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3396:  /* *fma_fmsubadd_v2df */
    case 3394:  /* *fma_fmsubadd_v4df */
    case 3390:  /* *fma_fmsubadd_v8df */
    case 3389:  /* *fma_fmsubadd_df */
    case 3387:  /* *fma_fmsubadd_v4sf */
    case 3385:  /* *fma_fmsubadd_v8sf */
    case 3381:  /* *fma_fmsubadd_v16sf */
    case 3380:  /* *fma_fmsubadd_sf */
    case 3379:  /* *fma_fmsubadd_hf */
    case 3377:  /* *fma_fmsubadd_v8hf */
    case 3375:  /* *fma_fmsubadd_v16hf */
    case 3371:  /* *fma_fmsubadd_v32hf */
    case 3370:  /* *fma_fmsubadd_v2df */
    case 3369:  /* *fma_fmsubadd_v4df */
    case 3368:  /* *fma_fmsubadd_v4sf */
    case 3367:  /* *fma_fmsubadd_v8sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0));
      break;

    case 3366:  /* avx512vl_fmaddsub_v2df_mask3_round */
    case 3364:  /* avx512vl_fmaddsub_v4df_mask3_round */
    case 3362:  /* avx512f_fmaddsub_v8df_mask3_round */
    case 3360:  /* avx512vl_fmaddsub_v4sf_mask3_round */
    case 3358:  /* avx512vl_fmaddsub_v8sf_mask3_round */
    case 3356:  /* avx512f_fmaddsub_v16sf_mask3_round */
    case 3354:  /* avx512fp16_fmaddsub_v8hf_mask3_round */
    case 3352:  /* avx512vl_fmaddsub_v16hf_mask3_round */
    case 3350:  /* avx512bw_fmaddsub_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3365:  /* avx512vl_fmaddsub_v2df_mask3 */
    case 3363:  /* avx512vl_fmaddsub_v4df_mask3 */
    case 3361:  /* avx512f_fmaddsub_v8df_mask3 */
    case 3359:  /* avx512vl_fmaddsub_v4sf_mask3 */
    case 3357:  /* avx512vl_fmaddsub_v8sf_mask3 */
    case 3355:  /* avx512f_fmaddsub_v16sf_mask3 */
    case 3353:  /* avx512fp16_fmaddsub_v8hf_mask3 */
    case 3351:  /* avx512vl_fmaddsub_v16hf_mask3 */
    case 3349:  /* avx512bw_fmaddsub_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3348:  /* avx512vl_fmaddsub_v2df_mask_round */
    case 3346:  /* avx512vl_fmaddsub_v4df_mask_round */
    case 3344:  /* avx512f_fmaddsub_v8df_mask_round */
    case 3342:  /* avx512vl_fmaddsub_v4sf_mask_round */
    case 3340:  /* avx512vl_fmaddsub_v8sf_mask_round */
    case 3338:  /* avx512f_fmaddsub_v16sf_mask_round */
    case 3336:  /* avx512fp16_fmaddsub_v8hf_mask_round */
    case 3334:  /* avx512vl_fmaddsub_v16hf_mask_round */
    case 3332:  /* avx512bw_fmaddsub_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 9040:  /* avx512f_dpbf16ps_v4sf_mask */
    case 9039:  /* avx512f_dpbf16ps_v8sf_mask */
    case 9038:  /* avx512f_dpbf16ps_v16sf_mask */
    case 8986:  /* vpdpwssds_v4si_mask */
    case 8985:  /* vpdpwssds_v8si_mask */
    case 8984:  /* vpdpwssds_v16si_mask */
    case 8977:  /* vpdpwssd_v4si_mask */
    case 8976:  /* vpdpwssd_v8si_mask */
    case 8975:  /* vpdpwssd_v16si_mask */
    case 8968:  /* vpdpbusds_v4si_mask */
    case 8967:  /* vpdpbusds_v8si_mask */
    case 8966:  /* vpdpbusds_v16si_mask */
    case 8959:  /* vpdpbusd_v4si_mask */
    case 8958:  /* vpdpbusd_v8si_mask */
    case 8957:  /* vpdpbusd_v16si_mask */
    case 8944:  /* vpshldv_v2di_mask */
    case 8943:  /* vpshldv_v4si_mask */
    case 8942:  /* vpshldv_v8hi_mask */
    case 8941:  /* vpshldv_v4di_mask */
    case 8940:  /* vpshldv_v8si_mask */
    case 8939:  /* vpshldv_v16hi_mask */
    case 8938:  /* vpshldv_v8di_mask */
    case 8937:  /* vpshldv_v16si_mask */
    case 8936:  /* vpshldv_v32hi_mask */
    case 8917:  /* vpshrdv_v2di_mask */
    case 8916:  /* vpshrdv_v4si_mask */
    case 8915:  /* vpshrdv_v8hi_mask */
    case 8914:  /* vpshrdv_v4di_mask */
    case 8913:  /* vpshrdv_v8si_mask */
    case 8912:  /* vpshrdv_v16hi_mask */
    case 8911:  /* vpshrdv_v8di_mask */
    case 8910:  /* vpshrdv_v16si_mask */
    case 8909:  /* vpshrdv_v32hi_mask */
    case 8787:  /* vpmadd52huqv2di_mask */
    case 8786:  /* vpmadd52luqv2di_mask */
    case 8785:  /* vpmadd52huqv4di_mask */
    case 8784:  /* vpmadd52luqv4di_mask */
    case 8783:  /* vpmadd52huqv8di_mask */
    case 8782:  /* vpmadd52luqv8di_mask */
    case 3347:  /* avx512vl_fmaddsub_v2df_mask */
    case 3345:  /* avx512vl_fmaddsub_v4df_mask */
    case 3343:  /* avx512f_fmaddsub_v8df_mask */
    case 3341:  /* avx512vl_fmaddsub_v4sf_mask */
    case 3339:  /* avx512vl_fmaddsub_v8sf_mask */
    case 3337:  /* avx512f_fmaddsub_v16sf_mask */
    case 3335:  /* avx512fp16_fmaddsub_v8hf_mask */
    case 3333:  /* avx512vl_fmaddsub_v16hf_mask */
    case 3331:  /* avx512bw_fmaddsub_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8642:  /* avx512dq_rangepv8df_mask_round */
    case 8634:  /* avx512dq_rangepv16sf_mask_round */
    case 3326:  /* fma_fmaddsub_v8df_maskz_1_round */
    case 3317:  /* fma_fmaddsub_v16sf_maskz_1_round */
    case 3307:  /* fma_fmaddsub_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 9037:  /* avx512f_dpbf16ps_v4sf_maskz_1 */
    case 9035:  /* avx512f_dpbf16ps_v8sf_maskz_1 */
    case 9033:  /* avx512f_dpbf16ps_v16sf_maskz_1 */
    case 8989:  /* vpdpwssds_v4si_maskz_1 */
    case 8988:  /* vpdpwssds_v8si_maskz_1 */
    case 8987:  /* vpdpwssds_v16si_maskz_1 */
    case 8980:  /* vpdpwssd_v4si_maskz_1 */
    case 8979:  /* vpdpwssd_v8si_maskz_1 */
    case 8978:  /* vpdpwssd_v16si_maskz_1 */
    case 8971:  /* vpdpbusds_v4si_maskz_1 */
    case 8970:  /* vpdpbusds_v8si_maskz_1 */
    case 8969:  /* vpdpbusds_v16si_maskz_1 */
    case 8962:  /* vpdpbusd_v4si_maskz_1 */
    case 8961:  /* vpdpbusd_v8si_maskz_1 */
    case 8960:  /* vpdpbusd_v16si_maskz_1 */
    case 8953:  /* vpshldv_v2di_maskz_1 */
    case 8952:  /* vpshldv_v4si_maskz_1 */
    case 8951:  /* vpshldv_v8hi_maskz_1 */
    case 8950:  /* vpshldv_v4di_maskz_1 */
    case 8949:  /* vpshldv_v8si_maskz_1 */
    case 8948:  /* vpshldv_v16hi_maskz_1 */
    case 8947:  /* vpshldv_v8di_maskz_1 */
    case 8946:  /* vpshldv_v16si_maskz_1 */
    case 8945:  /* vpshldv_v32hi_maskz_1 */
    case 8926:  /* vpshrdv_v2di_maskz_1 */
    case 8925:  /* vpshrdv_v4si_maskz_1 */
    case 8924:  /* vpshrdv_v8hi_maskz_1 */
    case 8923:  /* vpshrdv_v4di_maskz_1 */
    case 8922:  /* vpshrdv_v8si_maskz_1 */
    case 8921:  /* vpshrdv_v16hi_maskz_1 */
    case 8920:  /* vpshrdv_v8di_maskz_1 */
    case 8919:  /* vpshrdv_v16si_maskz_1 */
    case 8918:  /* vpshrdv_v32hi_maskz_1 */
    case 8899:  /* vpshld_v2di_mask */
    case 8897:  /* vpshld_v4si_mask */
    case 8895:  /* vpshld_v8hi_mask */
    case 8893:  /* vpshld_v4di_mask */
    case 8891:  /* vpshld_v8si_mask */
    case 8889:  /* vpshld_v16hi_mask */
    case 8887:  /* vpshld_v8di_mask */
    case 8885:  /* vpshld_v16si_mask */
    case 8883:  /* vpshld_v32hi_mask */
    case 8881:  /* vpshrd_v2di_mask */
    case 8879:  /* vpshrd_v4si_mask */
    case 8877:  /* vpshrd_v8hi_mask */
    case 8875:  /* vpshrd_v4di_mask */
    case 8873:  /* vpshrd_v8si_mask */
    case 8871:  /* vpshrd_v16hi_mask */
    case 8869:  /* vpshrd_v8di_mask */
    case 8867:  /* vpshrd_v16si_mask */
    case 8865:  /* vpshrd_v32hi_mask */
    case 8857:  /* vgf2p8affineqb_v16qi_mask */
    case 8855:  /* vgf2p8affineqb_v32qi_mask */
    case 8853:  /* vgf2p8affineqb_v64qi_mask */
    case 8851:  /* vgf2p8affineinvqb_v16qi_mask */
    case 8849:  /* vgf2p8affineinvqb_v32qi_mask */
    case 8847:  /* vgf2p8affineinvqb_v64qi_mask */
    case 8813:  /* avx5124vnniw_vp4dpwssds_maskz */
    case 8810:  /* avx5124vnniw_vp4dpwssd_maskz */
    case 8807:  /* avx5124fmaddps_4fnmaddss_maskz */
    case 8804:  /* avx5124fmaddps_4fnmaddps_maskz */
    case 8801:  /* avx5124fmaddps_4fmaddss_maskz */
    case 8798:  /* avx5124fmaddps_4fmaddps_maskz */
    case 8781:  /* vpmadd52huqv2di_maskz_1 */
    case 8780:  /* vpmadd52luqv2di_maskz_1 */
    case 8779:  /* vpmadd52huqv4di_maskz_1 */
    case 8778:  /* vpmadd52luqv4di_maskz_1 */
    case 8777:  /* vpmadd52huqv8di_maskz_1 */
    case 8776:  /* vpmadd52luqv8di_maskz_1 */
    case 8732:  /* avx512bw_dbpsadbwv32hi_mask */
    case 8730:  /* avx512bw_dbpsadbwv16hi_mask */
    case 8728:  /* avx512bw_dbpsadbwv8hi_mask */
    case 8646:  /* avx512dq_rangepv2df_mask */
    case 8644:  /* avx512dq_rangepv4df_mask */
    case 8641:  /* avx512dq_rangepv8df_mask */
    case 8638:  /* avx512dq_rangepv4sf_mask */
    case 8636:  /* avx512dq_rangepv8sf_mask */
    case 8633:  /* avx512dq_rangepv16sf_mask */
    case 8131:  /* avx512vl_vpermt2varv16qi3_maskz_1 */
    case 8129:  /* avx512vl_vpermt2varv32qi3_maskz_1 */
    case 8127:  /* avx512bw_vpermt2varv64qi3_maskz_1 */
    case 8125:  /* avx512vl_vpermt2varv8hi3_maskz_1 */
    case 8123:  /* avx512vl_vpermt2varv16hi3_maskz_1 */
    case 8121:  /* avx512bw_vpermt2varv32hi3_maskz_1 */
    case 8119:  /* avx512vl_vpermt2varv2df3_maskz_1 */
    case 8117:  /* avx512vl_vpermt2varv2di3_maskz_1 */
    case 8115:  /* avx512vl_vpermt2varv4sf3_maskz_1 */
    case 8113:  /* avx512vl_vpermt2varv4si3_maskz_1 */
    case 8111:  /* avx512vl_vpermt2varv4df3_maskz_1 */
    case 8109:  /* avx512vl_vpermt2varv4di3_maskz_1 */
    case 8107:  /* avx512vl_vpermt2varv8sf3_maskz_1 */
    case 8105:  /* avx512vl_vpermt2varv8si3_maskz_1 */
    case 8103:  /* avx512f_vpermt2varv8df3_maskz_1 */
    case 8101:  /* avx512f_vpermt2varv8di3_maskz_1 */
    case 8099:  /* avx512f_vpermt2varv16sf3_maskz_1 */
    case 8097:  /* avx512f_vpermt2varv16si3_maskz_1 */
    case 7352:  /* ssse3_palignrv16qi_mask */
    case 7351:  /* avx2_palignrv32qi_mask */
    case 7350:  /* avx512bw_palignrv64qi_mask */
    case 5891:  /* avx512vl_alignv2di_mask */
    case 5889:  /* avx512vl_alignv4di_mask */
    case 5887:  /* avx512f_alignv8di_mask */
    case 5885:  /* avx512vl_alignv4si_mask */
    case 5883:  /* avx512vl_alignv8si_mask */
    case 5881:  /* avx512f_alignv16si_mask */
    case 3330:  /* fma_fmaddsub_v2df_maskz_1 */
    case 3328:  /* fma_fmaddsub_v4df_maskz_1 */
    case 3324:  /* fma_fmaddsub_v8df_maskz_1 */
    case 3321:  /* fma_fmaddsub_v4sf_maskz_1 */
    case 3319:  /* fma_fmaddsub_v8sf_maskz_1 */
    case 3315:  /* fma_fmaddsub_v16sf_maskz_1 */
    case 3311:  /* fma_fmaddsub_v8hf_maskz_1 */
    case 3309:  /* fma_fmaddsub_v16hf_maskz_1 */
    case 3305:  /* fma_fmaddsub_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3299:  /* avx512vl_fnmsub_v2df_mask3_round */
    case 3297:  /* avx512vl_fnmsub_v4df_mask3_round */
    case 3295:  /* avx512f_fnmsub_v8df_mask3_round */
    case 3293:  /* avx512vl_fnmsub_v4sf_mask3_round */
    case 3291:  /* avx512vl_fnmsub_v8sf_mask3_round */
    case 3289:  /* avx512f_fnmsub_v16sf_mask3_round */
    case 3287:  /* avx512fp16_fnmsub_v8hf_mask3_round */
    case 3285:  /* avx512vl_fnmsub_v16hf_mask3_round */
    case 3283:  /* avx512bw_fnmsub_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3298:  /* avx512vl_fnmsub_v2df_mask3 */
    case 3296:  /* avx512vl_fnmsub_v4df_mask3 */
    case 3294:  /* avx512f_fnmsub_v8df_mask3 */
    case 3292:  /* avx512vl_fnmsub_v4sf_mask3 */
    case 3290:  /* avx512vl_fnmsub_v8sf_mask3 */
    case 3288:  /* avx512f_fnmsub_v16sf_mask3 */
    case 3286:  /* avx512fp16_fnmsub_v8hf_mask3 */
    case 3284:  /* avx512vl_fnmsub_v16hf_mask3 */
    case 3282:  /* avx512bw_fnmsub_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3279:  /* avx512f_fnmsub_v8df_mask_round */
    case 3275:  /* avx512f_fnmsub_v16sf_mask_round */
    case 3271:  /* avx512bw_fnmsub_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3281:  /* avx512vl_fnmsub_v2df_mask */
    case 3280:  /* avx512vl_fnmsub_v4df_mask */
    case 3278:  /* avx512f_fnmsub_v8df_mask */
    case 3277:  /* avx512vl_fnmsub_v4sf_mask */
    case 3276:  /* avx512vl_fnmsub_v8sf_mask */
    case 3274:  /* avx512f_fnmsub_v16sf_mask */
    case 3273:  /* avx512fp16_fnmsub_v8hf_mask */
    case 3272:  /* avx512vl_fnmsub_v16hf_mask */
    case 3270:  /* avx512bw_fnmsub_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3265:  /* fma_fnmsub_v8df_maskz_1_round */
    case 3256:  /* fma_fnmsub_v16sf_maskz_1_round */
    case 3246:  /* fma_fnmsub_v32hf_maskz_1_round */
    case 3242:  /* *fma_fnmsub_v4df */
    case 3238:  /* *fma_fnmsub_v8sf */
    case 3234:  /* *fma_fnmsub_v2df */
    case 3230:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3269:  /* fma_fnmsub_v2df_maskz_1 */
    case 3267:  /* fma_fnmsub_v4df_maskz_1 */
    case 3263:  /* fma_fnmsub_v8df_maskz_1 */
    case 3260:  /* fma_fnmsub_v4sf_maskz_1 */
    case 3258:  /* fma_fnmsub_v8sf_maskz_1 */
    case 3254:  /* fma_fnmsub_v16sf_maskz_1 */
    case 3250:  /* fma_fnmsub_v8hf_maskz_1 */
    case 3248:  /* fma_fnmsub_v16hf_maskz_1 */
    case 3244:  /* fma_fnmsub_v32hf_maskz_1 */
    case 3240:  /* *fma_fnmsub_v4df */
    case 3236:  /* *fma_fnmsub_v8sf */
    case 3232:  /* *fma_fnmsub_v2df */
    case 3228:  /* *fma_fnmsub_v4sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3264:  /* *fma_fnmsub_v8df_round */
    case 3255:  /* *fma_fnmsub_v16sf_round */
    case 3245:  /* *fma_fnmsub_v32hf_round */
    case 3241:  /* *fma_fnmsub_v4df */
    case 3237:  /* *fma_fnmsub_v8sf */
    case 3233:  /* *fma_fnmsub_v2df */
    case 3229:  /* *fma_fnmsub_v4sf */
    case 3226:  /* *fma_fnmsub_df */
    case 3224:  /* *fma_fnmsub_sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3220:  /* avx512f_fnmadd_v8df_mask3_round */
    case 3216:  /* avx512f_fnmadd_v16sf_mask3_round */
    case 3212:  /* avx512bw_fnmadd_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3222:  /* avx512vl_fnmadd_v2df_mask3 */
    case 3221:  /* avx512vl_fnmadd_v4df_mask3 */
    case 3219:  /* avx512f_fnmadd_v8df_mask3 */
    case 3218:  /* avx512vl_fnmadd_v4sf_mask3 */
    case 3217:  /* avx512vl_fnmadd_v8sf_mask3 */
    case 3215:  /* avx512f_fnmadd_v16sf_mask3 */
    case 3214:  /* avx512fp16_fnmadd_v8hf_mask3 */
    case 3213:  /* avx512vl_fnmadd_v16hf_mask3 */
    case 3211:  /* avx512bw_fnmadd_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3208:  /* avx512f_fnmadd_v8df_mask_round */
    case 3204:  /* avx512f_fnmadd_v16sf_mask_round */
    case 3200:  /* avx512bw_fnmadd_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3210:  /* avx512vl_fnmadd_v2df_mask */
    case 3209:  /* avx512vl_fnmadd_v4df_mask */
    case 3207:  /* avx512f_fnmadd_v8df_mask */
    case 3206:  /* avx512vl_fnmadd_v4sf_mask */
    case 3205:  /* avx512vl_fnmadd_v8sf_mask */
    case 3203:  /* avx512f_fnmadd_v16sf_mask */
    case 3202:  /* avx512fp16_fnmadd_v8hf_mask */
    case 3201:  /* avx512vl_fnmadd_v16hf_mask */
    case 3199:  /* avx512bw_fnmadd_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3194:  /* fma_fnmadd_v8df_maskz_1_round */
    case 3185:  /* fma_fnmadd_v16sf_maskz_1_round */
    case 3175:  /* fma_fnmadd_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3198:  /* fma_fnmadd_v2df_maskz_1 */
    case 3196:  /* fma_fnmadd_v4df_maskz_1 */
    case 3192:  /* fma_fnmadd_v8df_maskz_1 */
    case 3189:  /* fma_fnmadd_v4sf_maskz_1 */
    case 3187:  /* fma_fnmadd_v8sf_maskz_1 */
    case 3183:  /* fma_fnmadd_v16sf_maskz_1 */
    case 3179:  /* fma_fnmadd_v8hf_maskz_1 */
    case 3177:  /* fma_fnmadd_v16hf_maskz_1 */
    case 3173:  /* fma_fnmadd_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3163:  /* avx512f_fmsub_v8df_mask3_round */
    case 3159:  /* avx512f_fmsub_v16sf_mask3_round */
    case 3155:  /* avx512bw_fmsub_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3165:  /* avx512vl_fmsub_v2df_mask3 */
    case 3164:  /* avx512vl_fmsub_v4df_mask3 */
    case 3162:  /* avx512f_fmsub_v8df_mask3 */
    case 3161:  /* avx512vl_fmsub_v4sf_mask3 */
    case 3160:  /* avx512vl_fmsub_v8sf_mask3 */
    case 3158:  /* avx512f_fmsub_v16sf_mask3 */
    case 3157:  /* avx512fp16_fmsub_v8hf_mask3 */
    case 3156:  /* avx512vl_fmsub_v16hf_mask3 */
    case 3154:  /* avx512bw_fmsub_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3153:  /* avx512vl_fmsub_v2df_mask_round */
    case 3151:  /* avx512vl_fmsub_v4df_mask_round */
    case 3149:  /* avx512f_fmsub_v8df_mask_round */
    case 3147:  /* avx512vl_fmsub_v4sf_mask_round */
    case 3145:  /* avx512vl_fmsub_v8sf_mask_round */
    case 3143:  /* avx512f_fmsub_v16sf_mask_round */
    case 3141:  /* avx512fp16_fmsub_v8hf_mask_round */
    case 3139:  /* avx512vl_fmsub_v16hf_mask_round */
    case 3137:  /* avx512bw_fmsub_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3152:  /* avx512vl_fmsub_v2df_mask */
    case 3150:  /* avx512vl_fmsub_v4df_mask */
    case 3148:  /* avx512f_fmsub_v8df_mask */
    case 3146:  /* avx512vl_fmsub_v4sf_mask */
    case 3144:  /* avx512vl_fmsub_v8sf_mask */
    case 3142:  /* avx512f_fmsub_v16sf_mask */
    case 3140:  /* avx512fp16_fmsub_v8hf_mask */
    case 3138:  /* avx512vl_fmsub_v16hf_mask */
    case 3136:  /* avx512bw_fmsub_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3131:  /* fma_fmsub_v8df_maskz_1_round */
    case 3122:  /* fma_fmsub_v16sf_maskz_1_round */
    case 3112:  /* fma_fmsub_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3130:  /* *fma_fmsub_v8df_round */
    case 3121:  /* *fma_fmsub_v16sf_round */
    case 3111:  /* *fma_fmsub_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3135:  /* fma_fmsub_v2df_maskz_1 */
    case 3133:  /* fma_fmsub_v4df_maskz_1 */
    case 3129:  /* fma_fmsub_v8df_maskz_1 */
    case 3126:  /* fma_fmsub_v4sf_maskz_1 */
    case 3124:  /* fma_fmsub_v8sf_maskz_1 */
    case 3120:  /* fma_fmsub_v16sf_maskz_1 */
    case 3116:  /* fma_fmsub_v8hf_maskz_1 */
    case 3114:  /* fma_fmsub_v16hf_maskz_1 */
    case 3110:  /* fma_fmsub_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3102:  /* avx512vl_fmadd_v2df_mask3_round */
    case 3100:  /* avx512vl_fmadd_v4df_mask3_round */
    case 3098:  /* avx512f_fmadd_v8df_mask3_round */
    case 3096:  /* avx512vl_fmadd_v4sf_mask3_round */
    case 3094:  /* avx512vl_fmadd_v8sf_mask3_round */
    case 3092:  /* avx512f_fmadd_v16sf_mask3_round */
    case 3090:  /* avx512fp16_fmadd_v8hf_mask3_round */
    case 3088:  /* avx512vl_fmadd_v16hf_mask3_round */
    case 3086:  /* avx512bw_fmadd_v32hf_mask3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3101:  /* avx512vl_fmadd_v2df_mask3 */
    case 3099:  /* avx512vl_fmadd_v4df_mask3 */
    case 3097:  /* avx512f_fmadd_v8df_mask3 */
    case 3095:  /* avx512vl_fmadd_v4sf_mask3 */
    case 3093:  /* avx512vl_fmadd_v8sf_mask3 */
    case 3091:  /* avx512f_fmadd_v16sf_mask3 */
    case 3089:  /* avx512fp16_fmadd_v8hf_mask3 */
    case 3087:  /* avx512vl_fmadd_v16hf_mask3 */
    case 3085:  /* avx512bw_fmadd_v32hf_mask3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 3;
      break;

    case 3082:  /* avx512f_fmadd_v8df_mask_round */
    case 3078:  /* avx512f_fmadd_v16sf_mask_round */
    case 3074:  /* avx512bw_fmadd_v32hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3084:  /* avx512vl_fmadd_v2df_mask */
    case 3083:  /* avx512vl_fmadd_v4df_mask */
    case 3081:  /* avx512f_fmadd_v8df_mask */
    case 3080:  /* avx512vl_fmadd_v4sf_mask */
    case 3079:  /* avx512vl_fmadd_v8sf_mask */
    case 3077:  /* avx512f_fmadd_v16sf_mask */
    case 3076:  /* avx512fp16_fmadd_v8hf_mask */
    case 3075:  /* avx512vl_fmadd_v16hf_mask */
    case 3073:  /* avx512bw_fmadd_v32hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 3068:  /* fma_fmadd_v8df_maskz_1_round */
    case 3059:  /* fma_fmadd_v16sf_maskz_1_round */
    case 3049:  /* fma_fmadd_v32hf_maskz_1_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3067:  /* *fma_fmadd_v8df_round */
    case 3058:  /* *fma_fmadd_v16sf_round */
    case 3048:  /* *fma_fmadd_v32hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3072:  /* fma_fmadd_v2df_maskz_1 */
    case 3070:  /* fma_fmadd_v4df_maskz_1 */
    case 3066:  /* fma_fmadd_v8df_maskz_1 */
    case 3063:  /* fma_fmadd_v4sf_maskz_1 */
    case 3061:  /* fma_fmadd_v8sf_maskz_1 */
    case 3057:  /* fma_fmadd_v16sf_maskz_1 */
    case 3053:  /* fma_fmadd_v8hf_maskz_1 */
    case 3051:  /* fma_fmadd_v16hf_maskz_1 */
    case 3047:  /* fma_fmadd_v32hf_maskz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8177:  /* vec_set_hi_v8sf_mask */
    case 8175:  /* vec_set_hi_v8si_mask */
    case 8169:  /* vec_set_hi_v4df_mask */
    case 8167:  /* vec_set_hi_v4di_mask */
    case 7146:  /* vec_set_hi_v8di_mask */
    case 7144:  /* vec_set_hi_v8df_mask */
    case 7138:  /* vec_set_hi_v16si_mask */
    case 7136:  /* vec_set_hi_v16sf_mask */
    case 6785:  /* *andnotv2di3_mask */
    case 6784:  /* *andnotv4di3_mask */
    case 6783:  /* *andnotv8di3_mask */
    case 6782:  /* *andnotv4si3_mask */
    case 6781:  /* *andnotv8si3_mask */
    case 6780:  /* *andnotv16si3_mask */
    case 2972:  /* avx512f_andnotv8df3_mask */
    case 2970:  /* avx512f_andnotv16sf3_mask */
    case 2967:  /* sse2_andnotv2df3_mask */
    case 2965:  /* avx_andnotv4df3_mask */
    case 2963:  /* sse_andnotv4sf3_mask */
    case 2961:  /* avx_andnotv8sf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2957:  /* sse2_ucomi_round */
    case 2953:  /* sse_ucomi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2956:  /* sse2_ucomi */
    case 2952:  /* sse_ucomi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 2955:  /* sse2_comi_round */
    case 2951:  /* sse_comi_round */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2954:  /* sse2_comi */
    case 2950:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 2949:  /* avx512f_vmcmpv2df3_mask_round */
    case 2947:  /* avx512f_vmcmpv4sf3_mask_round */
    case 2945:  /* avx512f_vmcmpv8hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2948:  /* avx512f_vmcmpv2df3_mask */
    case 2946:  /* avx512f_vmcmpv4sf3_mask */
    case 2944:  /* avx512f_vmcmpv8hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 2943:  /* avx512f_vmcmpv2df3_round */
    case 2941:  /* avx512f_vmcmpv4sf3_round */
    case 2939:  /* avx512f_vmcmpv8hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2937:  /* *avx512vl_ucmpv8hi3_1 */
    case 2936:  /* *avx512vl_ucmpv8hi3_1 */
    case 2935:  /* *avx512vl_ucmpv16hi3_1 */
    case 2934:  /* *avx512vl_ucmpv16hi3_1 */
    case 2933:  /* *avx512bw_ucmpv32hi3_1 */
    case 2932:  /* *avx512bw_ucmpv32hi3_1 */
    case 2931:  /* *avx512vl_ucmpv32qi3_1 */
    case 2930:  /* *avx512vl_ucmpv32qi3_1 */
    case 2929:  /* *avx512vl_ucmpv16qi3_1 */
    case 2928:  /* *avx512vl_ucmpv16qi3_1 */
    case 2927:  /* *avx512bw_ucmpv64qi3_1 */
    case 2926:  /* *avx512bw_ucmpv64qi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 9010:  /* avx512vl_vpshufbitqmbv16qi_mask */
    case 9008:  /* avx512vl_vpshufbitqmbv32qi_mask */
    case 9006:  /* avx512vl_vpshufbitqmbv64qi_mask */
    case 8672:  /* avx512dq_fpclassv2df_mask */
    case 8670:  /* avx512dq_fpclassv4df_mask */
    case 8668:  /* avx512dq_fpclassv8df_mask */
    case 8666:  /* avx512dq_fpclassv4sf_mask */
    case 8664:  /* avx512dq_fpclassv8sf_mask */
    case 8662:  /* avx512dq_fpclassv16sf_mask */
    case 8660:  /* avx512dq_fpclassv8hf_mask */
    case 8658:  /* avx512dq_fpclassv16hf_mask */
    case 8656:  /* avx512dq_fpclassv32hf_mask */
    case 8330:  /* *vcvtps2ph */
    case 6890:  /* avx512vl_testnmv2di3_mask */
    case 6888:  /* avx512vl_testnmv4di3_mask */
    case 6886:  /* avx512f_testnmv8di3_mask */
    case 6884:  /* avx512vl_testnmv4si3_mask */
    case 6882:  /* avx512vl_testnmv8si3_mask */
    case 6880:  /* avx512f_testnmv16si3_mask */
    case 6878:  /* avx512vl_testnmv8hi3_mask */
    case 6876:  /* avx512vl_testnmv16hi3_mask */
    case 6874:  /* avx512bw_testnmv32hi3_mask */
    case 6872:  /* avx512vl_testnmv16qi3_mask */
    case 6870:  /* avx512vl_testnmv32qi3_mask */
    case 6868:  /* avx512bw_testnmv64qi3_mask */
    case 6866:  /* avx512vl_testmv2di3_mask */
    case 6864:  /* avx512vl_testmv4di3_mask */
    case 6862:  /* avx512f_testmv8di3_mask */
    case 6860:  /* avx512vl_testmv4si3_mask */
    case 6858:  /* avx512vl_testmv8si3_mask */
    case 6856:  /* avx512f_testmv16si3_mask */
    case 6854:  /* avx512vl_testmv8hi3_mask */
    case 6852:  /* avx512vl_testmv16hi3_mask */
    case 6850:  /* avx512bw_testmv32hi3_mask */
    case 6848:  /* avx512vl_testmv16qi3_mask */
    case 6846:  /* avx512vl_testmv32qi3_mask */
    case 6844:  /* avx512bw_testmv64qi3_mask */
    case 3559:  /* fma_v8hf_fadd_fcmul */
    case 3558:  /* fma_v16hf_fadd_fcmul */
    case 3557:  /* fma_v32hf_fadd_fcmul */
    case 3556:  /* fma_v8hf_fadd_fmul */
    case 3555:  /* fma_v16hf_fadd_fmul */
    case 3554:  /* fma_v32hf_fadd_fmul */
    case 2871:  /* *avx512vl_eqv2di3_mask_1 */
    case 2869:  /* *avx512vl_eqv2di3_mask_1 */
    case 2867:  /* *avx512vl_eqv4di3_mask_1 */
    case 2865:  /* *avx512vl_eqv4di3_mask_1 */
    case 2863:  /* *avx512f_eqv8di3_mask_1 */
    case 2861:  /* *avx512f_eqv8di3_mask_1 */
    case 2859:  /* *avx512vl_eqv4si3_mask_1 */
    case 2857:  /* *avx512vl_eqv4si3_mask_1 */
    case 2855:  /* *avx512vl_eqv8si3_mask_1 */
    case 2853:  /* *avx512vl_eqv8si3_mask_1 */
    case 2851:  /* *avx512f_eqv16si3_mask_1 */
    case 2849:  /* *avx512f_eqv16si3_mask_1 */
    case 2799:  /* *avx512vl_eqv8hi3_mask_1 */
    case 2797:  /* *avx512vl_eqv8hi3_mask_1 */
    case 2795:  /* *avx512vl_eqv16hi3_mask_1 */
    case 2793:  /* *avx512vl_eqv16hi3_mask_1 */
    case 2791:  /* *avx512bw_eqv32hi3_mask_1 */
    case 2789:  /* *avx512bw_eqv32hi3_mask_1 */
    case 2787:  /* *avx512vl_eqv32qi3_mask_1 */
    case 2785:  /* *avx512vl_eqv32qi3_mask_1 */
    case 2783:  /* *avx512vl_eqv16qi3_mask_1 */
    case 2781:  /* *avx512vl_eqv16qi3_mask_1 */
    case 2779:  /* *avx512bw_eqv64qi3_mask_1 */
    case 2777:  /* *avx512bw_eqv64qi3_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2919:  /* *avx512vl_ucmpv2di3_zero_extenddi_2 */
    case 2918:  /* *avx512vl_ucmpv2di3_zero_extendsi_2 */
    case 2917:  /* *avx512vl_ucmpv2di3_zero_extendhi_2 */
    case 2916:  /* *avx512vl_ucmpv4di3_zero_extenddi_2 */
    case 2915:  /* *avx512vl_ucmpv4di3_zero_extendsi_2 */
    case 2914:  /* *avx512vl_ucmpv4di3_zero_extendhi_2 */
    case 2913:  /* *avx512f_ucmpv8di3_zero_extenddi_2 */
    case 2912:  /* *avx512f_ucmpv8di3_zero_extendsi_2 */
    case 2911:  /* *avx512f_ucmpv8di3_zero_extendhi_2 */
    case 2910:  /* *avx512vl_ucmpv4si3_zero_extenddi_2 */
    case 2909:  /* *avx512vl_ucmpv4si3_zero_extendsi_2 */
    case 2908:  /* *avx512vl_ucmpv4si3_zero_extendhi_2 */
    case 2907:  /* *avx512vl_ucmpv8si3_zero_extenddi_2 */
    case 2906:  /* *avx512vl_ucmpv8si3_zero_extendsi_2 */
    case 2905:  /* *avx512vl_ucmpv8si3_zero_extendhi_2 */
    case 2904:  /* *avx512f_ucmpv16si3_zero_extenddi_2 */
    case 2903:  /* *avx512f_ucmpv16si3_zero_extendsi_2 */
    case 2902:  /* *avx512f_ucmpv16si3_zero_extendhi_2 */
    case 2847:  /* *avx512vl_ucmpv8hi3_zero_extenddi_2 */
    case 2846:  /* *avx512vl_ucmpv8hi3_zero_extendsi_2 */
    case 2845:  /* *avx512vl_ucmpv8hi3_zero_extendhi_2 */
    case 2844:  /* *avx512vl_ucmpv16hi3_zero_extenddi_2 */
    case 2843:  /* *avx512vl_ucmpv16hi3_zero_extendsi_2 */
    case 2842:  /* *avx512vl_ucmpv16hi3_zero_extendhi_2 */
    case 2841:  /* *avx512bw_ucmpv32hi3_zero_extenddi_2 */
    case 2840:  /* *avx512bw_ucmpv32hi3_zero_extendsi_2 */
    case 2839:  /* *avx512bw_ucmpv32hi3_zero_extendhi_2 */
    case 2838:  /* *avx512vl_ucmpv32qi3_zero_extenddi_2 */
    case 2837:  /* *avx512vl_ucmpv32qi3_zero_extendsi_2 */
    case 2836:  /* *avx512vl_ucmpv32qi3_zero_extendhi_2 */
    case 2835:  /* *avx512vl_ucmpv16qi3_zero_extenddi_2 */
    case 2834:  /* *avx512vl_ucmpv16qi3_zero_extendsi_2 */
    case 2833:  /* *avx512vl_ucmpv16qi3_zero_extendhi_2 */
    case 2832:  /* *avx512bw_ucmpv64qi3_zero_extenddi_2 */
    case 2831:  /* *avx512bw_ucmpv64qi3_zero_extendsi_2 */
    case 2830:  /* *avx512bw_ucmpv64qi3_zero_extendhi_2 */
    case 2763:  /* *avx512vl_cmpv8hi3_zero_extenddi_2 */
    case 2762:  /* *avx512vl_cmpv8hi3_zero_extendsi_2 */
    case 2761:  /* *avx512vl_cmpv8hi3_zero_extendhi_2 */
    case 2760:  /* *avx512vl_cmpv16hi3_zero_extenddi_2 */
    case 2759:  /* *avx512vl_cmpv16hi3_zero_extendsi_2 */
    case 2758:  /* *avx512vl_cmpv16hi3_zero_extendhi_2 */
    case 2757:  /* *avx512bw_cmpv32hi3_zero_extenddi_2 */
    case 2756:  /* *avx512bw_cmpv32hi3_zero_extendsi_2 */
    case 2755:  /* *avx512bw_cmpv32hi3_zero_extendhi_2 */
    case 2754:  /* *avx512vl_cmpv32qi3_zero_extenddi_2 */
    case 2753:  /* *avx512vl_cmpv32qi3_zero_extendsi_2 */
    case 2752:  /* *avx512vl_cmpv32qi3_zero_extendhi_2 */
    case 2751:  /* *avx512vl_cmpv16qi3_zero_extenddi_2 */
    case 2750:  /* *avx512vl_cmpv16qi3_zero_extendsi_2 */
    case 2749:  /* *avx512vl_cmpv16qi3_zero_extendhi_2 */
    case 2748:  /* *avx512bw_cmpv64qi3_zero_extenddi_2 */
    case 2747:  /* *avx512bw_cmpv64qi3_zero_extendsi_2 */
    case 2746:  /* *avx512bw_cmpv64qi3_zero_extendhi_2 */
    case 2703:  /* *avx512vl_cmpv2df3_zero_extenddi_2 */
    case 2702:  /* *avx512vl_cmpv2df3_zero_extendsi_2 */
    case 2701:  /* *avx512vl_cmpv2df3_zero_extendhi_2 */
    case 2700:  /* *avx512vl_cmpv4df3_zero_extenddi_2 */
    case 2699:  /* *avx512vl_cmpv4df3_zero_extendsi_2 */
    case 2698:  /* *avx512vl_cmpv4df3_zero_extendhi_2 */
    case 2697:  /* *avx512f_cmpv8df3_zero_extenddi_2 */
    case 2696:  /* *avx512f_cmpv8df3_zero_extendsi_2 */
    case 2695:  /* *avx512f_cmpv8df3_zero_extendhi_2 */
    case 2694:  /* *avx512vl_cmpv4sf3_zero_extenddi_2 */
    case 2693:  /* *avx512vl_cmpv4sf3_zero_extendsi_2 */
    case 2692:  /* *avx512vl_cmpv4sf3_zero_extendhi_2 */
    case 2691:  /* *avx512vl_cmpv8sf3_zero_extenddi_2 */
    case 2690:  /* *avx512vl_cmpv8sf3_zero_extendsi_2 */
    case 2689:  /* *avx512vl_cmpv8sf3_zero_extendhi_2 */
    case 2688:  /* *avx512f_cmpv16sf3_zero_extenddi_2 */
    case 2687:  /* *avx512f_cmpv16sf3_zero_extendsi_2 */
    case 2686:  /* *avx512f_cmpv16sf3_zero_extendhi_2 */
    case 2685:  /* *avx512fp16_cmpv8hf3_zero_extenddi_2 */
    case 2684:  /* *avx512fp16_cmpv8hf3_zero_extendsi_2 */
    case 2683:  /* *avx512fp16_cmpv8hf3_zero_extendhi_2 */
    case 2682:  /* *avx512vl_cmpv16hf3_zero_extenddi_2 */
    case 2681:  /* *avx512vl_cmpv16hf3_zero_extendsi_2 */
    case 2680:  /* *avx512vl_cmpv16hf3_zero_extendhi_2 */
    case 2679:  /* *avx512bw_cmpv32hf3_zero_extenddi_2 */
    case 2678:  /* *avx512bw_cmpv32hf3_zero_extendsi_2 */
    case 2677:  /* *avx512bw_cmpv32hf3_zero_extendhi_2 */
    case 2676:  /* *avx512vl_cmpv2di3_zero_extenddi_2 */
    case 2675:  /* *avx512vl_cmpv2di3_zero_extendsi_2 */
    case 2674:  /* *avx512vl_cmpv2di3_zero_extendhi_2 */
    case 2673:  /* *avx512vl_cmpv4di3_zero_extenddi_2 */
    case 2672:  /* *avx512vl_cmpv4di3_zero_extendsi_2 */
    case 2671:  /* *avx512vl_cmpv4di3_zero_extendhi_2 */
    case 2670:  /* *avx512f_cmpv8di3_zero_extenddi_2 */
    case 2669:  /* *avx512f_cmpv8di3_zero_extendsi_2 */
    case 2668:  /* *avx512f_cmpv8di3_zero_extendhi_2 */
    case 2667:  /* *avx512vl_cmpv4si3_zero_extenddi_2 */
    case 2666:  /* *avx512vl_cmpv4si3_zero_extendsi_2 */
    case 2665:  /* *avx512vl_cmpv4si3_zero_extendhi_2 */
    case 2664:  /* *avx512vl_cmpv8si3_zero_extenddi_2 */
    case 2663:  /* *avx512vl_cmpv8si3_zero_extendsi_2 */
    case 2662:  /* *avx512vl_cmpv8si3_zero_extendhi_2 */
    case 2661:  /* *avx512f_cmpv16si3_zero_extenddi_2 */
    case 2660:  /* *avx512f_cmpv16si3_zero_extendsi_2 */
    case 2659:  /* *avx512f_cmpv16si3_zero_extendhi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 2);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[2] = 1;
      break;

    case 2942:  /* avx512f_vmcmpv2df3 */
    case 2940:  /* avx512f_vmcmpv4sf3 */
    case 2938:  /* avx512f_vmcmpv8hf3 */
    case 2925:  /* *avx512vl_ucmpv2di3 */
    case 2924:  /* *avx512vl_ucmpv4di3 */
    case 2923:  /* *avx512f_ucmpv8di3 */
    case 2922:  /* *avx512vl_ucmpv4si3 */
    case 2921:  /* *avx512vl_ucmpv8si3 */
    case 2920:  /* *avx512f_ucmpv16si3 */
    case 2901:  /* *avx512vl_ucmpv2di3_zero_extenddi */
    case 2900:  /* *avx512vl_ucmpv2di3_zero_extendsi */
    case 2899:  /* *avx512vl_ucmpv2di3_zero_extendhi */
    case 2898:  /* *avx512vl_ucmpv4di3_zero_extenddi */
    case 2897:  /* *avx512vl_ucmpv4di3_zero_extendsi */
    case 2896:  /* *avx512vl_ucmpv4di3_zero_extendhi */
    case 2895:  /* *avx512f_ucmpv8di3_zero_extenddi */
    case 2894:  /* *avx512f_ucmpv8di3_zero_extendsi */
    case 2893:  /* *avx512f_ucmpv8di3_zero_extendhi */
    case 2892:  /* *avx512vl_ucmpv4si3_zero_extenddi */
    case 2891:  /* *avx512vl_ucmpv4si3_zero_extendsi */
    case 2890:  /* *avx512vl_ucmpv4si3_zero_extendhi */
    case 2889:  /* *avx512vl_ucmpv8si3_zero_extenddi */
    case 2888:  /* *avx512vl_ucmpv8si3_zero_extendsi */
    case 2887:  /* *avx512vl_ucmpv8si3_zero_extendhi */
    case 2886:  /* *avx512f_ucmpv16si3_zero_extenddi */
    case 2885:  /* *avx512f_ucmpv16si3_zero_extendsi */
    case 2884:  /* *avx512f_ucmpv16si3_zero_extendhi */
    case 2829:  /* *avx512vl_ucmpv8hi3_zero_extenddi */
    case 2828:  /* *avx512vl_ucmpv8hi3_zero_extendsi */
    case 2827:  /* *avx512vl_ucmpv8hi3_zero_extendhi */
    case 2826:  /* *avx512vl_ucmpv16hi3_zero_extenddi */
    case 2825:  /* *avx512vl_ucmpv16hi3_zero_extendsi */
    case 2824:  /* *avx512vl_ucmpv16hi3_zero_extendhi */
    case 2823:  /* *avx512bw_ucmpv32hi3_zero_extenddi */
    case 2822:  /* *avx512bw_ucmpv32hi3_zero_extendsi */
    case 2821:  /* *avx512bw_ucmpv32hi3_zero_extendhi */
    case 2820:  /* *avx512vl_ucmpv32qi3_zero_extenddi */
    case 2819:  /* *avx512vl_ucmpv32qi3_zero_extendsi */
    case 2818:  /* *avx512vl_ucmpv32qi3_zero_extendhi */
    case 2817:  /* *avx512vl_ucmpv16qi3_zero_extenddi */
    case 2816:  /* *avx512vl_ucmpv16qi3_zero_extendsi */
    case 2815:  /* *avx512vl_ucmpv16qi3_zero_extendhi */
    case 2814:  /* *avx512bw_ucmpv64qi3_zero_extenddi */
    case 2813:  /* *avx512bw_ucmpv64qi3_zero_extendsi */
    case 2812:  /* *avx512bw_ucmpv64qi3_zero_extendhi */
    case 2775:  /* *avx512vl_cmpv8hi3 */
    case 2774:  /* *avx512vl_cmpv8hi3 */
    case 2773:  /* *avx512vl_cmpv16hi3 */
    case 2772:  /* *avx512vl_cmpv16hi3 */
    case 2771:  /* *avx512bw_cmpv32hi3 */
    case 2770:  /* *avx512bw_cmpv32hi3 */
    case 2769:  /* *avx512vl_cmpv32qi3 */
    case 2768:  /* *avx512vl_cmpv32qi3 */
    case 2767:  /* *avx512vl_cmpv16qi3 */
    case 2766:  /* *avx512vl_cmpv16qi3 */
    case 2765:  /* *avx512bw_cmpv64qi3 */
    case 2764:  /* *avx512bw_cmpv64qi3 */
    case 2745:  /* *avx512vl_cmpv8hi3_zero_extenddi */
    case 2744:  /* *avx512vl_cmpv8hi3_zero_extendsi */
    case 2743:  /* *avx512vl_cmpv8hi3_zero_extendhi */
    case 2742:  /* *avx512vl_cmpv16hi3_zero_extenddi */
    case 2741:  /* *avx512vl_cmpv16hi3_zero_extendsi */
    case 2740:  /* *avx512vl_cmpv16hi3_zero_extendhi */
    case 2739:  /* *avx512bw_cmpv32hi3_zero_extenddi */
    case 2738:  /* *avx512bw_cmpv32hi3_zero_extendsi */
    case 2737:  /* *avx512bw_cmpv32hi3_zero_extendhi */
    case 2736:  /* *avx512vl_cmpv32qi3_zero_extenddi */
    case 2735:  /* *avx512vl_cmpv32qi3_zero_extendsi */
    case 2734:  /* *avx512vl_cmpv32qi3_zero_extendhi */
    case 2733:  /* *avx512vl_cmpv16qi3_zero_extenddi */
    case 2732:  /* *avx512vl_cmpv16qi3_zero_extendsi */
    case 2731:  /* *avx512vl_cmpv16qi3_zero_extendhi */
    case 2730:  /* *avx512bw_cmpv64qi3_zero_extenddi */
    case 2729:  /* *avx512bw_cmpv64qi3_zero_extendsi */
    case 2728:  /* *avx512bw_cmpv64qi3_zero_extendhi */
    case 2715:  /* *avx512vl_cmpv2df3 */
    case 2714:  /* *avx512vl_cmpv4df3 */
    case 2713:  /* *avx512f_cmpv8df3 */
    case 2712:  /* *avx512vl_cmpv4sf3 */
    case 2711:  /* *avx512vl_cmpv8sf3 */
    case 2710:  /* *avx512f_cmpv16sf3 */
    case 2709:  /* *avx512vl_cmpv2di3 */
    case 2708:  /* *avx512vl_cmpv4di3 */
    case 2707:  /* *avx512f_cmpv8di3 */
    case 2706:  /* *avx512vl_cmpv4si3 */
    case 2705:  /* *avx512vl_cmpv8si3 */
    case 2704:  /* *avx512f_cmpv16si3 */
    case 2658:  /* *avx512vl_cmpv2df3_zero_extenddi */
    case 2657:  /* *avx512vl_cmpv2df3_zero_extendsi */
    case 2656:  /* *avx512vl_cmpv2df3_zero_extendhi */
    case 2655:  /* *avx512vl_cmpv4df3_zero_extenddi */
    case 2654:  /* *avx512vl_cmpv4df3_zero_extendsi */
    case 2653:  /* *avx512vl_cmpv4df3_zero_extendhi */
    case 2652:  /* *avx512f_cmpv8df3_zero_extenddi */
    case 2651:  /* *avx512f_cmpv8df3_zero_extendsi */
    case 2650:  /* *avx512f_cmpv8df3_zero_extendhi */
    case 2649:  /* *avx512vl_cmpv4sf3_zero_extenddi */
    case 2648:  /* *avx512vl_cmpv4sf3_zero_extendsi */
    case 2647:  /* *avx512vl_cmpv4sf3_zero_extendhi */
    case 2646:  /* *avx512vl_cmpv8sf3_zero_extenddi */
    case 2645:  /* *avx512vl_cmpv8sf3_zero_extendsi */
    case 2644:  /* *avx512vl_cmpv8sf3_zero_extendhi */
    case 2643:  /* *avx512f_cmpv16sf3_zero_extenddi */
    case 2642:  /* *avx512f_cmpv16sf3_zero_extendsi */
    case 2641:  /* *avx512f_cmpv16sf3_zero_extendhi */
    case 2640:  /* *avx512fp16_cmpv8hf3_zero_extenddi */
    case 2639:  /* *avx512fp16_cmpv8hf3_zero_extendsi */
    case 2638:  /* *avx512fp16_cmpv8hf3_zero_extendhi */
    case 2637:  /* *avx512vl_cmpv16hf3_zero_extenddi */
    case 2636:  /* *avx512vl_cmpv16hf3_zero_extendsi */
    case 2635:  /* *avx512vl_cmpv16hf3_zero_extendhi */
    case 2634:  /* *avx512bw_cmpv32hf3_zero_extenddi */
    case 2633:  /* *avx512bw_cmpv32hf3_zero_extendsi */
    case 2632:  /* *avx512bw_cmpv32hf3_zero_extendhi */
    case 2631:  /* *avx512vl_cmpv2di3_zero_extenddi */
    case 2630:  /* *avx512vl_cmpv2di3_zero_extendsi */
    case 2629:  /* *avx512vl_cmpv2di3_zero_extendhi */
    case 2628:  /* *avx512vl_cmpv4di3_zero_extenddi */
    case 2627:  /* *avx512vl_cmpv4di3_zero_extendsi */
    case 2626:  /* *avx512vl_cmpv4di3_zero_extendhi */
    case 2625:  /* *avx512f_cmpv8di3_zero_extenddi */
    case 2624:  /* *avx512f_cmpv8di3_zero_extendsi */
    case 2623:  /* *avx512f_cmpv8di3_zero_extendhi */
    case 2622:  /* *avx512vl_cmpv4si3_zero_extenddi */
    case 2621:  /* *avx512vl_cmpv4si3_zero_extendsi */
    case 2620:  /* *avx512vl_cmpv4si3_zero_extendhi */
    case 2619:  /* *avx512vl_cmpv8si3_zero_extenddi */
    case 2618:  /* *avx512vl_cmpv8si3_zero_extendsi */
    case 2617:  /* *avx512vl_cmpv8si3_zero_extendhi */
    case 2616:  /* *avx512f_cmpv16si3_zero_extenddi */
    case 2615:  /* *avx512f_cmpv16si3_zero_extendsi */
    case 2614:  /* *avx512f_cmpv16si3_zero_extendhi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      break;

    case 2609:  /* avx512f_cmpv8df3_mask_round */
    case 2601:  /* avx512f_cmpv16sf3_mask_round */
    case 2593:  /* avx512bw_cmpv32hf3_mask_round */
    case 2585:  /* avx512f_cmpv8di3_mask_round */
    case 2577:  /* avx512f_cmpv16si3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3565:  /* fma_fcmaddc_v8hf_fma_zero */
    case 3564:  /* fma_fmaddc_v8hf_fma_zero */
    case 3563:  /* fma_fcmaddc_v16hf_fma_zero */
    case 3562:  /* fma_fmaddc_v16hf_fma_zero */
    case 3561:  /* fma_fcmaddc_v32hf_fma_zero */
    case 3560:  /* fma_fmaddc_v32hf_fma_zero */
    case 2883:  /* avx512vl_ucmpv2di3_mask */
    case 2881:  /* avx512vl_ucmpv4di3_mask */
    case 2879:  /* avx512f_ucmpv8di3_mask */
    case 2877:  /* avx512vl_ucmpv4si3_mask */
    case 2875:  /* avx512vl_ucmpv8si3_mask */
    case 2873:  /* avx512f_ucmpv16si3_mask */
    case 2811:  /* avx512vl_ucmpv8hi3_mask */
    case 2809:  /* avx512vl_ucmpv16hi3_mask */
    case 2807:  /* avx512bw_ucmpv32hi3_mask */
    case 2805:  /* avx512vl_ucmpv32qi3_mask */
    case 2803:  /* avx512vl_ucmpv16qi3_mask */
    case 2801:  /* avx512bw_ucmpv64qi3_mask */
    case 2727:  /* avx512vl_cmpv8hi3_mask */
    case 2725:  /* avx512vl_cmpv16hi3_mask */
    case 2723:  /* avx512bw_cmpv32hi3_mask */
    case 2721:  /* avx512vl_cmpv32qi3_mask */
    case 2719:  /* avx512vl_cmpv16qi3_mask */
    case 2717:  /* avx512bw_cmpv64qi3_mask */
    case 2613:  /* avx512vl_cmpv2df3_mask */
    case 2611:  /* avx512vl_cmpv4df3_mask */
    case 2608:  /* avx512f_cmpv8df3_mask */
    case 2605:  /* avx512vl_cmpv4sf3_mask */
    case 2603:  /* avx512vl_cmpv8sf3_mask */
    case 2600:  /* avx512f_cmpv16sf3_mask */
    case 2597:  /* avx512fp16_cmpv8hf3_mask */
    case 2595:  /* avx512vl_cmpv16hf3_mask */
    case 2592:  /* avx512bw_cmpv32hf3_mask */
    case 2589:  /* avx512vl_cmpv2di3_mask */
    case 2587:  /* avx512vl_cmpv4di3_mask */
    case 2584:  /* avx512f_cmpv8di3_mask */
    case 2581:  /* avx512vl_cmpv4si3_mask */
    case 2579:  /* avx512vl_cmpv8si3_mask */
    case 2576:  /* avx512f_cmpv16si3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 8640:  /* avx512dq_rangepv8df_round */
    case 8632:  /* avx512dq_rangepv16sf_round */
    case 3543:  /* fma_fcmaddc_v32hf_round */
    case 3539:  /* fma_fmaddc_v32hf_round */
    case 3325:  /* *fma_fmaddsub_v8df_round */
    case 3316:  /* *fma_fmaddsub_v16sf_round */
    case 3306:  /* *fma_fmaddsub_v32hf_round */
    case 2607:  /* avx512f_cmpv8df3_round */
    case 2599:  /* avx512f_cmpv16sf3_round */
    case 2591:  /* avx512bw_cmpv32hf3_round */
    case 2583:  /* avx512f_cmpv8di3_round */
    case 2575:  /* avx512f_cmpv16si3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2573:  /* sse2_vmmaskcmpv2df3 */
    case 2572:  /* sse_vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 6735:  /* *avx2_pcmpv16qi3_4 */
    case 6734:  /* *avx2_pcmpv32qi3_4 */
    case 2561:  /* *avx_cmpv4di3_ltint_not */
    case 2560:  /* *avx_cmpv8si3_ltint_not */
    case 2559:  /* *avx_cmpv2di3_ltint_not */
    case 2558:  /* *avx_cmpv4si3_ltint_not */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 6731:  /* *avx2_pcmpv4di3_2 */
    case 6730:  /* *avx2_pcmpv8si3_2 */
    case 6729:  /* *avx2_pcmpv16hi3_2 */
    case 6728:  /* *avx2_pcmpv32qi3_2 */
    case 6727:  /* *avx2_pcmpv2di3_2 */
    case 6726:  /* *avx2_pcmpv4si3_2 */
    case 6725:  /* *avx2_pcmpv8hi3_2 */
    case 6724:  /* *avx2_pcmpv16qi3_2 */
    case 2549:  /* *avx_cmpv2df3_4 */
    case 2548:  /* *avx_cmpv4df3_4 */
    case 2547:  /* *avx_cmpv4sf3_4 */
    case 2546:  /* *avx_cmpv8sf3_4 */
    case 2541:  /* *avx_cmpv2df3_2 */
    case 2540:  /* *avx_cmpv4df3_2 */
    case 2539:  /* *avx_cmpv4sf3_2 */
    case 2538:  /* *avx_cmpv8sf3_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 2), 0), 0, 2));
      break;

    case 6733:  /* *avx2_pcmpv16qi3_3 */
    case 6732:  /* *avx2_pcmpv32qi3_3 */
    case 6723:  /* *avx2_pcmpv4di3_1 */
    case 6722:  /* *avx2_pcmpv8si3_1 */
    case 6721:  /* *avx2_pcmpv16hi3_1 */
    case 6720:  /* *avx2_pcmpv32qi3_1 */
    case 6719:  /* *avx2_pcmpv2di3_1 */
    case 6718:  /* *avx2_pcmpv4si3_1 */
    case 6717:  /* *avx2_pcmpv8hi3_1 */
    case 6716:  /* *avx2_pcmpv16qi3_1 */
    case 2557:  /* *avx_cmpv4di3_ltint */
    case 2556:  /* *avx_cmpv8si3_ltint */
    case 2555:  /* *avx_cmpv2di3_ltint */
    case 2554:  /* *avx_cmpv4si3_ltint */
    case 2553:  /* *avx_cmpv2df3_lt */
    case 2552:  /* *avx_cmpv4df3_lt */
    case 2551:  /* *avx_cmpv4sf3_lt */
    case 2550:  /* *avx_cmpv8sf3_lt */
    case 2545:  /* *avx_cmpv2df3_3 */
    case 2544:  /* *avx_cmpv4df3_3 */
    case 2543:  /* *avx_cmpv4sf3_3 */
    case 2542:  /* *avx_cmpv8sf3_3 */
    case 2537:  /* *avx_cmpv2df3_1 */
    case 2536:  /* *avx_cmpv4df3_1 */
    case 2535:  /* *avx_cmpv4sf3_1 */
    case 2534:  /* *avx_cmpv8sf3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 1));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 2), 0, 2));
      break;

    case 8726:  /* avx512f_vgetmantv2df_mask_round */
    case 8722:  /* avx512f_vgetmantv4sf_mask_round */
    case 8718:  /* avx512f_vgetmantv8hf_mask_round */
    case 8654:  /* avx512dq_rangesv2df_mask_round */
    case 8650:  /* avx512dq_rangesv4sf_mask_round */
    case 2529:  /* reducesv2df_mask_round */
    case 2525:  /* reducesv4sf_mask_round */
    case 2521:  /* reducesv8hf_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8725:  /* avx512f_vgetmantv2df_round */
    case 8721:  /* avx512f_vgetmantv4sf_round */
    case 8717:  /* avx512f_vgetmantv8hf_round */
    case 8653:  /* avx512dq_rangesv2df_round */
    case 8649:  /* avx512dq_rangesv4sf_round */
    case 2528:  /* reducesv2df_round */
    case 2524:  /* reducesv4sf_round */
    case 2520:  /* reducesv8hf_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8724:  /* avx512f_vgetmantv2df_mask */
    case 8720:  /* avx512f_vgetmantv4sf_mask */
    case 8716:  /* avx512f_vgetmantv8hf_mask */
    case 8652:  /* avx512dq_rangesv2df_mask */
    case 8648:  /* avx512dq_rangesv4sf_mask */
    case 2527:  /* reducesv2df_mask */
    case 2523:  /* reducesv4sf_mask */
    case 2519:  /* reducesv8hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8723:  /* avx512f_vgetmantv2df */
    case 8719:  /* avx512f_vgetmantv4sf */
    case 8715:  /* avx512f_vgetmantv8hf */
    case 8651:  /* avx512dq_rangesv2df */
    case 8647:  /* avx512dq_rangesv4sf */
    case 2563:  /* avx_vmcmpv2df3 */
    case 2562:  /* avx_vmcmpv4sf3 */
    case 2526:  /* reducesv2df */
    case 2522:  /* reducesv4sf */
    case 2518:  /* reducesv8hf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2481:  /* sse3_hsubv4sf3 */
    case 2480:  /* sse3_haddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 2479:  /* avx_hsubv8sf3 */
    case 2478:  /* avx_haddv8sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 1), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 1), 0);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[6] = 1;
      recog_data.dup_loc[7] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[7] = 1;
      recog_data.dup_loc[8] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0), 0);
      recog_data.dup_num[8] = 1;
      recog_data.dup_loc[9] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[9] = 1;
      recog_data.dup_loc[10] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0), 0);
      recog_data.dup_num[10] = 2;
      recog_data.dup_loc[11] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 1), 0);
      recog_data.dup_num[11] = 2;
      recog_data.dup_loc[12] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0), 0);
      recog_data.dup_num[12] = 2;
      recog_data.dup_loc[13] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 1), 0);
      recog_data.dup_num[13] = 2;
      break;

    case 2473:  /* avx_hsubv4df3 */
    case 2472:  /* avx_haddv4df3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0);
      recog_data.dup_num[3] = 1;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0);
      recog_data.dup_num[5] = 2;
      break;

    case 2443:  /* *ieee_minv2df3 */
    case 2442:  /* *ieee_maxv2df3 */
    case 2441:  /* *ieee_minv4sf3 */
    case 2440:  /* *ieee_maxv4sf3 */
    case 2439:  /* *ieee_minv8hf3 */
    case 2438:  /* *ieee_maxv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 8714:  /* avx512vl_getmantv2df_mask_round */
    case 8710:  /* avx512vl_getmantv4df_mask_round */
    case 8706:  /* avx512f_getmantv8df_mask_round */
    case 8702:  /* avx512vl_getmantv4sf_mask_round */
    case 8698:  /* avx512vl_getmantv8sf_mask_round */
    case 8694:  /* avx512f_getmantv16sf_mask_round */
    case 8690:  /* avx512fp16_getmantv8hf_mask_round */
    case 8686:  /* avx512vl_getmantv16hf_mask_round */
    case 8682:  /* avx512bw_getmantv32hf_mask_round */
    case 8340:  /* avx512f_vcvtps2ph512_mask_round */
    case 5983:  /* avx512vl_rndscalev2df_mask_round */
    case 5979:  /* avx512vl_rndscalev4df_mask_round */
    case 5975:  /* avx512f_rndscalev8df_mask_round */
    case 5971:  /* avx512vl_rndscalev4sf_mask_round */
    case 5967:  /* avx512vl_rndscalev8sf_mask_round */
    case 5963:  /* avx512f_rndscalev16sf_mask_round */
    case 5959:  /* avx512fp16_rndscalev8hf_mask_round */
    case 5955:  /* avx512vl_rndscalev16hf_mask_round */
    case 5951:  /* avx512bw_rndscalev32hf_mask_round */
    case 4469:  /* avx512vl_scalefv2df_mask_round */
    case 4465:  /* avx512vl_scalefv4df_mask_round */
    case 4461:  /* avx512f_scalefv8df_mask_round */
    case 4457:  /* avx512vl_scalefv4sf_mask_round */
    case 4453:  /* avx512vl_scalefv8sf_mask_round */
    case 4449:  /* avx512f_scalefv16sf_mask_round */
    case 4445:  /* avx512fp16_scalefv8hf_mask_round */
    case 4441:  /* avx512vl_scalefv16hf_mask_round */
    case 4437:  /* avx512bw_scalefv32hf_mask_round */
    case 2517:  /* reducepv2df_mask_round */
    case 2513:  /* reducepv4df_mask_round */
    case 2509:  /* reducepv8df_mask_round */
    case 2505:  /* reducepv4sf_mask_round */
    case 2501:  /* reducepv8sf_mask_round */
    case 2497:  /* reducepv16sf_mask_round */
    case 2493:  /* reducepv8hf_mask_round */
    case 2489:  /* reducepv16hf_mask_round */
    case 2485:  /* reducepv32hf_mask_round */
    case 2429:  /* ieee_minv8df3_mask_round */
    case 2425:  /* ieee_maxv8df3_mask_round */
    case 2413:  /* ieee_minv16sf3_mask_round */
    case 2409:  /* ieee_maxv16sf3_mask_round */
    case 2397:  /* ieee_minv32hf3_mask_round */
    case 2393:  /* ieee_maxv32hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8863:  /* vgf2p8mulb_v16qi_mask */
    case 8861:  /* vgf2p8mulb_v32qi_mask */
    case 8859:  /* vgf2p8mulb_v64qi_mask */
    case 8812:  /* avx5124vnniw_vp4dpwssds_mask */
    case 8809:  /* avx5124vnniw_vp4dpwssd_mask */
    case 8806:  /* avx5124fmaddps_4fnmaddss_mask */
    case 8803:  /* avx5124fmaddps_4fnmaddps_mask */
    case 8800:  /* avx5124fmaddps_4fmaddss_mask */
    case 8797:  /* avx5124fmaddps_4fmaddps_mask */
    case 8793:  /* vpmultishiftqbv32qi_mask */
    case 8791:  /* vpmultishiftqbv16qi_mask */
    case 8789:  /* vpmultishiftqbv64qi_mask */
    case 8713:  /* avx512vl_getmantv2df_mask */
    case 8709:  /* avx512vl_getmantv4df_mask */
    case 8705:  /* avx512f_getmantv8df_mask */
    case 8701:  /* avx512vl_getmantv4sf_mask */
    case 8697:  /* avx512vl_getmantv8sf_mask */
    case 8693:  /* avx512f_getmantv16sf_mask */
    case 8689:  /* avx512fp16_getmantv8hf_mask */
    case 8685:  /* avx512vl_getmantv16hf_mask */
    case 8681:  /* avx512bw_getmantv32hf_mask */
    case 8339:  /* avx512f_vcvtps2ph512_mask */
    case 8334:  /* vcvtps2ph256_mask */
    case 8077:  /* avx_vpermilvarv2df3_mask */
    case 8075:  /* avx_vpermilvarv4df3_mask */
    case 8073:  /* avx512f_vpermilvarv8df3_mask */
    case 8071:  /* avx_vpermilvarv4sf3_mask */
    case 8069:  /* avx_vpermilvarv8sf3_mask */
    case 8067:  /* avx512f_vpermilvarv16sf3_mask */
    case 7869:  /* avx512bw_permvarv32hi_mask */
    case 7867:  /* avx512vl_permvarv16hi_mask */
    case 7865:  /* avx512vl_permvarv8hi_mask */
    case 7863:  /* avx512vl_permvarv32qi_mask */
    case 7861:  /* avx512vl_permvarv16qi_mask */
    case 7859:  /* avx512bw_permvarv64qi_mask */
    case 7857:  /* avx2_permvarv4df_mask */
    case 7855:  /* avx2_permvarv4di_mask */
    case 7853:  /* avx512f_permvarv8df_mask */
    case 7851:  /* avx512f_permvarv8di_mask */
    case 7849:  /* avx512f_permvarv16sf_mask */
    case 7847:  /* avx512f_permvarv16si_mask */
    case 7845:  /* avx2_permvarv8sf_mask */
    case 7843:  /* avx2_permvarv8si_mask */
    case 7339:  /* ssse3_pshufbv16qi3_mask */
    case 7337:  /* avx2_pshufbv32qi3_mask */
    case 7335:  /* avx512bw_pshufbv64qi3_mask */
    case 7321:  /* avx512bw_pmaddubsw512v32hi_mask */
    case 7319:  /* avx512bw_pmaddubsw512v16hi_mask */
    case 7317:  /* avx512bw_pmaddubsw512v8hi_mask */
    case 7184:  /* avx512bw_pshufhwv32hi_mask */
    case 7178:  /* avx512bw_pshuflwv32hi_mask */
    case 6436:  /* avx512bw_pmaddwd512v8hi_mask */
    case 6434:  /* avx512bw_pmaddwd512v16hi_mask */
    case 6432:  /* avx512bw_pmaddwd512v32hi_mask */
    case 5982:  /* avx512vl_rndscalev2df_mask */
    case 5978:  /* avx512vl_rndscalev4df_mask */
    case 5974:  /* avx512f_rndscalev8df_mask */
    case 5970:  /* avx512vl_rndscalev4sf_mask */
    case 5966:  /* avx512vl_rndscalev8sf_mask */
    case 5962:  /* avx512f_rndscalev16sf_mask */
    case 5958:  /* avx512fp16_rndscalev8hf_mask */
    case 5954:  /* avx512vl_rndscalev16hf_mask */
    case 5950:  /* avx512bw_rndscalev32hf_mask */
    case 4468:  /* avx512vl_scalefv2df_mask */
    case 4464:  /* avx512vl_scalefv4df_mask */
    case 4460:  /* avx512f_scalefv8df_mask */
    case 4456:  /* avx512vl_scalefv4sf_mask */
    case 4452:  /* avx512vl_scalefv8sf_mask */
    case 4448:  /* avx512f_scalefv16sf_mask */
    case 4444:  /* avx512fp16_scalefv8hf_mask */
    case 4440:  /* avx512vl_scalefv16hf_mask */
    case 4436:  /* avx512bw_scalefv32hf_mask */
    case 2516:  /* reducepv2df_mask */
    case 2512:  /* reducepv4df_mask */
    case 2508:  /* reducepv8df_mask */
    case 2504:  /* reducepv4sf_mask */
    case 2500:  /* reducepv8sf_mask */
    case 2496:  /* reducepv16sf_mask */
    case 2492:  /* reducepv8hf_mask */
    case 2488:  /* reducepv16hf_mask */
    case 2484:  /* reducepv32hf_mask */
    case 2437:  /* ieee_minv2df3_mask */
    case 2435:  /* ieee_maxv2df3_mask */
    case 2433:  /* ieee_minv4df3_mask */
    case 2431:  /* ieee_maxv4df3_mask */
    case 2428:  /* ieee_minv8df3_mask */
    case 2424:  /* ieee_maxv8df3_mask */
    case 2421:  /* ieee_minv4sf3_mask */
    case 2419:  /* ieee_maxv4sf3_mask */
    case 2417:  /* ieee_minv8sf3_mask */
    case 2415:  /* ieee_maxv8sf3_mask */
    case 2412:  /* ieee_minv16sf3_mask */
    case 2408:  /* ieee_maxv16sf3_mask */
    case 2405:  /* ieee_minv8hf3_mask */
    case 2403:  /* ieee_maxv8hf3_mask */
    case 2401:  /* ieee_minv16hf3_mask */
    case 2399:  /* ieee_maxv16hf3_mask */
    case 2396:  /* ieee_minv32hf3_mask */
    case 2392:  /* ieee_maxv32hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 8712:  /* avx512vl_getmantv2df_round */
    case 8708:  /* avx512vl_getmantv4df_round */
    case 8704:  /* avx512f_getmantv8df_round */
    case 8700:  /* avx512vl_getmantv4sf_round */
    case 8696:  /* avx512vl_getmantv8sf_round */
    case 8692:  /* avx512f_getmantv16sf_round */
    case 8688:  /* avx512fp16_getmantv8hf_round */
    case 8684:  /* avx512vl_getmantv16hf_round */
    case 8680:  /* avx512bw_getmantv32hf_round */
    case 8338:  /* *avx512f_vcvtps2ph512_round */
    case 5981:  /* avx512vl_rndscalev2df_round */
    case 5977:  /* avx512vl_rndscalev4df_round */
    case 5973:  /* avx512f_rndscalev8df_round */
    case 5969:  /* avx512vl_rndscalev4sf_round */
    case 5965:  /* avx512vl_rndscalev8sf_round */
    case 5961:  /* avx512f_rndscalev16sf_round */
    case 5957:  /* avx512fp16_rndscalev8hf_round */
    case 5953:  /* avx512vl_rndscalev16hf_round */
    case 5949:  /* avx512bw_rndscalev32hf_round */
    case 4467:  /* avx512vl_scalefv2df_round */
    case 4463:  /* avx512vl_scalefv4df_round */
    case 4459:  /* avx512f_scalefv8df_round */
    case 4455:  /* avx512vl_scalefv4sf_round */
    case 4451:  /* avx512vl_scalefv8sf_round */
    case 4447:  /* avx512f_scalefv16sf_round */
    case 4443:  /* avx512fp16_scalefv8hf_round */
    case 4439:  /* avx512vl_scalefv16hf_round */
    case 4435:  /* avx512bw_scalefv32hf_round */
    case 3592:  /* avx512bw_fcmulc_v32hf_round */
    case 3588:  /* avx512bw_fmulc_v32hf_round */
    case 2515:  /* *reducepv2df_round */
    case 2511:  /* *reducepv4df_round */
    case 2507:  /* *reducepv8df_round */
    case 2503:  /* *reducepv4sf_round */
    case 2499:  /* *reducepv8sf_round */
    case 2495:  /* *reducepv16sf_round */
    case 2491:  /* *reducepv8hf_round */
    case 2487:  /* *reducepv16hf_round */
    case 2483:  /* *reducepv32hf_round */
    case 2427:  /* ieee_minv8df3_round */
    case 2423:  /* ieee_maxv8df3_round */
    case 2411:  /* ieee_minv16sf3_round */
    case 2407:  /* ieee_maxv16sf3_round */
    case 2395:  /* ieee_minv32hf3_round */
    case 2391:  /* ieee_maxv32hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2341:  /* *avx512fp16_vmrsqrtv8hf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2311:  /* *sse2_vmsqrtv2df2_mask_round */
    case 2307:  /* *sse_vmsqrtv4sf2_mask_round */
    case 2303:  /* *avx512fp16_vmsqrtv8hf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 3932:  /* avx512fp16_vcvtsd2sh_mask_mem */
    case 3930:  /* avx512fp16_vcvtss2sh_mask_mem */
    case 3920:  /* avx512fp16_vcvtsh2ss_mask_mem */
    case 3918:  /* avx512fp16_vcvtsh2sd_mask_mem */
    case 2310:  /* *sse2_vmsqrtv2df2_mask */
    case 2306:  /* *sse_vmsqrtv4sf2_mask */
    case 2302:  /* *avx512fp16_vmsqrtv8hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2309:  /* *sse2_vmsqrtv2df2_round */
    case 2305:  /* *sse_vmsqrtv4sf2_round */
    case 2301:  /* *avx512fp16_vmsqrtv8hf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2299:  /* sse2_vmsqrtv2df2_mask_round */
    case 2295:  /* sse_vmsqrtv4sf2_mask_round */
    case 2291:  /* avx512fp16_vmsqrtv8hf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2298:  /* sse2_vmsqrtv2df2_mask */
    case 2294:  /* sse_vmsqrtv4sf2_mask */
    case 2290:  /* avx512fp16_vmsqrtv8hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2297:  /* sse2_vmsqrtv2df2_round */
    case 2293:  /* sse_vmsqrtv4sf2_round */
    case 2289:  /* avx512fp16_vmsqrtv8hf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4229:  /* avx512f_cvtps2pd512_mask_round */
    case 4219:  /* avx512f_cvtpd2ps512_mask_round */
    case 4190:  /* fixuns_truncv8sfv8di2_mask_round */
    case 4186:  /* fix_truncv8sfv8di2_mask_round */
    case 4158:  /* fixuns_truncv8dfv8di2_mask_round */
    case 4154:  /* fix_truncv8dfv8di2_mask_round */
    case 4143:  /* fixuns_truncv8dfv8si2_mask_round */
    case 4139:  /* fix_truncv8dfv8si2_mask_round */
    case 4094:  /* floatunsv8div8sf2_mask_round */
    case 4090:  /* floatv8div8sf2_mask_round */
    case 4086:  /* floatunsv2div2df2_mask_round */
    case 4082:  /* floatv2div2df2_mask_round */
    case 4078:  /* floatunsv4div4df2_mask_round */
    case 4074:  /* floatv4div4df2_mask_round */
    case 4070:  /* floatunsv8div8df2_mask_round */
    case 4066:  /* floatv8div8df2_mask_round */
    case 4020:  /* fixuns_truncv16sfv16si2_mask_round */
    case 4016:  /* fix_truncv16sfv16si2_mask_round */
    case 3976:  /* floatunsv4siv4sf2_mask_round */
    case 3972:  /* floatunsv8siv8sf2_mask_round */
    case 3968:  /* floatunsv16siv16sf2_mask_round */
    case 3960:  /* floatv16siv16sf2_mask_round */
    case 3899:  /* avx512fp16_vcvtps2ph_v8sf_mask_round */
    case 3895:  /* avx512fp16_vcvtps2ph_v16sf_mask_round */
    case 3891:  /* avx512fp16_vcvtpd2ph_v8df_mask_round */
    case 3875:  /* avx512fp16_float_extend_phv8sf2_mask_round */
    case 3871:  /* avx512fp16_float_extend_phv16sf2_mask_round */
    case 3867:  /* avx512fp16_float_extend_phv8df2_mask_round */
    case 3827:  /* avx512fp16_fixuns_truncv8di2_mask_round */
    case 3823:  /* avx512fp16_fix_truncv8di2_mask_round */
    case 3819:  /* avx512fp16_fixuns_truncv16si2_mask_round */
    case 3815:  /* avx512fp16_fix_truncv16si2_mask_round */
    case 3811:  /* avx512fp16_fixuns_truncv8si2_mask_round */
    case 3807:  /* avx512fp16_fix_truncv8si2_mask_round */
    case 3803:  /* avx512fp16_fixuns_truncv32hi2_mask_round */
    case 3799:  /* avx512fp16_fix_truncv32hi2_mask_round */
    case 3795:  /* avx512fp16_fixuns_truncv16hi2_mask_round */
    case 3791:  /* avx512fp16_fix_truncv16hi2_mask_round */
    case 3787:  /* avx512fp16_fixuns_truncv8hi2_mask_round */
    case 3783:  /* avx512fp16_fix_truncv8hi2_mask_round */
    case 3741:  /* avx512fp16_vcvtuqq2ph_v8di_mask_round */
    case 3737:  /* avx512fp16_vcvtqq2ph_v8di_mask_round */
    case 3733:  /* avx512fp16_vcvtudq2ph_v16si_mask_round */
    case 3729:  /* avx512fp16_vcvtdq2ph_v16si_mask_round */
    case 3725:  /* avx512fp16_vcvtudq2ph_v8si_mask_round */
    case 3721:  /* avx512fp16_vcvtdq2ph_v8si_mask_round */
    case 3717:  /* avx512fp16_vcvtuw2ph_v32hi_mask_round */
    case 3713:  /* avx512fp16_vcvtw2ph_v32hi_mask_round */
    case 3709:  /* avx512fp16_vcvtuw2ph_v16hi_mask_round */
    case 3705:  /* avx512fp16_vcvtw2ph_v16hi_mask_round */
    case 3701:  /* avx512fp16_vcvtuw2ph_v8hi_mask_round */
    case 3697:  /* avx512fp16_vcvtw2ph_v8hi_mask_round */
    case 3193:  /* *fma_fnmadd_v8df_round */
    case 3184:  /* *fma_fnmadd_v16sf_round */
    case 3174:  /* *fma_fnmadd_v32hf_round */
    case 2283:  /* avx512f_sqrtv8df2_mask_round */
    case 2275:  /* avx512f_sqrtv16sf2_mask_round */
    case 2267:  /* avx512fp16_sqrtv32hf2_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 4227:  /* avx512f_cvtps2pd512_round */
    case 4217:  /* *avx512f_cvtpd2ps512_round */
    case 4188:  /* fixuns_truncv8sfv8di2_round */
    case 4184:  /* fix_truncv8sfv8di2_round */
    case 4156:  /* fixuns_truncv8dfv8di2_round */
    case 4152:  /* fix_truncv8dfv8di2_round */
    case 4141:  /* fixuns_truncv8dfv8si2_round */
    case 4137:  /* fix_truncv8dfv8si2_round */
    case 4092:  /* floatunsv8div8sf2_round */
    case 4088:  /* floatv8div8sf2_round */
    case 4084:  /* floatunsv2div2df2_round */
    case 4080:  /* floatv2div2df2_round */
    case 4076:  /* floatunsv4div4df2_round */
    case 4072:  /* floatv4div4df2_round */
    case 4068:  /* floatunsv8div8df2_round */
    case 4064:  /* floatv8div8df2_round */
    case 4018:  /* fixuns_truncv16sfv16si2_round */
    case 4014:  /* fix_truncv16sfv16si2_round */
    case 3974:  /* *floatunsv4siv4sf2_round */
    case 3970:  /* *floatunsv8siv8sf2_round */
    case 3966:  /* *floatunsv16siv16sf2_round */
    case 3958:  /* floatv16siv16sf2_round */
    case 3897:  /* avx512fp16_vcvtps2ph_v8sf_round */
    case 3893:  /* avx512fp16_vcvtps2ph_v16sf_round */
    case 3889:  /* avx512fp16_vcvtpd2ph_v8df_round */
    case 3873:  /* avx512fp16_float_extend_phv8sf2_round */
    case 3869:  /* avx512fp16_float_extend_phv16sf2_round */
    case 3865:  /* avx512fp16_float_extend_phv8df2_round */
    case 3825:  /* avx512fp16_fixuns_truncv8di2_round */
    case 3821:  /* avx512fp16_fix_truncv8di2_round */
    case 3817:  /* avx512fp16_fixuns_truncv16si2_round */
    case 3813:  /* avx512fp16_fix_truncv16si2_round */
    case 3809:  /* avx512fp16_fixuns_truncv8si2_round */
    case 3805:  /* avx512fp16_fix_truncv8si2_round */
    case 3801:  /* avx512fp16_fixuns_truncv32hi2_round */
    case 3797:  /* avx512fp16_fix_truncv32hi2_round */
    case 3793:  /* avx512fp16_fixuns_truncv16hi2_round */
    case 3789:  /* avx512fp16_fix_truncv16hi2_round */
    case 3785:  /* avx512fp16_fixuns_truncv8hi2_round */
    case 3781:  /* avx512fp16_fix_truncv8hi2_round */
    case 3739:  /* avx512fp16_vcvtuqq2ph_v8di_round */
    case 3735:  /* avx512fp16_vcvtqq2ph_v8di_round */
    case 3731:  /* avx512fp16_vcvtudq2ph_v16si_round */
    case 3727:  /* avx512fp16_vcvtdq2ph_v16si_round */
    case 3723:  /* avx512fp16_vcvtudq2ph_v8si_round */
    case 3719:  /* avx512fp16_vcvtdq2ph_v8si_round */
    case 3715:  /* avx512fp16_vcvtuw2ph_v32hi_round */
    case 3711:  /* avx512fp16_vcvtw2ph_v32hi_round */
    case 3707:  /* avx512fp16_vcvtuw2ph_v16hi_round */
    case 3703:  /* avx512fp16_vcvtw2ph_v16hi_round */
    case 3699:  /* avx512fp16_vcvtuw2ph_v8hi_round */
    case 3695:  /* avx512fp16_vcvtw2ph_v8hi_round */
    case 2281:  /* avx512f_sqrtv8df2_round */
    case 2273:  /* avx512f_sqrtv16sf2_round */
    case 2265:  /* avx512fp16_sqrtv32hf2_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2339:  /* avx512fp16_vmrsqrtv8hf2_mask */
    case 2335:  /* rsqrt14_v2df_mask */
    case 2334:  /* rsqrt14_v4sf_mask */
    case 2263:  /* srcp14v2df_mask */
    case 2262:  /* srcp14v4sf_mask */
    case 2246:  /* avx512fp16_vmrcpv8hf2_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 2340:  /* *avx512fp16_vmrsqrtv8hf2 */
    case 2337:  /* *sse_vmrsqrtv4sf2 */
    case 2247:  /* *avx512fp16_vmrcpv8hf2 */
    case 2238:  /* *sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 7788:  /* *xop_vmfrczv2df2 */
    case 7787:  /* *xop_vmfrczv4sf2 */
    case 7710:  /* avx512er_vmrsqrt28v2df */
    case 7706:  /* avx512er_vmrsqrt28v4sf */
    case 7694:  /* avx512er_vmrcp28v2df */
    case 7690:  /* avx512er_vmrcp28v4sf */
    case 4121:  /* *avx_cvtpd2dq256_2 */
    case 2338:  /* avx512fp16_vmrsqrtv8hf2 */
    case 2336:  /* sse_vmrsqrtv4sf2 */
    case 2333:  /* rsqrt14v2df */
    case 2332:  /* rsqrt14v4sf */
    case 2261:  /* srcp14v2df */
    case 2260:  /* srcp14v4sf */
    case 2245:  /* avx512fp16_vmrcpv8hf2 */
    case 2237:  /* sse_vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 2467:  /* sse2_vmsminv2df3_mask_round */
    case 2463:  /* sse2_vmsmaxv2df3_mask_round */
    case 2459:  /* sse_vmsminv4sf3_mask_round */
    case 2455:  /* sse_vmsmaxv4sf3_mask_round */
    case 2451:  /* avx512fp16_vmsminv8hf3_mask_round */
    case 2447:  /* avx512fp16_vmsmaxv8hf3_mask_round */
    case 2210:  /* sse2_vmdivv2df3_mask_round */
    case 2206:  /* sse2_vmmulv2df3_mask_round */
    case 2202:  /* sse_vmdivv4sf3_mask_round */
    case 2198:  /* sse_vmmulv4sf3_mask_round */
    case 2194:  /* avx512fp16_vmdivv8hf3_mask_round */
    case 2190:  /* avx512fp16_vmmulv8hf3_mask_round */
    case 2144:  /* sse2_vmsubv2df3_mask_round */
    case 2140:  /* sse2_vmaddv2df3_mask_round */
    case 2136:  /* sse_vmsubv4sf3_mask_round */
    case 2132:  /* sse_vmaddv4sf3_mask_round */
    case 2128:  /* avx512fp16_vmsubv8hf3_mask_round */
    case 2124:  /* avx512fp16_vmaddv8hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2465:  /* sse2_vmsminv2df3_mask */
    case 2461:  /* sse2_vmsmaxv2df3_mask */
    case 2457:  /* sse_vmsminv4sf3_mask */
    case 2453:  /* sse_vmsmaxv4sf3_mask */
    case 2449:  /* avx512fp16_vmsminv8hf3_mask */
    case 2445:  /* avx512fp16_vmsmaxv8hf3_mask */
    case 2209:  /* sse2_vmdivv2df3_mask */
    case 2205:  /* sse2_vmmulv2df3_mask */
    case 2201:  /* sse_vmdivv4sf3_mask */
    case 2197:  /* sse_vmmulv4sf3_mask */
    case 2193:  /* avx512fp16_vmdivv8hf3_mask */
    case 2189:  /* avx512fp16_vmmulv8hf3_mask */
    case 2143:  /* sse2_vmsubv2df3_mask */
    case 2139:  /* sse2_vmaddv2df3_mask */
    case 2135:  /* sse_vmsubv4sf3_mask */
    case 2131:  /* sse_vmaddv4sf3_mask */
    case 2127:  /* avx512fp16_vmsubv8hf3_mask */
    case 2123:  /* avx512fp16_vmaddv8hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2466:  /* sse2_vmsminv2df3_round */
    case 2462:  /* sse2_vmsmaxv2df3_round */
    case 2458:  /* sse_vmsminv4sf3_round */
    case 2454:  /* sse_vmsmaxv4sf3_round */
    case 2450:  /* avx512fp16_vmsminv8hf3_round */
    case 2446:  /* avx512fp16_vmsmaxv8hf3_round */
    case 2208:  /* sse2_vmdivv2df3_round */
    case 2204:  /* sse2_vmmulv2df3_round */
    case 2200:  /* sse_vmdivv4sf3_round */
    case 2196:  /* sse_vmmulv4sf3_round */
    case 2192:  /* avx512fp16_vmdivv8hf3_round */
    case 2188:  /* avx512fp16_vmmulv8hf3_round */
    case 2142:  /* sse2_vmsubv2df3_round */
    case 2138:  /* sse2_vmaddv2df3_round */
    case 2134:  /* sse_vmsubv4sf3_round */
    case 2130:  /* sse_vmaddv4sf3_round */
    case 2126:  /* avx512fp16_vmsubv8hf3_round */
    case 2122:  /* avx512fp16_vmaddv8hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2464:  /* sse2_vmsminv2df3 */
    case 2460:  /* sse2_vmsmaxv2df3 */
    case 2456:  /* sse_vmsminv4sf3 */
    case 2452:  /* sse_vmsmaxv4sf3 */
    case 2448:  /* avx512fp16_vmsminv8hf3 */
    case 2444:  /* avx512fp16_vmsmaxv8hf3 */
    case 2207:  /* sse2_vmdivv2df3 */
    case 2203:  /* sse2_vmmulv2df3 */
    case 2199:  /* sse_vmdivv4sf3 */
    case 2195:  /* sse_vmmulv4sf3 */
    case 2191:  /* avx512fp16_vmdivv8hf3 */
    case 2187:  /* avx512fp16_vmmulv8hf3 */
    case 2141:  /* sse2_vmsubv2df3 */
    case 2137:  /* sse2_vmaddv2df3 */
    case 2133:  /* sse_vmsubv4sf3 */
    case 2129:  /* sse_vmaddv4sf3 */
    case 2125:  /* avx512fp16_vmsubv8hf3 */
    case 2121:  /* avx512fp16_vmaddv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2186:  /* *sse2_vmdivv2df3 */
    case 2185:  /* *sse2_vmmulv2df3 */
    case 2184:  /* *sse_vmdivv4sf3 */
    case 2183:  /* *sse_vmmulv4sf3 */
    case 2182:  /* *avx512fp16_vmdivv8hf3 */
    case 2181:  /* *avx512fp16_vmmulv8hf3 */
    case 2120:  /* *sse2_vmsubv2df3 */
    case 2119:  /* *sse2_vmaddv2df3 */
    case 2118:  /* *sse_vmsubv4sf3 */
    case 2117:  /* *sse_vmaddv4sf3 */
    case 2116:  /* *avx512fp16_vmsubv8hf3 */
    case 2115:  /* *avx512fp16_vmaddv8hf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 2381:  /* *sminv8df3_mask_round */
    case 2377:  /* *smaxv8df3_mask_round */
    case 2365:  /* *sminv16sf3_mask_round */
    case 2361:  /* *smaxv16sf3_mask_round */
    case 2349:  /* *sminv32hf3_mask_round */
    case 2345:  /* *smaxv32hf3_mask_round */
    case 2230:  /* avx512f_divv8df3_mask_round */
    case 2222:  /* avx512f_divv16sf3_mask_round */
    case 2214:  /* avx512fp16_divv32hf3_mask_round */
    case 2180:  /* *mulv2df3_mask_round */
    case 2176:  /* *mulv4df3_mask_round */
    case 2172:  /* *mulv8df3_mask_round */
    case 2168:  /* *mulv4sf3_mask_round */
    case 2164:  /* *mulv8sf3_mask_round */
    case 2160:  /* *mulv16sf3_mask_round */
    case 2156:  /* *mulv8hf3_mask_round */
    case 2152:  /* *mulv16hf3_mask_round */
    case 2148:  /* *mulv32hf3_mask_round */
    case 2114:  /* *subv2df3_mask_round */
    case 2110:  /* *addv2df3_mask_round */
    case 2106:  /* *subv4df3_mask_round */
    case 2102:  /* *addv4df3_mask_round */
    case 2098:  /* *subv8df3_mask_round */
    case 2094:  /* *addv8df3_mask_round */
    case 2090:  /* *subv4sf3_mask_round */
    case 2086:  /* *addv4sf3_mask_round */
    case 2082:  /* *subv8sf3_mask_round */
    case 2078:  /* *addv8sf3_mask_round */
    case 2074:  /* *subv16sf3_mask_round */
    case 2070:  /* *addv16sf3_mask_round */
    case 2066:  /* *subv8hf3_mask_round */
    case 2062:  /* *addv8hf3_mask_round */
    case 2058:  /* *subv16hf3_mask_round */
    case 2054:  /* *addv16hf3_mask_round */
    case 2050:  /* *subv32hf3_mask_round */
    case 2046:  /* *addv32hf3_mask_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 8282:  /* avx512bw_lshrvv32hi_mask */
    case 8280:  /* avx512bw_ashlvv32hi_mask */
    case 8278:  /* avx512vl_lshrvv16hi_mask */
    case 8276:  /* avx512vl_ashlvv16hi_mask */
    case 8274:  /* avx512vl_lshrvv8hi_mask */
    case 8272:  /* avx512vl_ashlvv8hi_mask */
    case 8270:  /* avx2_lshrvv2di_mask */
    case 8268:  /* avx2_ashlvv2di_mask */
    case 8266:  /* avx2_lshrvv4di_mask */
    case 8264:  /* avx2_ashlvv4di_mask */
    case 8262:  /* avx512f_lshrvv8di_mask */
    case 8260:  /* avx512f_ashlvv8di_mask */
    case 8258:  /* avx2_lshrvv4si_mask */
    case 8256:  /* avx2_ashlvv4si_mask */
    case 8254:  /* avx2_lshrvv8si_mask */
    case 8252:  /* avx2_ashlvv8si_mask */
    case 8250:  /* avx512f_lshrvv16si_mask */
    case 8248:  /* avx512f_ashlvv16si_mask */
    case 8246:  /* avx512bw_ashrvv32hi_mask */
    case 8244:  /* avx512vl_ashrvv16hi_mask */
    case 8242:  /* avx512vl_ashrvv8hi_mask */
    case 8240:  /* avx512f_ashrvv8di_mask */
    case 8238:  /* avx2_ashrvv4di_mask */
    case 8236:  /* avx2_ashrvv2di_mask */
    case 8234:  /* avx512f_ashrvv16si_mask */
    case 8232:  /* avx2_ashrvv8si_mask */
    case 8230:  /* avx2_ashrvv4si_mask */
    case 6821:  /* *xorv2di3_mask */
    case 6819:  /* *iorv2di3_mask */
    case 6817:  /* *andv2di3_mask */
    case 6815:  /* *xorv4di3_mask */
    case 6813:  /* *iorv4di3_mask */
    case 6811:  /* *andv4di3_mask */
    case 6809:  /* *xorv8di3_mask */
    case 6807:  /* *iorv8di3_mask */
    case 6805:  /* *andv8di3_mask */
    case 6803:  /* *xorv4si3_mask */
    case 6801:  /* *iorv4si3_mask */
    case 6799:  /* *andv4si3_mask */
    case 6797:  /* *xorv8si3_mask */
    case 6795:  /* *iorv8si3_mask */
    case 6793:  /* *andv8si3_mask */
    case 6791:  /* *xorv16si3_mask */
    case 6789:  /* *iorv16si3_mask */
    case 6787:  /* *andv16si3_mask */
    case 6767:  /* one_cmplv2di2_mask */
    case 6765:  /* one_cmplv4di2_mask */
    case 6763:  /* one_cmplv4si2_mask */
    case 6761:  /* one_cmplv8si2_mask */
    case 6753:  /* one_cmplv8di2_mask */
    case 6751:  /* one_cmplv16si2_mask */
    case 6709:  /* *sse4_1_uminv4si3_mask */
    case 6707:  /* *sse4_1_umaxv4si3_mask */
    case 6705:  /* *sse4_1_uminv8hi3_mask */
    case 6703:  /* *sse4_1_umaxv8hi3_mask */
    case 6699:  /* *sse4_1_sminv4si3_mask */
    case 6697:  /* *sse4_1_smaxv4si3_mask */
    case 6695:  /* *sse4_1_sminv16qi3_mask */
    case 6693:  /* *sse4_1_smaxv16qi3_mask */
    case 6691:  /* uminv8hi3_mask */
    case 6689:  /* umaxv8hi3_mask */
    case 6687:  /* sminv8hi3_mask */
    case 6685:  /* smaxv8hi3_mask */
    case 6683:  /* uminv16hi3_mask */
    case 6681:  /* umaxv16hi3_mask */
    case 6679:  /* sminv16hi3_mask */
    case 6677:  /* smaxv16hi3_mask */
    case 6675:  /* uminv32hi3_mask */
    case 6673:  /* umaxv32hi3_mask */
    case 6671:  /* sminv32hi3_mask */
    case 6669:  /* smaxv32hi3_mask */
    case 6667:  /* uminv32qi3_mask */
    case 6665:  /* umaxv32qi3_mask */
    case 6663:  /* sminv32qi3_mask */
    case 6661:  /* smaxv32qi3_mask */
    case 6659:  /* uminv16qi3_mask */
    case 6657:  /* umaxv16qi3_mask */
    case 6655:  /* sminv16qi3_mask */
    case 6653:  /* smaxv16qi3_mask */
    case 6651:  /* uminv64qi3_mask */
    case 6649:  /* umaxv64qi3_mask */
    case 6647:  /* sminv64qi3_mask */
    case 6645:  /* smaxv64qi3_mask */
    case 6643:  /* *avx512f_uminv2di3_mask */
    case 6641:  /* *avx512f_umaxv2di3_mask */
    case 6639:  /* *avx512f_sminv2di3_mask */
    case 6637:  /* *avx512f_smaxv2di3_mask */
    case 6635:  /* *avx512f_uminv4di3_mask */
    case 6633:  /* *avx512f_umaxv4di3_mask */
    case 6631:  /* *avx512f_sminv4di3_mask */
    case 6629:  /* *avx512f_smaxv4di3_mask */
    case 6627:  /* *avx512f_uminv8di3_mask */
    case 6625:  /* *avx512f_umaxv8di3_mask */
    case 6623:  /* *avx512f_sminv8di3_mask */
    case 6621:  /* *avx512f_smaxv8di3_mask */
    case 6619:  /* *avx512f_uminv4si3_mask */
    case 6617:  /* *avx512f_umaxv4si3_mask */
    case 6615:  /* *avx512f_sminv4si3_mask */
    case 6613:  /* *avx512f_smaxv4si3_mask */
    case 6611:  /* *avx512f_uminv8si3_mask */
    case 6609:  /* *avx512f_umaxv8si3_mask */
    case 6607:  /* *avx512f_sminv8si3_mask */
    case 6605:  /* *avx512f_smaxv8si3_mask */
    case 6603:  /* *avx512f_uminv16si3_mask */
    case 6601:  /* *avx512f_umaxv16si3_mask */
    case 6599:  /* *avx512f_sminv16si3_mask */
    case 6597:  /* *avx512f_smaxv16si3_mask */
    case 6583:  /* avx512vl_rorv2di_mask */
    case 6581:  /* avx512vl_rolv2di_mask */
    case 6579:  /* avx512vl_rorv4di_mask */
    case 6577:  /* avx512vl_rolv4di_mask */
    case 6575:  /* avx512f_rorv8di_mask */
    case 6573:  /* avx512f_rolv8di_mask */
    case 6571:  /* avx512vl_rorv4si_mask */
    case 6569:  /* avx512vl_rolv4si_mask */
    case 6567:  /* avx512vl_rorv8si_mask */
    case 6565:  /* avx512vl_rolv8si_mask */
    case 6563:  /* avx512f_rorv16si_mask */
    case 6561:  /* avx512f_rolv16si_mask */
    case 6559:  /* avx512vl_rorvv2di_mask */
    case 6557:  /* avx512vl_rolvv2di_mask */
    case 6555:  /* avx512vl_rorvv4di_mask */
    case 6553:  /* avx512vl_rolvv4di_mask */
    case 6551:  /* avx512f_rorvv8di_mask */
    case 6549:  /* avx512f_rolvv8di_mask */
    case 6547:  /* avx512vl_rorvv4si_mask */
    case 6545:  /* avx512vl_rolvv4si_mask */
    case 6543:  /* avx512vl_rorvv8si_mask */
    case 6541:  /* avx512vl_rolvv8si_mask */
    case 6539:  /* avx512f_rorvv16si_mask */
    case 6537:  /* avx512f_rolvv16si_mask */
    case 6520:  /* lshrv8di3_mask */
    case 6518:  /* ashlv8di3_mask */
    case 6516:  /* lshrv16si3_mask */
    case 6514:  /* ashlv16si3_mask */
    case 6512:  /* lshrv32hi3_mask */
    case 6510:  /* ashlv32hi3_mask */
    case 6496:  /* lshrv2di3_mask */
    case 6494:  /* ashlv2di3_mask */
    case 6492:  /* lshrv4di3_mask */
    case 6490:  /* ashlv4di3_mask */
    case 6488:  /* lshrv4si3_mask */
    case 6486:  /* ashlv4si3_mask */
    case 6484:  /* lshrv8si3_mask */
    case 6482:  /* ashlv8si3_mask */
    case 6480:  /* lshrv8hi3_mask */
    case 6478:  /* ashlv8hi3_mask */
    case 6476:  /* lshrv16hi3_mask */
    case 6474:  /* ashlv16hi3_mask */
    case 6472:  /* ashrv8di3_mask */
    case 6470:  /* ashrv16si3_mask */
    case 6468:  /* ashrv4di3_mask */
    case 6466:  /* ashrv32hi3_mask */
    case 6460:  /* ashrv2di3_mask */
    case 6458:  /* ashrv4si3_mask */
    case 6456:  /* ashrv8si3_mask */
    case 6454:  /* ashrv8hi3_mask */
    case 6452:  /* ashrv16hi3_mask */
    case 6450:  /* *sse4_1_mulv4si3_mask */
    case 6448:  /* *avx2_mulv8si3_mask */
    case 6446:  /* *avx512f_mulv16si3_mask */
    case 6444:  /* *avx512dq_mulv2di3_mask */
    case 6442:  /* *avx512dq_mulv4di3_mask */
    case 6440:  /* *avx512dq_mulv8di3_mask */
    case 6406:  /* *mulv8hi3_mask */
    case 6404:  /* *mulv16hi3_mask */
    case 6402:  /* *mulv32hi3_mask */
    case 6400:  /* *sse2_ussubv8hi3_mask */
    case 6398:  /* *sse2_sssubv8hi3_mask */
    case 6396:  /* *sse2_usaddv8hi3_mask */
    case 6394:  /* *sse2_ssaddv8hi3_mask */
    case 6392:  /* *avx2_ussubv16hi3_mask */
    case 6390:  /* *avx2_sssubv16hi3_mask */
    case 6388:  /* *avx2_usaddv16hi3_mask */
    case 6386:  /* *avx2_ssaddv16hi3_mask */
    case 6384:  /* *avx512bw_ussubv32hi3_mask */
    case 6382:  /* *avx512bw_sssubv32hi3_mask */
    case 6380:  /* *avx512bw_usaddv32hi3_mask */
    case 6378:  /* *avx512bw_ssaddv32hi3_mask */
    case 6376:  /* *sse2_ussubv16qi3_mask */
    case 6374:  /* *sse2_sssubv16qi3_mask */
    case 6372:  /* *sse2_usaddv16qi3_mask */
    case 6370:  /* *sse2_ssaddv16qi3_mask */
    case 6368:  /* *avx2_ussubv32qi3_mask */
    case 6366:  /* *avx2_sssubv32qi3_mask */
    case 6364:  /* *avx2_usaddv32qi3_mask */
    case 6362:  /* *avx2_ssaddv32qi3_mask */
    case 6360:  /* *avx512bw_ussubv64qi3_mask */
    case 6358:  /* *avx512bw_sssubv64qi3_mask */
    case 6356:  /* *avx512bw_usaddv64qi3_mask */
    case 6354:  /* *avx512bw_ssaddv64qi3_mask */
    case 6352:  /* *subv8hi3_mask */
    case 6351:  /* *addv8hi3_mask */
    case 6350:  /* *subv16hi3_mask */
    case 6349:  /* *addv16hi3_mask */
    case 6348:  /* *subv32hi3_mask */
    case 6347:  /* *addv32hi3_mask */
    case 6346:  /* *subv32qi3_mask */
    case 6345:  /* *addv32qi3_mask */
    case 6344:  /* *subv16qi3_mask */
    case 6343:  /* *addv16qi3_mask */
    case 6342:  /* *subv64qi3_mask */
    case 6341:  /* *addv64qi3_mask */
    case 6340:  /* *subv2di3_mask */
    case 6339:  /* *addv2di3_mask */
    case 6338:  /* *subv4di3_mask */
    case 6337:  /* *addv4di3_mask */
    case 6336:  /* *subv8di3_mask */
    case 6335:  /* *addv8di3_mask */
    case 6334:  /* *subv4si3_mask */
    case 6333:  /* *addv4si3_mask */
    case 6332:  /* *subv8si3_mask */
    case 6331:  /* *addv8si3_mask */
    case 6330:  /* *subv16si3_mask */
    case 6329:  /* *addv16si3_mask */
    case 3017:  /* *xorv8df3_mask */
    case 3015:  /* *iorv8df3_mask */
    case 3013:  /* *andv8df3_mask */
    case 3011:  /* *xorv16sf3_mask */
    case 3009:  /* *iorv16sf3_mask */
    case 3007:  /* *andv16sf3_mask */
    case 3002:  /* *xorv2df3_mask */
    case 3000:  /* *iorv2df3_mask */
    case 2998:  /* *andv2df3_mask */
    case 2996:  /* *xorv4df3_mask */
    case 2994:  /* *iorv4df3_mask */
    case 2992:  /* *andv4df3_mask */
    case 2990:  /* *xorv4sf3_mask */
    case 2988:  /* *iorv4sf3_mask */
    case 2986:  /* *andv4sf3_mask */
    case 2984:  /* *xorv8sf3_mask */
    case 2982:  /* *iorv8sf3_mask */
    case 2980:  /* *andv8sf3_mask */
    case 2389:  /* *sminv2df3_mask */
    case 2387:  /* *smaxv2df3_mask */
    case 2385:  /* *sminv4df3_mask */
    case 2383:  /* *smaxv4df3_mask */
    case 2380:  /* *sminv8df3_mask */
    case 2376:  /* *smaxv8df3_mask */
    case 2373:  /* *sminv4sf3_mask */
    case 2371:  /* *smaxv4sf3_mask */
    case 2369:  /* *sminv8sf3_mask */
    case 2367:  /* *smaxv8sf3_mask */
    case 2364:  /* *sminv16sf3_mask */
    case 2360:  /* *smaxv16sf3_mask */
    case 2357:  /* *sminv8hf3_mask */
    case 2355:  /* *smaxv8hf3_mask */
    case 2353:  /* *sminv16hf3_mask */
    case 2351:  /* *smaxv16hf3_mask */
    case 2348:  /* *sminv32hf3_mask */
    case 2344:  /* *smaxv32hf3_mask */
    case 2234:  /* sse2_divv2df3_mask */
    case 2232:  /* avx_divv4df3_mask */
    case 2229:  /* avx512f_divv8df3_mask */
    case 2226:  /* sse_divv4sf3_mask */
    case 2224:  /* avx_divv8sf3_mask */
    case 2221:  /* avx512f_divv16sf3_mask */
    case 2218:  /* avx512fp16_divv8hf3_mask */
    case 2216:  /* avx512fp16_divv16hf3_mask */
    case 2213:  /* avx512fp16_divv32hf3_mask */
    case 2179:  /* *mulv2df3_mask */
    case 2175:  /* *mulv4df3_mask */
    case 2171:  /* *mulv8df3_mask */
    case 2167:  /* *mulv4sf3_mask */
    case 2163:  /* *mulv8sf3_mask */
    case 2159:  /* *mulv16sf3_mask */
    case 2155:  /* *mulv8hf3_mask */
    case 2151:  /* *mulv16hf3_mask */
    case 2147:  /* *mulv32hf3_mask */
    case 2113:  /* *subv2df3_mask */
    case 2109:  /* *addv2df3_mask */
    case 2105:  /* *subv4df3_mask */
    case 2101:  /* *addv4df3_mask */
    case 2097:  /* *subv8df3_mask */
    case 2093:  /* *addv8df3_mask */
    case 2089:  /* *subv4sf3_mask */
    case 2085:  /* *addv4sf3_mask */
    case 2081:  /* *subv8sf3_mask */
    case 2077:  /* *addv8sf3_mask */
    case 2073:  /* *subv16sf3_mask */
    case 2069:  /* *addv16sf3_mask */
    case 2065:  /* *subv8hf3_mask */
    case 2061:  /* *addv8hf3_mask */
    case 2057:  /* *subv16hf3_mask */
    case 2053:  /* *addv16hf3_mask */
    case 2049:  /* *subv32hf3_mask */
    case 2045:  /* *addv32hf3_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2379:  /* *sminv8df3_round */
    case 2375:  /* *smaxv8df3_round */
    case 2363:  /* *sminv16sf3_round */
    case 2359:  /* *smaxv16sf3_round */
    case 2347:  /* *sminv32hf3_round */
    case 2343:  /* *smaxv32hf3_round */
    case 2228:  /* avx512f_divv8df3_round */
    case 2220:  /* avx512f_divv16sf3_round */
    case 2212:  /* avx512fp16_divv32hf3_round */
    case 2178:  /* *mulv2df3_round */
    case 2174:  /* *mulv4df3_round */
    case 2170:  /* *mulv8df3_round */
    case 2166:  /* *mulv4sf3_round */
    case 2162:  /* *mulv8sf3_round */
    case 2158:  /* *mulv16sf3_round */
    case 2154:  /* *mulv8hf3_round */
    case 2150:  /* *mulv16hf3_round */
    case 2146:  /* *mulv32hf3_round */
    case 2112:  /* *subv2df3_round */
    case 2108:  /* *addv2df3_round */
    case 2104:  /* *subv4df3_round */
    case 2100:  /* *addv4df3_round */
    case 2096:  /* *subv8df3_round */
    case 2092:  /* *addv8df3_round */
    case 2088:  /* *subv4sf3_round */
    case 2084:  /* *addv4sf3_round */
    case 2080:  /* *subv8sf3_round */
    case 2076:  /* *addv8sf3_round */
    case 2072:  /* *subv16sf3_round */
    case 2068:  /* *addv16sf3_round */
    case 2064:  /* *subv8hf3_round */
    case 2060:  /* *addv8hf3_round */
    case 2056:  /* *subv16hf3_round */
    case 2052:  /* *addv16hf3_round */
    case 2048:  /* *subv32hf3_round */
    case 2044:  /* *addv32hf3_round */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 2018:  /* kunpckdi */
    case 2017:  /* kunpcksi */
    case 2016:  /* kunpckhi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 1954:  /* *avx512vl_storev8bf_mask */
    case 1953:  /* *avx512vl_storev16bf_mask */
    case 1952:  /* *avx512bw_storev32bf_mask */
    case 1951:  /* *avx512fp16_storev8hf_mask */
    case 1950:  /* *avx512vl_storev16hf_mask */
    case 1949:  /* *avx512bw_storev32hf_mask */
    case 1948:  /* *avx512vl_storev8hi_mask */
    case 1947:  /* *avx512vl_storev16hi_mask */
    case 1946:  /* *avx512bw_storev32hi_mask */
    case 1945:  /* *avx512vl_storev32qi_mask */
    case 1944:  /* *avx512vl_storev16qi_mask */
    case 1943:  /* *avx512bw_storev64qi_mask */
    case 1942:  /* *avx512vl_storev2df_mask */
    case 1941:  /* *avx512vl_storev4df_mask */
    case 1940:  /* *avx512f_storev8df_mask */
    case 1939:  /* *avx512vl_storev4sf_mask */
    case 1938:  /* *avx512vl_storev8sf_mask */
    case 1937:  /* *avx512f_storev16sf_mask */
    case 1936:  /* *avx512vl_storev2di_mask */
    case 1935:  /* *avx512vl_storev4di_mask */
    case 1934:  /* *avx512f_storev8di_mask */
    case 1933:  /* *avx512vl_storev4si_mask */
    case 1932:  /* *avx512vl_storev8si_mask */
    case 1931:  /* *avx512f_storev16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 0;
      break;

    case 1906:  /* avx512f_storedf_mask */
    case 1905:  /* avx512f_storesf_mask */
    case 1904:  /* avx512f_storehf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 2);
      recog_data.dup_num[0] = 0;
      break;

    case 3535:  /* *fma4i_vmfnmadd_v2df */
    case 3534:  /* *fma4i_vmfnmadd_v4sf */
    case 1903:  /* *avx512f_loaddf_mask */
    case 1902:  /* *avx512f_loadsf_mask */
    case 1901:  /* *avx512f_loadhf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1900:  /* avx512f_movdf_mask */
    case 1899:  /* avx512f_movsf_mask */
    case 1898:  /* avx512f_movhf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 8756:  /* conflictv2di_mask */
    case 8754:  /* conflictv4di_mask */
    case 8752:  /* conflictv8di_mask */
    case 8750:  /* conflictv4si_mask */
    case 8748:  /* conflictv8si_mask */
    case 8746:  /* conflictv16si_mask */
    case 8328:  /* avx512f_vcvtph2ps512_mask */
    case 8325:  /* vcvtph2ps256_mask */
    case 8323:  /* *vcvtph2ps_load_mask */
    case 7704:  /* avx512er_rsqrt28v8df_mask */
    case 7700:  /* avx512er_rsqrt28v16sf_mask */
    case 7688:  /* avx512er_rcp28v8df_mask */
    case 7684:  /* avx512er_rcp28v16sf_mask */
    case 7680:  /* avx512er_exp2v8df_mask */
    case 7676:  /* avx512er_exp2v16sf_mask */
    case 5866:  /* avx512vl_getexpv2df_mask */
    case 5862:  /* avx512vl_getexpv4df_mask */
    case 5858:  /* avx512f_getexpv8df_mask */
    case 5854:  /* avx512vl_getexpv4sf_mask */
    case 5850:  /* avx512vl_getexpv8sf_mask */
    case 5846:  /* avx512f_getexpv16sf_mask */
    case 5842:  /* avx512fp16_getexpv8hf_mask */
    case 5838:  /* avx512vl_getexpv16hf_mask */
    case 5834:  /* avx512bw_getexpv32hf_mask */
    case 4182:  /* fixuns_notruncv2dfv2di2_mask */
    case 4180:  /* fixuns_notruncv4dfv4di2_mask */
    case 4177:  /* fixuns_notruncv8dfv8di2_mask */
    case 4174:  /* fix_notruncv2dfv2di2_mask */
    case 4172:  /* fix_notruncv4dfv4di2_mask */
    case 4169:  /* fix_notruncv8dfv8di2_mask */
    case 4131:  /* fixuns_notruncv4dfv4si2_mask */
    case 4127:  /* fixuns_notruncv8dfv8si2_mask */
    case 4120:  /* avx_cvtpd2dq256_mask */
    case 4117:  /* avx512f_cvtpd2dq512_mask */
    case 4010:  /* avx512dq_cvtps2uqqv4di_mask */
    case 4007:  /* avx512dq_cvtps2uqqv8di_mask */
    case 4002:  /* avx512dq_cvtps2qqv4di_mask */
    case 3999:  /* avx512dq_cvtps2qqv8di_mask */
    case 3995:  /* avx512vl_fixuns_notruncv4sfv4si_mask */
    case 3991:  /* avx512vl_fixuns_notruncv8sfv8si_mask */
    case 3987:  /* avx512f_fixuns_notruncv16sfv16si_mask */
    case 3983:  /* avx512f_fix_notruncv16sfv16si_mask */
    case 3980:  /* sse2_fix_notruncv4sfv4si_mask */
    case 3978:  /* avx_fix_notruncv8sfv8si_mask */
    case 3692:  /* avx512fp16_vcvtph2qq_v2di_mask */
    case 3688:  /* avx512fp16_vcvtph2uqq_v2di_mask */
    case 3684:  /* avx512fp16_vcvtph2dq_v4si_mask */
    case 3680:  /* avx512fp16_vcvtph2udq_v4si_mask */
    case 3676:  /* avx512fp16_vcvtph2w_v8hi_mask */
    case 3672:  /* avx512fp16_vcvtph2uw_v8hi_mask */
    case 3668:  /* avx512fp16_vcvtph2qq_v4di_mask */
    case 3664:  /* avx512fp16_vcvtph2uqq_v4di_mask */
    case 3660:  /* avx512fp16_vcvtph2dq_v8si_mask */
    case 3656:  /* avx512fp16_vcvtph2udq_v8si_mask */
    case 3652:  /* avx512fp16_vcvtph2w_v16hi_mask */
    case 3648:  /* avx512fp16_vcvtph2uw_v16hi_mask */
    case 3644:  /* avx512fp16_vcvtph2qq_v8di_mask */
    case 3640:  /* avx512fp16_vcvtph2uqq_v8di_mask */
    case 3636:  /* avx512fp16_vcvtph2dq_v16si_mask */
    case 3632:  /* avx512fp16_vcvtph2udq_v16si_mask */
    case 3628:  /* avx512fp16_vcvtph2w_v32hi_mask */
    case 3624:  /* avx512fp16_vcvtph2uw_v32hi_mask */
    case 2331:  /* rsqrt14v2df_mask */
    case 2329:  /* rsqrt14v4df_mask */
    case 2327:  /* rsqrt14v8df_mask */
    case 2325:  /* rsqrt14v4sf_mask */
    case 2323:  /* rsqrt14v8sf_mask */
    case 2321:  /* rsqrt14v16sf_mask */
    case 2319:  /* avx512fp16_rsqrtv8hf2_mask */
    case 2317:  /* avx512fp16_rsqrtv16hf2_mask */
    case 2315:  /* avx512fp16_rsqrtv32hf2_mask */
    case 2259:  /* rcp14v2df_mask */
    case 2257:  /* rcp14v4df_mask */
    case 2255:  /* rcp14v8df_mask */
    case 2253:  /* rcp14v4sf_mask */
    case 2251:  /* rcp14v8sf_mask */
    case 2249:  /* rcp14v16sf_mask */
    case 2244:  /* avx512fp16_rcpv8hf2_mask */
    case 2242:  /* avx512fp16_rcpv16hf2_mask */
    case 2240:  /* avx512fp16_rcpv32hf2_mask */
    case 1885:  /* *avx512vl_loadv8bf_mask */
    case 1884:  /* *avx512vl_loadv16bf_mask */
    case 1883:  /* *avx512bw_loadv32bf_mask */
    case 1882:  /* *avx512fp16_loadv8hf_mask */
    case 1881:  /* *avx512vl_loadv16hf_mask */
    case 1880:  /* *avx512bw_loadv32hf_mask */
    case 1879:  /* *avx512vl_loadv8hi_mask */
    case 1878:  /* *avx512vl_loadv16hi_mask */
    case 1877:  /* *avx512bw_loadv32hi_mask */
    case 1876:  /* *avx512vl_loadv32qi_mask */
    case 1875:  /* *avx512vl_loadv16qi_mask */
    case 1874:  /* *avx512bw_loadv64qi_mask */
    case 1861:  /* *avx512vl_loadv2df_mask */
    case 1860:  /* *avx512vl_loadv4df_mask */
    case 1859:  /* *avx512f_loadv8df_mask */
    case 1858:  /* *avx512vl_loadv4sf_mask */
    case 1857:  /* *avx512vl_loadv8sf_mask */
    case 1856:  /* *avx512f_loadv16sf_mask */
    case 1855:  /* *avx512vl_loadv2di_mask */
    case 1854:  /* *avx512vl_loadv4di_mask */
    case 1853:  /* *avx512f_loadv8di_mask */
    case 1852:  /* *avx512vl_loadv4si_mask */
    case 1851:  /* *avx512vl_loadv8si_mask */
    case 1850:  /* *avx512f_loadv16si_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7290:  /* *sse2_maskmovdqu */
    case 7289:  /* *sse2_maskmovdqu */
    case 1820:  /* *mmx_maskmovq */
    case 1819:  /* *mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 2), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 6022:  /* sse2_shufpd_v2df */
    case 6021:  /* sse2_shufpd_v2di */
    case 1809:  /* *punpckwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 4345:  /* *avx512dq_vextracti64x2_1 */
    case 4344:  /* *avx512dq_vextractf64x2_1 */
    case 1810:  /* *pshufw_1 */
    case 1787:  /* *mmx_pshufd_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      break;

    case 7887:  /* avx2_permv4df_1 */
    case 7885:  /* avx2_permv4di_1 */
    case 7181:  /* sse2_pshuflw_1 */
    case 7175:  /* sse2_pshufd_1 */
    case 4349:  /* *avx512f_vextracti32x4_1 */
    case 4348:  /* *avx512f_vextractf32x4_1 */
    case 1786:  /* mmx_pshufw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 1));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 2));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 3));
      break;

    case 7209:  /* *vec_extractv4si_zext_mem */
    case 7207:  /* *vec_extractv4si_zext */
    case 7198:  /* *vec_extractv16qi_zext */
    case 7197:  /* *vec_extractv8hi_zext */
    case 7196:  /* *vec_extractv16qi_zext */
    case 7195:  /* *vec_extractv8hi_zext */
    case 7194:  /* *vec_extractv16qi_zext */
    case 1808:  /* *pextrb_zext */
    case 1807:  /* *pextrb_zext */
    case 1806:  /* *pextrb_zext */
    case 1804:  /* *pextrw_zext */
    case 1803:  /* *pextrw_zext */
    case 1799:  /* *vec_extractv2si_zext_mem */
    case 1783:  /* *mmx_pextrb_zext */
    case 1782:  /* *mmx_pextrb_zext */
    case 1781:  /* *mmx_pextrb_zext */
    case 1779:  /* *mmx_pextrw_zext */
    case 1778:  /* *mmx_pextrw_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 7212:  /* *vec_extractv4ti */
    case 7211:  /* *vec_extractv2ti */
    case 7208:  /* *vec_extractv4si_mem */
    case 7206:  /* *vec_extractv4si */
    case 7200:  /* *vec_extractv8hi_mem */
    case 7199:  /* *vec_extractv16qi_mem */
    case 7193:  /* *vec_extractv8hi */
    case 7192:  /* *vec_extractv16qi */
    case 5899:  /* *vec_extractv4dfdf_valign */
    case 5898:  /* *vec_extractv8dfdf_valign */
    case 5897:  /* *vec_extractv8sfsf_valign */
    case 5896:  /* *vec_extractv16sfsf_valign */
    case 5895:  /* *vec_extractv4didi_valign */
    case 5894:  /* *vec_extractv8didi_valign */
    case 5893:  /* *vec_extractv8sisi_valign */
    case 5892:  /* *vec_extractv16sisi_valign */
    case 4405:  /* *vec_extractbf */
    case 4404:  /* *vec_extracthf */
    case 4341:  /* *vec_extractv4sf_mem */
    case 4340:  /* *sse4_1_extractps */
    case 1805:  /* *pextrb */
    case 1802:  /* *pextrw */
    case 1780:  /* *mmx_pextrb */
    case 1777:  /* *mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 1), 0, 0));
      break;

    case 7118:  /* sse4_1_pinsrq */
    case 7117:  /* sse4_1_pinsrd */
    case 7116:  /* sse2_pinsrbf */
    case 7115:  /* sse2_pinsrph */
    case 7114:  /* sse2_pinsrw */
    case 7113:  /* sse4_1_pinsrb */
    case 4328:  /* *vec_setv4sf_sse4_1 */
    case 1801:  /* *pinsrb */
    case 1800:  /* *pinsrw */
    case 1776:  /* *mmx_pinsrb */
    case 1775:  /* *mmx_pinsrw */
    case 1774:  /* *mmx_pinsrd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 7424:  /* sse4_1_packusdw */
    case 7422:  /* avx2_packusdw */
    case 7420:  /* avx512bw_packusdw */
    case 7051:  /* sse2_packuswb */
    case 7049:  /* avx2_packuswb */
    case 7047:  /* avx512bw_packuswb */
    case 7045:  /* sse2_packssdw */
    case 7043:  /* avx2_packssdw */
    case 7041:  /* avx512bw_packssdw */
    case 7039:  /* sse2_packsswb */
    case 7037:  /* avx2_packsswb */
    case 7035:  /* avx512bw_packsswb */
    case 1759:  /* mmx_packusdw */
    case 1758:  /* mmx_packssdw */
    case 1757:  /* mmx_packuswb */
    case 1756:  /* mmx_packsswb */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 7741:  /* xop_pcmov_v2df */
    case 7740:  /* xop_pcmov_v4df256 */
    case 7739:  /* xop_pcmov_v4sf */
    case 7738:  /* xop_pcmov_v8sf256 */
    case 7737:  /* xop_pcmov_v8hf */
    case 7736:  /* xop_pcmov_v16hf256 */
    case 7735:  /* xop_pcmov_v1ti */
    case 7734:  /* xop_pcmov_v2ti256 */
    case 7733:  /* xop_pcmov_v2di */
    case 7732:  /* xop_pcmov_v4di256 */
    case 7731:  /* xop_pcmov_v4si */
    case 7730:  /* xop_pcmov_v8si256 */
    case 7729:  /* xop_pcmov_v8hi */
    case 7728:  /* xop_pcmov_v16hi256 */
    case 7727:  /* xop_pcmov_v16qi */
    case 7726:  /* xop_pcmov_v32qi256 */
    case 1726:  /* *xop_pcmov_v2hi */
    case 1725:  /* *xop_pcmov_v2qi */
    case 1724:  /* *xop_pcmov_v4qi */
    case 1723:  /* *xop_pcmov_v2sf */
    case 1722:  /* *xop_pcmov_v2si */
    case 1721:  /* *xop_pcmov_v4hi */
    case 1720:  /* *xop_pcmov_v8qi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 7796:  /* xop_maskcmp_unsv2di3 */
    case 7795:  /* xop_maskcmp_unsv4si3 */
    case 7794:  /* xop_maskcmp_unsv8hi3 */
    case 7793:  /* xop_maskcmp_unsv16qi3 */
    case 7792:  /* xop_maskcmpv2di3 */
    case 7791:  /* xop_maskcmpv4si3 */
    case 7790:  /* xop_maskcmpv8hi3 */
    case 7789:  /* xop_maskcmpv16qi3 */
    case 1715:  /* *xop_maskcmp_unsv2hi3 */
    case 1714:  /* *xop_maskcmp_unsv2qi3 */
    case 1713:  /* *xop_maskcmp_unsv4qi3 */
    case 1712:  /* *xop_maskcmp_unsv2si3 */
    case 1711:  /* *xop_maskcmp_unsv4hi3 */
    case 1710:  /* *xop_maskcmp_unsv8qi3 */
    case 1709:  /* *xop_maskcmpv2hi3 */
    case 1708:  /* *xop_maskcmpv2qi3 */
    case 1707:  /* *xop_maskcmpv4qi3 */
    case 1706:  /* *xop_maskcmpv2si3 */
    case 1705:  /* *xop_maskcmpv4hi3 */
    case 1704:  /* *xop_maskcmpv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 6429:  /* *sse4_1_mulv2siv2di3 */
    case 6427:  /* *vec_widen_smult_even_v8si */
    case 6425:  /* *vec_widen_smult_even_v16si */
    case 6423:  /* *vec_widen_umult_even_v4si */
    case 6421:  /* *vec_widen_umult_even_v8si */
    case 6419:  /* *vec_widen_umult_even_v16si */
    case 1645:  /* *sse2_umulv1siv1di3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 1816:  /* uavgv2hi3_ceil */
    case 1815:  /* uavgv2qi3_ceil */
    case 1814:  /* uavgv4qi3_ceil */
    case 1813:  /* *mmx_uavgv4hi3 */
    case 1812:  /* *mmx_uavgv8qi3 */
    case 1644:  /* *mmx_pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 7325:  /* ssse3_pmaddubsw */
    case 7324:  /* ssse3_pmaddubsw128 */
    case 7315:  /* avx2_pmaddubsw256 */
    case 6438:  /* *sse2_pmaddwd */
    case 6437:  /* *avx2_pmaddwd */
    case 1643:  /* *mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 6417:  /* *umulv8hi3_highpart */
    case 6415:  /* *smulv8hi3_highpart */
    case 6413:  /* *umulv16hi3_highpart */
    case 6411:  /* *smulv16hi3_highpart */
    case 6409:  /* *umulv32hi3_highpart */
    case 6407:  /* *smulv32hi3_highpart */
    case 1642:  /* umulv2hi3_highpart */
    case 1641:  /* smulv2hi3_highpart */
    case 1640:  /* *mmx_umulv4hi3_highpart */
    case 1639:  /* *mmx_smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 6030:  /* sse2_movsd_v2df */
    case 6029:  /* sse2_movsd_v2di */
    case 4327:  /* avx512fp16_movv8bf */
    case 4326:  /* avx512fp16_movv8hf */
    case 4298:  /* sse_movss_v4sf */
    case 4297:  /* sse_movss_v4si */
    case 1588:  /* *mmx_movss_v2si */
    case 1587:  /* *mmx_movss_v2sf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 3268:  /* *fma_fnmsub_v2df */
    case 3266:  /* *fma_fnmsub_v4df */
    case 3262:  /* *fma_fnmsub_v8df */
    case 3261:  /* *fma_fnmsub_df */
    case 3259:  /* *fma_fnmsub_v4sf */
    case 3257:  /* *fma_fnmsub_v8sf */
    case 3253:  /* *fma_fnmsub_v16sf */
    case 3252:  /* *fma_fnmsub_sf */
    case 3251:  /* *fma_fnmsub_hf */
    case 3249:  /* *fma_fnmsub_v8hf */
    case 3247:  /* *fma_fnmsub_v16hf */
    case 3243:  /* *fma_fnmsub_v32hf */
    case 3239:  /* *fma_fnmsub_v4df */
    case 3235:  /* *fma_fnmsub_v8sf */
    case 3231:  /* *fma_fnmsub_v2df */
    case 3227:  /* *fma_fnmsub_v4sf */
    case 3225:  /* *fma_fnmsub_df */
    case 3223:  /* *fma_fnmsub_sf */
    case 1574:  /* fnmsv2sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 9031:  /* avx512f_cvtneps2bf16_v8sf_mask */
    case 9029:  /* avx512f_cvtneps2bf16_v16sf_mask */
    case 8845:  /* vpopcountv8hi_mask */
    case 8843:  /* vpopcountv16hi_mask */
    case 8841:  /* vpopcountv32hi_mask */
    case 8839:  /* vpopcountv32qi_mask */
    case 8837:  /* vpopcountv16qi_mask */
    case 8835:  /* vpopcountv64qi_mask */
    case 8825:  /* vpopcountv2di_mask */
    case 8823:  /* vpopcountv4di_mask */
    case 8821:  /* vpopcountv8di_mask */
    case 8819:  /* vpopcountv4si_mask */
    case 8817:  /* vpopcountv8si_mask */
    case 8815:  /* vpopcountv16si_mask */
    case 8744:  /* clzv2di2_mask */
    case 8742:  /* clzv4di2_mask */
    case 8740:  /* clzv8di2_mask */
    case 8738:  /* clzv4si2_mask */
    case 8736:  /* clzv8si2_mask */
    case 8734:  /* clzv16si2_mask */
    case 8059:  /* avx512dq_broadcastv4df_mask_1 */
    case 8057:  /* avx512dq_broadcastv4di_mask_1 */
    case 8055:  /* avx512dq_broadcastv8df_mask_1 */
    case 8053:  /* avx512dq_broadcastv8di_mask_1 */
    case 8051:  /* avx512dq_broadcastv16si_mask_1 */
    case 8049:  /* avx512dq_broadcastv16sf_mask_1 */
    case 8047:  /* avx512vl_broadcastv8sf_mask_1 */
    case 8045:  /* avx512vl_broadcastv8si_mask_1 */
    case 8004:  /* avx512vl_vec_dup_gprv2df_mask */
    case 8002:  /* avx512vl_vec_dup_gprv4df_mask */
    case 8000:  /* avx512f_vec_dup_gprv8df_mask */
    case 7998:  /* avx512vl_vec_dup_gprv4sf_mask */
    case 7996:  /* avx512vl_vec_dup_gprv8sf_mask */
    case 7994:  /* avx512f_vec_dup_gprv16sf_mask */
    case 7992:  /* avx512vl_vec_dup_gprv2di_mask */
    case 7990:  /* avx512vl_vec_dup_gprv4di_mask */
    case 7988:  /* avx512f_vec_dup_gprv8di_mask */
    case 7986:  /* avx512vl_vec_dup_gprv4si_mask */
    case 7984:  /* avx512vl_vec_dup_gprv8si_mask */
    case 7982:  /* avx512f_vec_dup_gprv16si_mask */
    case 7980:  /* avx512vl_vec_dup_gprv8bf_mask */
    case 7978:  /* avx512vl_vec_dup_gprv16bf_mask */
    case 7976:  /* avx512bw_vec_dup_gprv32bf_mask */
    case 7974:  /* avx512fp16_vec_dup_gprv8hf_mask */
    case 7972:  /* avx512vl_vec_dup_gprv16hf_mask */
    case 7970:  /* avx512bw_vec_dup_gprv32hf_mask */
    case 7968:  /* avx512vl_vec_dup_gprv8hi_mask */
    case 7966:  /* avx512vl_vec_dup_gprv16hi_mask */
    case 7964:  /* avx512bw_vec_dup_gprv32hi_mask */
    case 7962:  /* avx512vl_vec_dup_gprv32qi_mask */
    case 7960:  /* avx512vl_vec_dup_gprv16qi_mask */
    case 7958:  /* avx512bw_vec_dup_gprv64qi_mask */
    case 7956:  /* avx512f_broadcastv8di_mask */
    case 7954:  /* avx512f_broadcastv8df_mask */
    case 7952:  /* avx512f_broadcastv16si_mask */
    case 7950:  /* avx512f_broadcastv16sf_mask */
    case 7615:  /* *sse4_1_zero_extendv2siv2di2_mask_1 */
    case 7613:  /* *sse4_1_sign_extendv2siv2di2_mask_1 */
    case 7605:  /* avx2_zero_extendv4siv4di2_mask */
    case 7603:  /* avx2_sign_extendv4siv4di2_mask */
    case 7599:  /* avx512f_zero_extendv8siv8di2_mask */
    case 7597:  /* avx512f_sign_extendv8siv8di2_mask */
    case 7591:  /* *sse4_1_zero_extendv2hiv2di2_mask_1 */
    case 7589:  /* *sse4_1_sign_extendv2hiv2di2_mask_1 */
    case 7579:  /* *avx2_zero_extendv4hiv4di2_mask_1 */
    case 7577:  /* *avx2_sign_extendv4hiv4di2_mask_1 */
    case 7571:  /* avx512f_zero_extendv8hiv8di2_mask */
    case 7569:  /* avx512f_sign_extendv8hiv8di2_mask */
    case 7564:  /* *sse4_1_zero_extendv2qiv2di2_mask_1 */
    case 7562:  /* *sse4_1_sign_extendv2qiv2di2_mask_1 */
    case 7552:  /* *avx2_zero_extendv4qiv4di2_mask_1 */
    case 7550:  /* *avx2_sign_extendv4qiv4di2_mask_1 */
    case 7540:  /* *avx512f_zero_extendv8qiv8di2_mask_1 */
    case 7538:  /* *avx512f_sign_extendv8qiv8di2_mask_1 */
    case 7524:  /* *sse4_1_zero_extendv4hiv4si2_mask_1 */
    case 7522:  /* *sse4_1_sign_extendv4hiv4si2_mask_1 */
    case 7512:  /* avx2_zero_extendv8hiv8si2_mask */
    case 7510:  /* avx2_sign_extendv8hiv8si2_mask */
    case 7504:  /* avx512f_zero_extendv16hiv16si2_mask */
    case 7502:  /* avx512f_sign_extendv16hiv16si2_mask */
    case 7496:  /* *sse4_1_zero_extendv4qiv4si2_mask_1 */
    case 7494:  /* *sse4_1_sign_extendv4qiv4si2_mask_1 */
    case 7484:  /* *avx2_zero_extendv8qiv8si2_mask_1 */
    case 7482:  /* *avx2_sign_extendv8qiv8si2_mask_1 */
    case 7476:  /* avx512f_zero_extendv16qiv16si2_mask */
    case 7474:  /* avx512f_sign_extendv16qiv16si2_mask */
    case 7464:  /* *sse4_1_zero_extendv8qiv8hi2_mask_1 */
    case 7462:  /* *sse4_1_sign_extendv8qiv8hi2_mask_1 */
    case 7452:  /* avx512bw_zero_extendv32qiv32hi2_mask */
    case 7450:  /* avx512bw_sign_extendv32qiv32hi2_mask */
    case 7444:  /* avx2_zero_extendv16qiv16hi2_mask */
    case 7442:  /* avx2_sign_extendv16qiv16hi2_mask */
    case 7380:  /* absv8hi2_mask */
    case 7379:  /* absv16hi2_mask */
    case 7378:  /* absv32hi2_mask */
    case 7377:  /* absv32qi2_mask */
    case 7376:  /* absv16qi2_mask */
    case 7375:  /* absv64qi2_mask */
    case 7374:  /* absv2di2_mask */
    case 7373:  /* absv4di2_mask */
    case 7372:  /* absv8di2_mask */
    case 7371:  /* absv4si2_mask */
    case 7370:  /* absv8si2_mask */
    case 7369:  /* absv16si2_mask */
    case 6091:  /* avx512vl_us_truncatev16hiv16qi2_mask */
    case 6090:  /* avx512vl_truncatev16hiv16qi2_mask */
    case 6089:  /* avx512vl_ss_truncatev16hiv16qi2_mask */
    case 6088:  /* avx512vl_us_truncatev8siv8hi2_mask */
    case 6087:  /* avx512vl_truncatev8siv8hi2_mask */
    case 6086:  /* avx512vl_ss_truncatev8siv8hi2_mask */
    case 6085:  /* avx512vl_us_truncatev4div4si2_mask */
    case 6084:  /* avx512vl_truncatev4div4si2_mask */
    case 6083:  /* avx512vl_ss_truncatev4div4si2_mask */
    case 6071:  /* avx512bw_us_truncatev32hiv32qi2_mask */
    case 6070:  /* avx512bw_truncatev32hiv32qi2_mask */
    case 6069:  /* avx512bw_ss_truncatev32hiv32qi2_mask */
    case 6064:  /* avx512f_us_truncatev8div8hi2_mask */
    case 6063:  /* avx512f_truncatev8div8hi2_mask */
    case 6062:  /* avx512f_ss_truncatev8div8hi2_mask */
    case 6061:  /* avx512f_us_truncatev8div8si2_mask */
    case 6060:  /* avx512f_truncatev8div8si2_mask */
    case 6059:  /* avx512f_ss_truncatev8div8si2_mask */
    case 6058:  /* avx512f_us_truncatev16siv16hi2_mask */
    case 6057:  /* avx512f_truncatev16siv16hi2_mask */
    case 6056:  /* avx512f_ss_truncatev16siv16hi2_mask */
    case 6055:  /* avx512f_us_truncatev16siv16qi2_mask */
    case 6054:  /* avx512f_truncatev16siv16qi2_mask */
    case 6053:  /* avx512f_ss_truncatev16siv16qi2_mask */
    case 6032:  /* vec_dupv2df_mask */
    case 4379:  /* vec_extract_hi_v8sf_mask */
    case 4378:  /* vec_extract_hi_v8si_mask */
    case 4375:  /* vec_extract_lo_v8sf_mask */
    case 4374:  /* vec_extract_lo_v8si_mask */
    case 4371:  /* vec_extract_hi_v4df_mask */
    case 4370:  /* vec_extract_hi_v4di_mask */
    case 4367:  /* vec_extract_lo_v4df_mask */
    case 4366:  /* vec_extract_lo_v4di_mask */
    case 4363:  /* vec_extract_lo_v16si_mask */
    case 4362:  /* vec_extract_lo_v16sf_mask */
    case 4359:  /* vec_extract_hi_v16si_mask */
    case 4358:  /* vec_extract_hi_v16sf_mask */
    case 4355:  /* vec_extract_hi_v8di_mask */
    case 4354:  /* vec_extract_hi_v8df_mask */
    case 4351:  /* vec_extract_lo_v8di_mask */
    case 4350:  /* vec_extract_lo_v8df_mask */
    case 4261:  /* sse2_cvtps2pd_mask_1 */
    case 4231:  /* avx_cvtps2pd256_mask */
    case 4228:  /* avx512f_cvtps2pd512_mask */
    case 4221:  /* avx_cvtpd2ps256_mask */
    case 4218:  /* avx512f_cvtpd2ps512_mask */
    case 4202:  /* fixuns_truncv4sfv4si2_mask */
    case 4200:  /* fixuns_truncv8sfv8si2_mask */
    case 4194:  /* fixuns_truncv4sfv4di2_mask */
    case 4192:  /* fix_truncv4sfv4di2_mask */
    case 4189:  /* fixuns_truncv8sfv8di2_mask */
    case 4185:  /* fix_truncv8sfv8di2_mask */
    case 4166:  /* fixuns_truncv2dfv2di2_mask */
    case 4164:  /* fix_truncv2dfv2di2_mask */
    case 4162:  /* fixuns_truncv4dfv4di2_mask */
    case 4160:  /* fix_truncv4dfv4di2_mask */
    case 4157:  /* fixuns_truncv8dfv8di2_mask */
    case 4153:  /* fix_truncv8dfv8di2_mask */
    case 4150:  /* fixuns_truncv4dfv4si2_mask */
    case 4148:  /* fix_truncv4dfv4si2_mask */
    case 4142:  /* fixuns_truncv8dfv8si2_mask */
    case 4138:  /* fix_truncv8dfv8si2_mask */
    case 4108:  /* floatunsv4siv4df2_mask */
    case 4106:  /* floatunsv8siv8df2_mask */
    case 4098:  /* floatunsv4div4sf2_mask */
    case 4096:  /* floatv4div4sf2_mask */
    case 4093:  /* floatunsv8div8sf2_mask */
    case 4089:  /* floatv8div8sf2_mask */
    case 4085:  /* floatunsv2div2df2_mask */
    case 4081:  /* floatv2div2df2_mask */
    case 4077:  /* floatunsv4div4df2_mask */
    case 4073:  /* floatv4div4df2_mask */
    case 4069:  /* floatunsv8div8df2_mask */
    case 4065:  /* floatv8div8df2_mask */
    case 4062:  /* floatv4siv4df2_mask */
    case 4060:  /* floatv8siv8df2_mask */
    case 4024:  /* fix_truncv4sfv4si2_mask */
    case 4022:  /* fix_truncv8sfv8si2_mask */
    case 4019:  /* fixuns_truncv16sfv16si2_mask */
    case 4015:  /* fix_truncv16sfv16si2_mask */
    case 3975:  /* floatunsv4siv4sf2_mask */
    case 3971:  /* floatunsv8siv8sf2_mask */
    case 3967:  /* floatunsv16siv16sf2_mask */
    case 3964:  /* floatv4siv4sf2_mask */
    case 3962:  /* floatv8siv8sf2_mask */
    case 3959:  /* floatv16siv16sf2_mask */
    case 3898:  /* avx512fp16_vcvtps2ph_v8sf_mask */
    case 3894:  /* avx512fp16_vcvtps2ph_v16sf_mask */
    case 3890:  /* avx512fp16_vcvtpd2ph_v8df_mask */
    case 3887:  /* *avx512fp16_float_extend_phv2df2_load_mask */
    case 3883:  /* *avx512fp16_float_extend_phv4sf2_load_mask */
    case 3881:  /* *avx512fp16_float_extend_phv4df2_load_mask */
    case 3874:  /* avx512fp16_float_extend_phv8sf2_mask */
    case 3870:  /* avx512fp16_float_extend_phv16sf2_mask */
    case 3866:  /* avx512fp16_float_extend_phv8df2_mask */
    case 3851:  /* *avx512fp16_fixuns_truncv2di2_load_mask */
    case 3849:  /* *avx512fp16_fix_truncv2di2_load_mask */
    case 3843:  /* *avx512fp16_fixuns_truncv4di2_load_mask */
    case 3841:  /* *avx512fp16_fix_truncv4di2_load_mask */
    case 3839:  /* *avx512fp16_fixuns_truncv4si2_load_mask */
    case 3837:  /* *avx512fp16_fix_truncv4si2_load_mask */
    case 3826:  /* avx512fp16_fixuns_truncv8di2_mask */
    case 3822:  /* avx512fp16_fix_truncv8di2_mask */
    case 3818:  /* avx512fp16_fixuns_truncv16si2_mask */
    case 3814:  /* avx512fp16_fix_truncv16si2_mask */
    case 3810:  /* avx512fp16_fixuns_truncv8si2_mask */
    case 3806:  /* avx512fp16_fix_truncv8si2_mask */
    case 3802:  /* avx512fp16_fixuns_truncv32hi2_mask */
    case 3798:  /* avx512fp16_fix_truncv32hi2_mask */
    case 3794:  /* avx512fp16_fixuns_truncv16hi2_mask */
    case 3790:  /* avx512fp16_fix_truncv16hi2_mask */
    case 3786:  /* avx512fp16_fixuns_truncv8hi2_mask */
    case 3782:  /* avx512fp16_fix_truncv8hi2_mask */
    case 3740:  /* avx512fp16_vcvtuqq2ph_v8di_mask */
    case 3736:  /* avx512fp16_vcvtqq2ph_v8di_mask */
    case 3732:  /* avx512fp16_vcvtudq2ph_v16si_mask */
    case 3728:  /* avx512fp16_vcvtdq2ph_v16si_mask */
    case 3724:  /* avx512fp16_vcvtudq2ph_v8si_mask */
    case 3720:  /* avx512fp16_vcvtdq2ph_v8si_mask */
    case 3716:  /* avx512fp16_vcvtuw2ph_v32hi_mask */
    case 3712:  /* avx512fp16_vcvtw2ph_v32hi_mask */
    case 3708:  /* avx512fp16_vcvtuw2ph_v16hi_mask */
    case 3704:  /* avx512fp16_vcvtw2ph_v16hi_mask */
    case 3700:  /* avx512fp16_vcvtuw2ph_v8hi_mask */
    case 3696:  /* avx512fp16_vcvtw2ph_v8hi_mask */
    case 3197:  /* *fma_fnmadd_v2df */
    case 3195:  /* *fma_fnmadd_v4df */
    case 3191:  /* *fma_fnmadd_v8df */
    case 3190:  /* *fma_fnmadd_df */
    case 3188:  /* *fma_fnmadd_v4sf */
    case 3186:  /* *fma_fnmadd_v8sf */
    case 3182:  /* *fma_fnmadd_v16sf */
    case 3181:  /* *fma_fnmadd_sf */
    case 3180:  /* *fma_fnmadd_hf */
    case 3178:  /* *fma_fnmadd_v8hf */
    case 3176:  /* *fma_fnmadd_v16hf */
    case 3172:  /* *fma_fnmadd_v32hf */
    case 3171:  /* *fma_fnmadd_v4df */
    case 3170:  /* *fma_fnmadd_v8sf */
    case 3169:  /* *fma_fnmadd_v2df */
    case 3168:  /* *fma_fnmadd_v4sf */
    case 3167:  /* *fma_fnmadd_df */
    case 3166:  /* *fma_fnmadd_sf */
    case 2287:  /* sse2_sqrtv2df2_mask */
    case 2285:  /* avx_sqrtv4df2_mask */
    case 2282:  /* avx512f_sqrtv8df2_mask */
    case 2279:  /* sse_sqrtv4sf2_mask */
    case 2277:  /* avx_sqrtv8sf2_mask */
    case 2274:  /* avx512f_sqrtv16sf2_mask */
    case 2271:  /* avx512fp16_sqrtv8hf2_mask */
    case 2269:  /* avx512fp16_sqrtv16hf2_mask */
    case 2266:  /* avx512fp16_sqrtv32hf2_mask */
    case 1573:  /* fnmav2sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 3134:  /* *fma_fmsub_v2df */
    case 3132:  /* *fma_fmsub_v4df */
    case 3128:  /* *fma_fmsub_v8df */
    case 3127:  /* *fma_fmsub_df */
    case 3125:  /* *fma_fmsub_v4sf */
    case 3123:  /* *fma_fmsub_v8sf */
    case 3119:  /* *fma_fmsub_v16sf */
    case 3118:  /* *fma_fmsub_sf */
    case 3117:  /* *fma_fmsub_hf */
    case 3115:  /* *fma_fmsub_v8hf */
    case 3113:  /* *fma_fmsub_v16hf */
    case 3109:  /* *fma_fmsub_v32hf */
    case 3108:  /* *fma_fmsub_v4df */
    case 3107:  /* *fma_fmsub_v8sf */
    case 3106:  /* *fma_fmsub_v2df */
    case 3105:  /* *fma_fmsub_v4sf */
    case 3104:  /* *fma_fmsub_df */
    case 3103:  /* *fma_fmsub_sf */
    case 1572:  /* fmsv2sf4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 7439:  /* avx2_pblenddv4si */
    case 7438:  /* avx2_pblenddv8si */
    case 7437:  /* *avx2_pblendbf */
    case 7436:  /* *avx2_pblendph */
    case 7435:  /* *avx2_pblendw */
    case 7434:  /* sse4_1_pblendbf */
    case 7433:  /* sse4_1_pblendph */
    case 7432:  /* sse4_1_pblendw */
    case 7392:  /* sse4_1_blendpd */
    case 7391:  /* avx_blendpd256 */
    case 7390:  /* sse4_1_blendps */
    case 7389:  /* avx_blendps256 */
    case 1930:  /* avx512vl_blendmv8bf */
    case 1929:  /* avx512vl_blendmv16bf */
    case 1928:  /* avx512bw_blendmv32bf */
    case 1927:  /* avx512fp16_blendmv8hf */
    case 1926:  /* avx512vl_blendmv16hf */
    case 1925:  /* avx512bw_blendmv32hf */
    case 1924:  /* avx512vl_blendmv8hi */
    case 1923:  /* avx512vl_blendmv16hi */
    case 1922:  /* avx512bw_blendmv32hi */
    case 1921:  /* avx512vl_blendmv32qi */
    case 1920:  /* avx512vl_blendmv16qi */
    case 1919:  /* avx512bw_blendmv64qi */
    case 1918:  /* avx512vl_blendmv2df */
    case 1917:  /* avx512vl_blendmv4df */
    case 1916:  /* avx512f_blendmv8df */
    case 1915:  /* avx512vl_blendmv4sf */
    case 1914:  /* avx512vl_blendmv8sf */
    case 1913:  /* avx512f_blendmv16sf */
    case 1912:  /* avx512vl_blendmv2di */
    case 1911:  /* avx512vl_blendmv4di */
    case 1910:  /* avx512f_blendmv8di */
    case 1909:  /* avx512vl_blendmv4si */
    case 1908:  /* avx512vl_blendmv8si */
    case 1907:  /* avx512f_blendmv16si */
    case 1789:  /* *mmx_pblendw32 */
    case 1788:  /* *mmx_pblendw64 */
    case 1565:  /* *mmx_blendps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 2471:  /* vec_addsubv2df3 */
    case 2470:  /* vec_addsubv4df3 */
    case 2469:  /* vec_addsubv4sf3 */
    case 2468:  /* vec_addsubv8sf3 */
    case 1559:  /* vec_addsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 1558:  /* *mmx_haddsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 2477:  /* *sse3_hsubv2df3_low */
    case 1557:  /* *mmx_hsubv2sf3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2475:  /* sse3_hsubv2df3 */
    case 1556:  /* mmx_hsubv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 2476:  /* *sse3_haddv2df3_low */
    case 1555:  /* *mmx_haddv2sf3_low */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 2474:  /* *sse3_haddv2df3 */
    case 1554:  /* *mmx_haddv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 1), 0, 0));
      ro[5] = *(ro_loc[5] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 1), 0, 0));
      ro[6] = *(ro_loc[6] = &XVECEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 7640:  /* ptesttf2 */
    case 7639:  /* avx_ptestv4df */
    case 7638:  /* avx_ptestv8sf */
    case 7637:  /* avx_ptestv2ti */
    case 7636:  /* avx_ptestv4di */
    case 7635:  /* avx_ptestv8si */
    case 7634:  /* avx_ptestv16hi */
    case 7633:  /* avx_ptestv32qi */
    case 7632:  /* sse4_1_ptestv2df */
    case 7631:  /* sse4_1_ptestv4sf */
    case 7630:  /* sse4_1_ptestv1ti */
    case 7629:  /* sse4_1_ptestv2di */
    case 7628:  /* sse4_1_ptestv4si */
    case 7627:  /* sse4_1_ptestv8hi */
    case 7626:  /* sse4_1_ptestv16qi */
    case 7625:  /* avx_vtestpd */
    case 7624:  /* avx_vtestpd256 */
    case 7623:  /* avx_vtestps */
    case 7622:  /* avx_vtestps256 */
    case 2015:  /* kortestdi */
    case 2014:  /* kortestsi */
    case 2013:  /* kortesthi */
    case 2012:  /* kortestqi */
    case 2011:  /* ktestdi */
    case 2010:  /* ktestsi */
    case 2009:  /* ktesthi */
    case 2008:  /* ktestqi */
    case 1501:  /* tpause */
    case 1497:  /* umwait */
    case 1492:  /* enqcmds_di */
    case 1491:  /* enqcmd_di */
    case 1490:  /* enqcmds_si */
    case 1489:  /* enqcmd_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1486:  /* movdir64b_di */
    case 1485:  /* movdir64b_si */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 1477:  /* *rdpkru */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1466:  /* xbegin_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1502:  /* tpause_rex64 */
    case 1498:  /* umwait_rex64 */
    case 1435:  /* lwp_lwpinsdi */
    case 1434:  /* lwp_lwpinssi */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 1425:  /* fldenv */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      break;

    case 7296:  /* sse3_monitor_di */
    case 7295:  /* sse3_monitor_si */
    case 1478:  /* *wrpkru */
    case 1474:  /* monitorx_di */
    case 1473:  /* monitorx_si */
    case 1472:  /* mwaitx */
    case 1433:  /* lwp_lwpvaldi */
    case 1432:  /* lwp_lwpvalsi */
    case 1421:  /* xsetbv_rex64 */
    case 1419:  /* xrstors64 */
    case 1418:  /* xrstor64 */
    case 1417:  /* xrstors_rex64 */
    case 1416:  /* xrstor_rex64 */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (pat, 0, 2));
      break;

    case 1397:  /* rdtscp_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1396:  /* rdtscp */
    case 1395:  /* rdtsc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 8677:  /* avx512dq_vmfpclassv2df */
    case 8675:  /* avx512dq_vmfpclassv4sf */
    case 8673:  /* avx512dq_vmfpclassv8hf */
    case 6998:  /* *avx512vl_testnmv2di3_zext */
    case 6997:  /* *avx512vl_testnmv2di3_zext */
    case 6996:  /* *avx512vl_testnmv2di3_zext */
    case 6995:  /* *avx512vl_testnmv4di3_zext */
    case 6994:  /* *avx512vl_testnmv4di3_zext */
    case 6993:  /* *avx512vl_testnmv4di3_zext */
    case 6992:  /* *avx512f_testnmv8di3_zext */
    case 6991:  /* *avx512f_testnmv8di3_zext */
    case 6990:  /* *avx512f_testnmv8di3_zext */
    case 6989:  /* *avx512vl_testnmv4si3_zext */
    case 6988:  /* *avx512vl_testnmv4si3_zext */
    case 6987:  /* *avx512vl_testnmv4si3_zext */
    case 6986:  /* *avx512vl_testnmv8si3_zext */
    case 6985:  /* *avx512vl_testnmv8si3_zext */
    case 6984:  /* *avx512vl_testnmv8si3_zext */
    case 6983:  /* *avx512f_testnmv16si3_zext */
    case 6982:  /* *avx512f_testnmv16si3_zext */
    case 6981:  /* *avx512f_testnmv16si3_zext */
    case 6980:  /* *avx512vl_testnmv8hi3_zext */
    case 6979:  /* *avx512vl_testnmv8hi3_zext */
    case 6978:  /* *avx512vl_testnmv8hi3_zext */
    case 6977:  /* *avx512vl_testnmv16hi3_zext */
    case 6976:  /* *avx512vl_testnmv16hi3_zext */
    case 6975:  /* *avx512vl_testnmv16hi3_zext */
    case 6974:  /* *avx512bw_testnmv32hi3_zext */
    case 6973:  /* *avx512bw_testnmv32hi3_zext */
    case 6972:  /* *avx512bw_testnmv32hi3_zext */
    case 6971:  /* *avx512vl_testnmv16qi3_zext */
    case 6970:  /* *avx512vl_testnmv16qi3_zext */
    case 6969:  /* *avx512vl_testnmv16qi3_zext */
    case 6968:  /* *avx512vl_testnmv32qi3_zext */
    case 6967:  /* *avx512vl_testnmv32qi3_zext */
    case 6966:  /* *avx512vl_testnmv32qi3_zext */
    case 6965:  /* *avx512bw_testnmv64qi3_zext */
    case 6964:  /* *avx512bw_testnmv64qi3_zext */
    case 6963:  /* *avx512bw_testnmv64qi3_zext */
    case 6926:  /* *avx512vl_testmv2di3_zext */
    case 6925:  /* *avx512vl_testmv2di3_zext */
    case 6924:  /* *avx512vl_testmv2di3_zext */
    case 6923:  /* *avx512vl_testmv4di3_zext */
    case 6922:  /* *avx512vl_testmv4di3_zext */
    case 6921:  /* *avx512vl_testmv4di3_zext */
    case 6920:  /* *avx512f_testmv8di3_zext */
    case 6919:  /* *avx512f_testmv8di3_zext */
    case 6918:  /* *avx512f_testmv8di3_zext */
    case 6917:  /* *avx512vl_testmv4si3_zext */
    case 6916:  /* *avx512vl_testmv4si3_zext */
    case 6915:  /* *avx512vl_testmv4si3_zext */
    case 6914:  /* *avx512vl_testmv8si3_zext */
    case 6913:  /* *avx512vl_testmv8si3_zext */
    case 6912:  /* *avx512vl_testmv8si3_zext */
    case 6911:  /* *avx512f_testmv16si3_zext */
    case 6910:  /* *avx512f_testmv16si3_zext */
    case 6909:  /* *avx512f_testmv16si3_zext */
    case 6908:  /* *avx512vl_testmv8hi3_zext */
    case 6907:  /* *avx512vl_testmv8hi3_zext */
    case 6906:  /* *avx512vl_testmv8hi3_zext */
    case 6905:  /* *avx512vl_testmv16hi3_zext */
    case 6904:  /* *avx512vl_testmv16hi3_zext */
    case 6903:  /* *avx512vl_testmv16hi3_zext */
    case 6902:  /* *avx512bw_testmv32hi3_zext */
    case 6901:  /* *avx512bw_testmv32hi3_zext */
    case 6900:  /* *avx512bw_testmv32hi3_zext */
    case 6899:  /* *avx512vl_testmv16qi3_zext */
    case 6898:  /* *avx512vl_testmv16qi3_zext */
    case 6897:  /* *avx512vl_testmv16qi3_zext */
    case 6896:  /* *avx512vl_testmv32qi3_zext */
    case 6895:  /* *avx512vl_testmv32qi3_zext */
    case 6894:  /* *avx512vl_testmv32qi3_zext */
    case 6893:  /* *avx512bw_testmv64qi3_zext */
    case 6892:  /* *avx512bw_testmv64qi3_zext */
    case 6891:  /* *avx512bw_testmv64qi3_zext */
    case 6082:  /* *avx512f_permvar_truncv4div4si_1 */
    case 6081:  /* *avx512f_permvar_truncv16hiv16qi_1 */
    case 6068:  /* *avx512f_permvar_truncv32hiv32qi_1 */
    case 6052:  /* *avx512f_vpermvar_truncv8div8si_1 */
    case 6050:  /* *avx512f_permvar_truncv8siv8hi_1 */
    case 6048:  /* *avx512bw_permvar_truncv16siv16hi_1 */
    case 1391:  /* sse4_2_crc32di */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 1));
      break;

    case 1385:  /* *stack_protect_set_3 */
    case 1384:  /* *stack_protect_set_2_di */
    case 1383:  /* *stack_protect_set_2_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 7294:  /* sse3_mwait */
    case 1506:  /* patchable_area */
    case 1462:  /* wrussdi */
    case 1461:  /* wrusssi */
    case 1460:  /* wrssdi */
    case 1459:  /* wrsssi */
    case 1420:  /* xsetbv */
    case 1415:  /* xrstors */
    case 1414:  /* xrstor */
    case 1380:  /* prefetchi */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (pat, 0, 1));
      break;

    case 1377:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 1372:  /* adjust_stack_and_probe_di */
    case 1371:  /* adjust_stack_and_probe_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1319:  /* *movsicc_noc_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      break;

    case 3071:  /* *fma_fmadd_v2df */
    case 3069:  /* *fma_fmadd_v4df */
    case 3065:  /* *fma_fmadd_v8df */
    case 3064:  /* *fma_fmadd_df */
    case 3062:  /* *fma_fmadd_v4sf */
    case 3060:  /* *fma_fmadd_v8sf */
    case 3056:  /* *fma_fmadd_v16sf */
    case 3055:  /* *fma_fmadd_sf */
    case 3054:  /* *fma_fmadd_hf */
    case 3052:  /* *fma_fmadd_v8hf */
    case 3050:  /* *fma_fmadd_v16hf */
    case 3046:  /* *fma_fmadd_v32hf */
    case 3045:  /* *fma_fmadd_v4df */
    case 3044:  /* *fma_fmadd_v8sf */
    case 3043:  /* *fma_fmadd_v2df */
    case 3042:  /* *fma_fmadd_v4sf */
    case 3041:  /* *fma_fmadd_df */
    case 3040:  /* *fma_fmadd_sf */
    case 1571:  /* fmav2sf4 */
    case 1326:  /* *xop_pcmov_df */
    case 1325:  /* *xop_pcmov_sf */
    case 1324:  /* *movsfcc_1_387 */
    case 1323:  /* *movdfcc_1 */
    case 1322:  /* *movxfcc_1 */
    case 1320:  /* *movqicc_noc */
    case 1318:  /* *movdicc_noc */
    case 1317:  /* *movsicc_noc */
    case 1316:  /* *movhicc_noc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 1307:  /* *strlenqi_1 */
    case 1306:  /* *strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1305:  /* *cmpstrnqi_1 */
    case 1304:  /* *cmpstrnqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 1303:  /* *cmpstrnqi_nz_1 */
    case 1302:  /* *cmpstrnqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1301:  /* *rep_stosqi */
    case 1300:  /* *rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1299:  /* *rep_stossi */
    case 1298:  /* *rep_stossi */
    case 1297:  /* *rep_stosdi_rex64 */
    case 1296:  /* *rep_stosdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 1295:  /* *strsetqi_1 */
    case 1294:  /* *strsetqi_1 */
    case 1293:  /* *strsethi_1 */
    case 1292:  /* *strsethi_1 */
    case 1291:  /* *strsetsi_1 */
    case 1290:  /* *strsetsi_1 */
    case 1289:  /* *strsetdi_rex_1 */
    case 1288:  /* *strsetdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1287:  /* *rep_movqi */
    case 1286:  /* *rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 1285:  /* *rep_movsi */
    case 1284:  /* *rep_movsi */
    case 1283:  /* *rep_movdi_rex64 */
    case 1282:  /* *rep_movdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 1281:  /* *strmovqi_1 */
    case 1280:  /* *strmovqi_1 */
    case 1279:  /* *strmovhi_1 */
    case 1278:  /* *strmovhi_1 */
    case 1277:  /* *strmovsi_1 */
    case 1276:  /* *strmovsi_1 */
    case 1275:  /* *strmovdi_rex_1 */
    case 1274:  /* *strmovdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1264:  /* fistdi2_ceil */
    case 1263:  /* fistdi2_floor */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 9085:  /* atomic_storedi_fpu */
    case 9080:  /* atomic_loaddi_fpu */
    case 1268:  /* fistsi2_ceil */
    case 1267:  /* fistsi2_floor */
    case 1266:  /* fisthi2_ceil */
    case 1265:  /* fisthi2_floor */
    case 1256:  /* frndintxf2_trunc_i387 */
    case 1255:  /* frndintxf2_ceil_i387 */
    case 1254:  /* frndintxf2_floor_i387 */
    case 1253:  /* frndintxf2_roundeven_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1957:  /* movdi_to_sse */
    case 1382:  /* stack_protect_set_1_di */
    case 1381:  /* stack_protect_set_1_si */
    case 1246:  /* lrintxfdi2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1239:  /* fscalexf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      break;

    case 1387:  /* stack_protect_test_1_di */
    case 1386:  /* stack_protect_test_1_si */
    case 1236:  /* fyl2xp1xf3_i387 */
    case 1235:  /* fyl2xxf3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1234:  /* atan2xf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 1233:  /* fptanxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 1423:  /* xgetbv_rex64 */
    case 1393:  /* rdpmc_rex64 */
    case 1237:  /* fxtractxf3_i387 */
    case 1232:  /* sincosxf3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1229:  /* fprem1xf4_i387 */
    case 1228:  /* fpremxf4_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 1);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0, 0);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 1);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[3] = 2;
      break;

    case 1218:  /* *fop_df_6_i387 */
    case 1217:  /* *fop_xf_6_i387 */
    case 1216:  /* *fop_xf_6_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1215:  /* *fop_df_5_i387 */
    case 1214:  /* *fop_xf_5_i387 */
    case 1213:  /* *fop_xf_5_i387 */
    case 1209:  /* *fop_xf_3_i387 */
    case 1208:  /* *fop_df_3_i387 */
    case 1207:  /* *fop_sf_3_i387 */
    case 1206:  /* *fop_xf_3_i387 */
    case 1205:  /* *fop_df_3_i387 */
    case 1204:  /* *fop_sf_3_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1212:  /* *fop_df_4_i387 */
    case 1211:  /* *fop_xf_4_i387 */
    case 1210:  /* *fop_xf_4_i387 */
    case 1203:  /* *fop_xf_2_i387 */
    case 1202:  /* *fop_df_2_i387 */
    case 1201:  /* *fop_sf_2_i387 */
    case 1200:  /* *fop_xf_2_i387 */
    case 1199:  /* *fop_df_2_i387 */
    case 1198:  /* *fop_sf_2_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 1185:  /* *tls_dynamic_gnu2_combine_64_di */
    case 1184:  /* *tls_dynamic_gnu2_combine_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1179:  /* *tls_dynamic_gnu2_combine_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 2));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1178:  /* *tls_dynamic_gnu2_call_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      break;

    case 1177:  /* *tls_dynamic_gnu2_lea_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0, 0));
      break;

    case 1176:  /* *add_tp_x32_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1175:  /* *add_tp_di */
    case 1174:  /* *add_tp_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1170:  /* *tls_local_dynamic_32_once */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0, 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1169:  /* *tls_local_dynamic_base_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1166:  /* *tls_local_dynamic_base_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1165:  /* *tls_global_dynamic_64_largepic */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1164:  /* *tls_global_dynamic_64_di */
    case 1163:  /* *tls_global_dynamic_64_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1162:  /* *tls_global_dynamic_32_gnu */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1160:  /* parityhi2_cmp */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1159:  /* bswaphi_lowpart */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1142:  /* *tbm_tzmsk_di */
    case 1141:  /* *tbm_tzmsk_si */
    case 1140:  /* *tbm_t1mskc_di */
    case 1139:  /* *tbm_t1mskc_si */
    case 1138:  /* *tbm_blsic_di */
    case 1137:  /* *tbm_blsic_si */
    case 1130:  /* *tbm_blcic_di */
    case 1129:  /* *tbm_blcic_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1128:  /* *tbm_blci_di */
    case 1127:  /* *tbm_blci_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1124:  /* tbm_bextri_di */
    case 1123:  /* tbm_bextri_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      break;

    case 9084:  /* atomic_storedi_1 */
    case 9083:  /* atomic_storesi_1 */
    case 9082:  /* atomic_storehi_1 */
    case 9081:  /* atomic_storeqi_1 */
    case 9018:  /* avx512vp2intersect_2intersectv16si */
    case 9017:  /* avx512vp2intersect_2intersectv4si */
    case 9016:  /* avx512vp2intersect_2intersectv8si */
    case 9015:  /* avx512vp2intersect_2intersectv2di */
    case 9014:  /* avx512vp2intersect_2intersectv4di */
    case 9013:  /* avx512vp2intersect_2intersectv8di */
    case 9009:  /* avx512vl_vpshufbitqmbv16qi */
    case 9007:  /* avx512vl_vpshufbitqmbv32qi */
    case 9005:  /* avx512vl_vpshufbitqmbv64qi */
    case 9001:  /* vaesenclast_v64qi */
    case 9000:  /* vaesenclast_v16qi */
    case 8999:  /* vaesenclast_v32qi */
    case 8998:  /* vaesenc_v64qi */
    case 8997:  /* vaesenc_v16qi */
    case 8996:  /* vaesenc_v32qi */
    case 8995:  /* vaesdeclast_v64qi */
    case 8994:  /* vaesdeclast_v16qi */
    case 8993:  /* vaesdeclast_v32qi */
    case 8992:  /* vaesdec_v64qi */
    case 8991:  /* vaesdec_v16qi */
    case 8990:  /* vaesdec_v32qi */
    case 8862:  /* vgf2p8mulb_v16qi */
    case 8860:  /* vgf2p8mulb_v32qi */
    case 8858:  /* vgf2p8mulb_v64qi */
    case 8792:  /* vpmultishiftqbv32qi */
    case 8790:  /* vpmultishiftqbv16qi */
    case 8788:  /* vpmultishiftqbv64qi */
    case 8762:  /* sha256msg2 */
    case 8761:  /* sha256msg1 */
    case 8759:  /* sha1nexte */
    case 8758:  /* sha1msg2 */
    case 8757:  /* sha1msg1 */
    case 8711:  /* avx512vl_getmantv2df */
    case 8707:  /* avx512vl_getmantv4df */
    case 8703:  /* avx512f_getmantv8df */
    case 8699:  /* avx512vl_getmantv4sf */
    case 8695:  /* avx512vl_getmantv8sf */
    case 8691:  /* avx512f_getmantv16sf */
    case 8687:  /* avx512fp16_getmantv8hf */
    case 8683:  /* avx512vl_getmantv16hf */
    case 8679:  /* avx512bw_getmantv32hf */
    case 8671:  /* avx512dq_fpclassv2df */
    case 8669:  /* avx512dq_fpclassv4df */
    case 8667:  /* avx512dq_fpclassv8df */
    case 8665:  /* avx512dq_fpclassv4sf */
    case 8663:  /* avx512dq_fpclassv8sf */
    case 8661:  /* avx512dq_fpclassv16sf */
    case 8659:  /* avx512dq_fpclassv8hf */
    case 8657:  /* avx512dq_fpclassv16hf */
    case 8655:  /* avx512dq_fpclassv32hf */
    case 8341:  /* *avx512f_vcvtps2ph512 */
    case 8337:  /* *avx512f_vcvtps2ph512 */
    case 8335:  /* *vcvtps2ph256 */
    case 8333:  /* vcvtps2ph256 */
    case 8332:  /* *vcvtps2ph_store */
    case 8076:  /* avx_vpermilvarv2df3 */
    case 8074:  /* avx_vpermilvarv4df3 */
    case 8072:  /* avx512f_vpermilvarv8df3 */
    case 8070:  /* avx_vpermilvarv4sf3 */
    case 8068:  /* avx_vpermilvarv8sf3 */
    case 8066:  /* avx512f_vpermilvarv16sf3 */
    case 7868:  /* avx512bw_permvarv32hi */
    case 7866:  /* avx512vl_permvarv16hi */
    case 7864:  /* avx512vl_permvarv8hi */
    case 7862:  /* avx512vl_permvarv32qi */
    case 7860:  /* avx512vl_permvarv16qi */
    case 7858:  /* avx512bw_permvarv64qi */
    case 7856:  /* avx2_permvarv4df */
    case 7854:  /* avx2_permvarv4di */
    case 7852:  /* avx512f_permvarv8df */
    case 7850:  /* avx512f_permvarv8di */
    case 7848:  /* avx512f_permvarv16sf */
    case 7846:  /* avx512f_permvarv16si */
    case 7844:  /* avx2_permvarv8sf */
    case 7842:  /* avx2_permvarv8si */
    case 7814:  /* aeskeygenassist */
    case 7812:  /* aesdeclast */
    case 7811:  /* aesdec */
    case 7810:  /* aesenclast */
    case 7809:  /* aesenc */
    case 7644:  /* sse4_1_roundpd */
    case 7643:  /* avx_roundpd256 */
    case 7642:  /* sse4_1_roundps */
    case 7641:  /* avx_roundps256 */
    case 7388:  /* sse4a_insertq */
    case 7386:  /* sse4a_extrq */
    case 7349:  /* ssse3_psignv2si3 */
    case 7348:  /* ssse3_psignv4hi3 */
    case 7347:  /* ssse3_psignv8qi3 */
    case 7346:  /* ssse3_psignv4si3 */
    case 7345:  /* avx2_psignv8si3 */
    case 7344:  /* ssse3_psignv8hi3 */
    case 7343:  /* avx2_psignv16hi3 */
    case 7342:  /* ssse3_psignv16qi3 */
    case 7341:  /* avx2_psignv32qi3 */
    case 7338:  /* ssse3_pshufbv16qi3 */
    case 7336:  /* avx2_pshufbv32qi3 */
    case 7334:  /* avx512bw_pshufbv64qi3 */
    case 7320:  /* avx512bw_pmaddubsw512v32hi */
    case 7318:  /* avx512bw_pmaddubsw512v16hi */
    case 7316:  /* avx512bw_pmaddubsw512v8hi */
    case 7241:  /* *sse2_psadbw */
    case 7240:  /* *avx2_psadbw */
    case 7239:  /* *avx512f_psadbw */
    case 7183:  /* *avx512bw_pshufhwv32hi */
    case 7177:  /* *avx512bw_pshuflwv32hi */
    case 6889:  /* avx512vl_testnmv2di3 */
    case 6887:  /* avx512vl_testnmv4di3 */
    case 6885:  /* avx512f_testnmv8di3 */
    case 6883:  /* avx512vl_testnmv4si3 */
    case 6881:  /* avx512vl_testnmv8si3 */
    case 6879:  /* avx512f_testnmv16si3 */
    case 6877:  /* avx512vl_testnmv8hi3 */
    case 6875:  /* avx512vl_testnmv16hi3 */
    case 6873:  /* avx512bw_testnmv32hi3 */
    case 6871:  /* avx512vl_testnmv16qi3 */
    case 6869:  /* avx512vl_testnmv32qi3 */
    case 6867:  /* avx512bw_testnmv64qi3 */
    case 6865:  /* avx512vl_testmv2di3 */
    case 6863:  /* avx512vl_testmv4di3 */
    case 6861:  /* avx512f_testmv8di3 */
    case 6859:  /* avx512vl_testmv4si3 */
    case 6857:  /* avx512vl_testmv8si3 */
    case 6855:  /* avx512f_testmv16si3 */
    case 6853:  /* avx512vl_testmv8hi3 */
    case 6851:  /* avx512vl_testmv16hi3 */
    case 6849:  /* avx512bw_testmv32hi3 */
    case 6847:  /* avx512vl_testmv16qi3 */
    case 6845:  /* avx512vl_testmv32qi3 */
    case 6843:  /* avx512bw_testmv64qi3 */
    case 6435:  /* avx512bw_pmaddwd512v8hi */
    case 6433:  /* avx512bw_pmaddwd512v16hi */
    case 6431:  /* avx512bw_pmaddwd512v32hi */
    case 5980:  /* avx512vl_rndscalev2df */
    case 5976:  /* avx512vl_rndscalev4df */
    case 5972:  /* avx512f_rndscalev8df */
    case 5968:  /* avx512vl_rndscalev4sf */
    case 5964:  /* avx512vl_rndscalev8sf */
    case 5960:  /* avx512f_rndscalev16sf */
    case 5956:  /* avx512fp16_rndscalev8hf */
    case 5952:  /* avx512vl_rndscalev16hf */
    case 5948:  /* avx512bw_rndscalev32hf */
    case 4466:  /* avx512vl_scalefv2df */
    case 4462:  /* avx512vl_scalefv4df */
    case 4458:  /* avx512f_scalefv8df */
    case 4454:  /* avx512vl_scalefv4sf */
    case 4450:  /* avx512vl_scalefv8sf */
    case 4446:  /* avx512f_scalefv16sf */
    case 4442:  /* avx512fp16_scalefv8hf */
    case 4438:  /* avx512vl_scalefv16hf */
    case 4434:  /* avx512bw_scalefv32hf */
    case 3600:  /* avx512fp16_fcmulc_v8hf */
    case 3598:  /* avx512fp16_fmulc_v8hf */
    case 3596:  /* avx512vl_fcmulc_v16hf */
    case 3594:  /* avx512vl_fmulc_v16hf */
    case 3590:  /* avx512bw_fcmulc_v32hf */
    case 3586:  /* avx512bw_fmulc_v32hf */
    case 2870:  /* *avx512vl_eqv2di3_1 */
    case 2868:  /* *avx512vl_eqv2di3_1 */
    case 2866:  /* *avx512vl_eqv4di3_1 */
    case 2864:  /* *avx512vl_eqv4di3_1 */
    case 2862:  /* *avx512f_eqv8di3_1 */
    case 2860:  /* *avx512f_eqv8di3_1 */
    case 2858:  /* *avx512vl_eqv4si3_1 */
    case 2856:  /* *avx512vl_eqv4si3_1 */
    case 2854:  /* *avx512vl_eqv8si3_1 */
    case 2852:  /* *avx512vl_eqv8si3_1 */
    case 2850:  /* *avx512f_eqv16si3_1 */
    case 2848:  /* *avx512f_eqv16si3_1 */
    case 2798:  /* *avx512vl_eqv8hi3_1 */
    case 2796:  /* *avx512vl_eqv8hi3_1 */
    case 2794:  /* *avx512vl_eqv16hi3_1 */
    case 2792:  /* *avx512vl_eqv16hi3_1 */
    case 2790:  /* *avx512bw_eqv32hi3_1 */
    case 2788:  /* *avx512bw_eqv32hi3_1 */
    case 2786:  /* *avx512vl_eqv32qi3_1 */
    case 2784:  /* *avx512vl_eqv32qi3_1 */
    case 2782:  /* *avx512vl_eqv16qi3_1 */
    case 2780:  /* *avx512vl_eqv16qi3_1 */
    case 2778:  /* *avx512bw_eqv64qi3_1 */
    case 2776:  /* *avx512bw_eqv64qi3_1 */
    case 2514:  /* *reducepv2df */
    case 2510:  /* *reducepv4df */
    case 2506:  /* *reducepv8df */
    case 2502:  /* *reducepv4sf */
    case 2498:  /* *reducepv8sf */
    case 2494:  /* *reducepv16sf */
    case 2490:  /* *reducepv8hf */
    case 2486:  /* *reducepv16hf */
    case 2482:  /* *reducepv32hf */
    case 2436:  /* ieee_minv2df3 */
    case 2434:  /* ieee_maxv2df3 */
    case 2432:  /* ieee_minv4df3 */
    case 2430:  /* ieee_maxv4df3 */
    case 2426:  /* ieee_minv8df3 */
    case 2422:  /* ieee_maxv8df3 */
    case 2420:  /* ieee_minv4sf3 */
    case 2418:  /* ieee_maxv4sf3 */
    case 2416:  /* ieee_minv8sf3 */
    case 2414:  /* ieee_maxv8sf3 */
    case 2410:  /* ieee_minv16sf3 */
    case 2406:  /* ieee_maxv16sf3 */
    case 2404:  /* ieee_minv8hf3 */
    case 2402:  /* ieee_maxv8hf3 */
    case 2400:  /* ieee_minv16hf3 */
    case 2398:  /* ieee_maxv16hf3 */
    case 2394:  /* ieee_minv32hf3 */
    case 2390:  /* ieee_maxv32hf3 */
    case 1817:  /* *mmx_psadbw */
    case 1785:  /* mmx_pshufbv4qi3 */
    case 1784:  /* mmx_pshufbv8qi3 */
    case 1592:  /* *mmx_roundv2sf2 */
    case 1553:  /* mmx_rsqit1v2sf3 */
    case 1550:  /* mmx_rcpit2v2sf3 */
    case 1549:  /* mmx_rcpit1v2sf3 */
    case 1547:  /* mmx_ieee_minv2sf3 */
    case 1546:  /* mmx_ieee_maxv2sf3 */
    case 1413:  /* xsaves64 */
    case 1412:  /* xsavec64 */
    case 1411:  /* xsaveopt64 */
    case 1410:  /* xsave64 */
    case 1409:  /* xsaves_rex64 */
    case 1408:  /* xsavec_rex64 */
    case 1407:  /* xsaveopt_rex64 */
    case 1406:  /* xsave_rex64 */
    case 1390:  /* sse4_2_crc32si */
    case 1389:  /* sse4_2_crc32hi */
    case 1388:  /* sse4_2_crc32qi */
    case 1338:  /* *ieee_smindf3 */
    case 1337:  /* *ieee_smaxdf3 */
    case 1336:  /* *ieee_sminsf3 */
    case 1335:  /* *ieee_smaxsf3 */
    case 1334:  /* *ieee_sminhf3 */
    case 1333:  /* *ieee_smaxhf3 */
    case 1244:  /* sse4_1_rounddf2 */
    case 1243:  /* sse4_1_roundsf2 */
    case 1242:  /* sse4_1_roundhf2 */
    case 1241:  /* avx512f_scalefdf2 */
    case 1240:  /* avx512f_scalefsf2 */
    case 1122:  /* bmi2_pext_di3 */
    case 1121:  /* bmi2_pext_si3 */
    case 1120:  /* bmi2_pdep_di3 */
    case 1119:  /* bmi2_pdep_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 1118:  /* *bmi2_bzhi_zero_extendsidi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      break;

    case 1117:  /* *bmi2_bzhi_zero_extendsidi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      break;

    case 1112:  /* *bmi2_bzhi_di3_1_ccz */
    case 1111:  /* *bmi2_bzhi_si3_1_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1110:  /* *bmi2_bzhi_di3_1 */
    case 1109:  /* *bmi2_bzhi_si3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1108:  /* *bmi2_bzhi_di3 */
    case 1107:  /* *bmi2_bzhi_si3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 1106:  /* *bmi_blsr_di_ccz */
    case 1105:  /* *bmi_blsr_si_ccz */
    case 1098:  /* *bmi_blsi_di_ccno */
    case 1097:  /* *bmi_blsi_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1104:  /* *bmi_blsr_di_cmp */
    case 1103:  /* *bmi_blsr_si_cmp */
    case 1096:  /* *bmi_blsi_di_cmp */
    case 1095:  /* *bmi_blsi_si_cmp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 1136:  /* *tbm_blsfill_di */
    case 1135:  /* *tbm_blsfill_si */
    case 1134:  /* *tbm_blcs_di */
    case 1133:  /* *tbm_blcs_si */
    case 1132:  /* *tbm_blcmsk_di */
    case 1131:  /* *tbm_blcmsk_si */
    case 1126:  /* *tbm_blcfill_di */
    case 1125:  /* *tbm_blcfill_si */
    case 1102:  /* *bmi_blsr_di */
    case 1101:  /* *bmi_blsr_si */
    case 1100:  /* *bmi_blsmsk_di */
    case 1099:  /* *bmi_blsmsk_si */
    case 1094:  /* *bmi_blsi_di */
    case 1093:  /* *bmi_blsi_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 1092:  /* *bmi_bextr_di_ccz */
    case 1091:  /* *bmi_bextr_si_ccz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0, 1));
      break;

    case 1374:  /* probe_stack_range_di */
    case 1373:  /* probe_stack_range_si */
    case 1183:  /* *tls_dynamic_gnu2_call_64_di */
    case 1182:  /* *tls_dynamic_gnu2_call_64_si */
    case 1090:  /* bmi_bextr_di */
    case 1089:  /* bmi_bextr_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 1086:  /* *lzcnt_di_falsedep */
    case 1085:  /* *tzcnt_di_falsedep */
    case 1084:  /* *lzcnt_si_falsedep */
    case 1083:  /* *tzcnt_si_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1370:  /* probe_stack_1_di */
    case 1369:  /* probe_stack_1_si */
    case 1368:  /* allocate_stack_worker_probe_di */
    case 1367:  /* allocate_stack_worker_probe_si */
    case 1262:  /* *fistdi2_ceil_1 */
    case 1261:  /* *fistdi2_floor_1 */
    case 1260:  /* *fistsi2_ceil_1 */
    case 1259:  /* *fistsi2_floor_1 */
    case 1258:  /* *fisthi2_ceil_1 */
    case 1257:  /* *fisthi2_floor_1 */
    case 1252:  /* frndintxf2_trunc */
    case 1251:  /* frndintxf2_ceil */
    case 1250:  /* frndintxf2_floor */
    case 1249:  /* frndintxf2_roundeven */
    case 1088:  /* lzcnt_hi */
    case 1087:  /* tzcnt_hi */
    case 1082:  /* lzcnt_di */
    case 1081:  /* tzcnt_di */
    case 1080:  /* lzcnt_si */
    case 1079:  /* tzcnt_si */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 1068:  /* *bsr_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      break;

    case 1067:  /* *bsr_rex64_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0), 0));
      break;

    case 1066:  /* bsr_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 1063:  /* bsr_rex64_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      break;

    case 1065:  /* bsr_1 */
    case 1062:  /* bsr_rex64_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 1064:  /* bsr */
    case 1061:  /* bsr_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1150:  /* *popcountsi2_zext_2_falsedep */
    case 1078:  /* *clzsi2_lzcnt_zext_2_falsedep */
    case 1077:  /* *clzsi2_lzcnt_zext_2_falsedep */
    case 1060:  /* *ctzsidi2_uext_falsedep */
    case 1059:  /* *ctzsidi2_sext_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1148:  /* *popcountsi2_zext_falsedep */
    case 1075:  /* *clzsi2_lzcnt_zext_falsedep */
    case 1074:  /* *clzsi2_lzcnt_zext_falsedep */
    case 1056:  /* *ctzsi2_zext_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1147:  /* *popcountsi2_zext */
    case 1073:  /* *clzsi2_lzcnt_zext */
    case 1055:  /* *ctzsi2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 1146:  /* *popcountdi2_falsedep */
    case 1145:  /* *popcountsi2_falsedep */
    case 1072:  /* *clzdi2_lzcnt_falsedep */
    case 1071:  /* *clzsi2_lzcnt_falsedep */
    case 1054:  /* *ctzdi2_falsedep */
    case 1053:  /* *ctzsi2_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 1), 0, 0));
      break;

    case 1048:  /* *tzcntdi_1_falsedep */
    case 1047:  /* *tzcntsi_1_falsedep */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XVECEXP (pat, 0, 2), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 1050:  /* *bsfdi_1 */
    case 1049:  /* *bsfsi_1 */
    case 1046:  /* *tzcntdi_1 */
    case 1045:  /* *tzcntsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 7384:  /* sse4a_vmmovntv2df */
    case 7383:  /* sse4a_vmmovntv4sf */
    case 4051:  /* sse2_cvtsd2siq */
    case 4049:  /* sse2_cvtsd2si */
    case 4043:  /* avx512f_vcvtsd2usiq */
    case 4041:  /* avx512f_vcvtsd2usi */
    case 4035:  /* avx512f_vcvtss2usiq */
    case 4033:  /* avx512f_vcvtss2usi */
    case 4011:  /* *avx512dq_cvtps2uqqv2di */
    case 4003:  /* *avx512dq_cvtps2qqv2di */
    case 3942:  /* sse_cvtss2siq */
    case 3940:  /* sse_cvtss2si */
    case 3766:  /* avx512fp16_vcvtsh2siq */
    case 3764:  /* avx512fp16_vcvtsh2usiq */
    case 3762:  /* avx512fp16_vcvtsh2si */
    case 3760:  /* avx512fp16_vcvtsh2usi */
    case 1039:  /* set_got_offset_rex64 */
    case 1038:  /* set_rip_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 1036:  /* *set_got_labelled */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 1451:  /* rdseeddi */
    case 1450:  /* rdseedsi */
    case 1449:  /* rdseedhi */
    case 1448:  /* rdranddi */
    case 1447:  /* rdrandsi */
    case 1446:  /* rdrandhi */
    case 1424:  /* fnstenv */
    case 1035:  /* *set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 1031:  /* *simple_return_indirect_internaldi */
    case 1030:  /* *simple_return_indirect_internalsi */
    case 1029:  /* simple_return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 7293:  /* sse2_clflush */
    case 7291:  /* sse_ldmxcsr */
    case 1507:  /* hreset */
    case 1503:  /* cldemote */
    case 1500:  /* umonitor_di */
    case 1499:  /* umonitor_si */
    case 1496:  /* senduipi */
    case 1476:  /* clzero_di */
    case 1475:  /* clzero_si */
    case 1471:  /* clflushopt */
    case 1470:  /* clwb */
    case 1468:  /* xabort */
    case 1464:  /* clrssbsy */
    case 1458:  /* rstorssp */
    case 1456:  /* incsspdi */
    case 1455:  /* incsspsi */
    case 1445:  /* ptwritedi */
    case 1444:  /* ptwritesi */
    case 1443:  /* wrgsbasedi */
    case 1442:  /* wrfsbasedi */
    case 1441:  /* wrgsbasesi */
    case 1440:  /* wrfsbasesi */
    case 1429:  /* lwp_llwpcbdi */
    case 1428:  /* lwp_llwpcbsi */
    case 1401:  /* fxrstor64 */
    case 1400:  /* fxrstor */
    case 1043:  /* split_stack_return */
    case 1034:  /* pad */
    case 1033:  /* nops */
    case 1025:  /* prologue_use */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 9078:  /* mfence_sse2 */
    case 9077:  /* *sse_sfence */
    case 9076:  /* *sse2_lfence */
    case 1452:  /* *pause */
    case 1024:  /* *memory_blockage */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 1022:  /* *sibcall_value_pop_memory */
    case 1021:  /* *sibcall_value_pop */
    case 1020:  /* *call_value_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1015:  /* *sibcall_value_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 4335:  /* *vec_setv2di_0_zero_extendsi */
    case 4334:  /* *vec_setv4di_0_zero_extendsi */
    case 4333:  /* *vec_setv8di_0_zero_extendsi */
    case 4324:  /* *vec_setv2di_0_zero_extendhi */
    case 4323:  /* *vec_setv4di_0_zero_extendhi */
    case 4322:  /* *vec_setv8di_0_zero_extendhi */
    case 4321:  /* *vec_setv4si_0_zero_extendhi */
    case 4320:  /* *vec_setv8si_0_zero_extendhi */
    case 4319:  /* *vec_setv16si_0_zero_extendhi */
    case 3931:  /* avx512fp16_vcvtsd2sh_mem */
    case 3929:  /* avx512fp16_vcvtss2sh_mem */
    case 3919:  /* avx512fp16_vcvtsh2ss_mem */
    case 3917:  /* avx512fp16_vcvtsh2sd_mem */
    case 2308:  /* *sse2_vmsqrtv2df2 */
    case 2304:  /* *sse_vmsqrtv4sf2 */
    case 2300:  /* *avx512fp16_vmsqrtv8hf2 */
    case 1014:  /* *call_value_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 1011:  /* *sibcall_pop_memory */
    case 1010:  /* *sibcall_pop */
    case 1009:  /* *call_pop */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 1004:  /* *sibcall_GOT_32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 1003:  /* *call_got_x32 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 1000:  /* *tablejump_1 */
    case 999:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 998:  /* *indirect_jump */
    case 997:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 996:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 995:  /* *jcc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 9063:  /* vpdpbuuds_v4si */
    case 9062:  /* vpdpbuud_v4si */
    case 9061:  /* vpdpbsuds_v4si */
    case 9060:  /* vpdpbsud_v4si */
    case 9059:  /* vpdpbssds_v4si */
    case 9058:  /* vpdpbssd_v4si */
    case 9057:  /* vpdpbuuds_v8si */
    case 9056:  /* vpdpbuud_v8si */
    case 9055:  /* vpdpbsuds_v8si */
    case 9054:  /* vpdpbsud_v8si */
    case 9053:  /* vpdpbssds_v8si */
    case 9052:  /* vpdpbssd_v8si */
    case 9036:  /* avx512f_dpbf16ps_v4sf */
    case 9034:  /* avx512f_dpbf16ps_v8sf */
    case 9032:  /* avx512f_dpbf16ps_v16sf */
    case 9004:  /* vpclmulqdq_v2di */
    case 9003:  /* vpclmulqdq_v4di */
    case 9002:  /* vpclmulqdq_v8di */
    case 8983:  /* vpdpwssds_v4si */
    case 8982:  /* vpdpwssds_v8si */
    case 8981:  /* vpdpwssds_v16si */
    case 8974:  /* vpdpwssd_v4si */
    case 8973:  /* vpdpwssd_v8si */
    case 8972:  /* vpdpwssd_v16si */
    case 8965:  /* vpdpbusds_v4si */
    case 8964:  /* vpdpbusds_v8si */
    case 8963:  /* vpdpbusds_v16si */
    case 8956:  /* vpdpbusd_v4si */
    case 8955:  /* vpdpbusd_v8si */
    case 8954:  /* vpdpbusd_v16si */
    case 8935:  /* vpshldv_v2di */
    case 8934:  /* vpshldv_v4si */
    case 8933:  /* vpshldv_v8hi */
    case 8932:  /* vpshldv_v4di */
    case 8931:  /* vpshldv_v8si */
    case 8930:  /* vpshldv_v16hi */
    case 8929:  /* vpshldv_v8di */
    case 8928:  /* vpshldv_v16si */
    case 8927:  /* vpshldv_v32hi */
    case 8908:  /* vpshrdv_v2di */
    case 8907:  /* vpshrdv_v4si */
    case 8906:  /* vpshrdv_v8hi */
    case 8905:  /* vpshrdv_v4di */
    case 8904:  /* vpshrdv_v8si */
    case 8903:  /* vpshrdv_v16hi */
    case 8902:  /* vpshrdv_v8di */
    case 8901:  /* vpshrdv_v16si */
    case 8900:  /* vpshrdv_v32hi */
    case 8898:  /* vpshld_v2di */
    case 8896:  /* vpshld_v4si */
    case 8894:  /* vpshld_v8hi */
    case 8892:  /* vpshld_v4di */
    case 8890:  /* vpshld_v8si */
    case 8888:  /* vpshld_v16hi */
    case 8886:  /* vpshld_v8di */
    case 8884:  /* vpshld_v16si */
    case 8882:  /* vpshld_v32hi */
    case 8880:  /* vpshrd_v2di */
    case 8878:  /* vpshrd_v4si */
    case 8876:  /* vpshrd_v8hi */
    case 8874:  /* vpshrd_v4di */
    case 8872:  /* vpshrd_v8si */
    case 8870:  /* vpshrd_v16hi */
    case 8868:  /* vpshrd_v8di */
    case 8866:  /* vpshrd_v16si */
    case 8864:  /* vpshrd_v32hi */
    case 8856:  /* vgf2p8affineqb_v16qi */
    case 8854:  /* vgf2p8affineqb_v32qi */
    case 8852:  /* vgf2p8affineqb_v64qi */
    case 8850:  /* vgf2p8affineinvqb_v16qi */
    case 8848:  /* vgf2p8affineinvqb_v32qi */
    case 8846:  /* vgf2p8affineinvqb_v64qi */
    case 8811:  /* avx5124vnniw_vp4dpwssds */
    case 8808:  /* avx5124vnniw_vp4dpwssd */
    case 8805:  /* avx5124fmaddps_4fnmaddss */
    case 8802:  /* avx5124fmaddps_4fnmaddps */
    case 8799:  /* avx5124fmaddps_4fmaddss */
    case 8796:  /* avx5124fmaddps_4fmaddps */
    case 8775:  /* vpmadd52huqv2di */
    case 8774:  /* vpmadd52luqv2di */
    case 8773:  /* vpmadd52huqv4di */
    case 8772:  /* vpmadd52luqv4di */
    case 8771:  /* vpmadd52huqv8di */
    case 8770:  /* vpmadd52luqv8di */
    case 8763:  /* sha256rnds2 */
    case 8760:  /* sha1rnds4 */
    case 8731:  /* *avx512bw_dbpsadbwv32hi */
    case 8729:  /* *avx512bw_dbpsadbwv16hi */
    case 8727:  /* *avx512bw_dbpsadbwv8hi */
    case 8645:  /* avx512dq_rangepv2df */
    case 8643:  /* avx512dq_rangepv4df */
    case 8639:  /* avx512dq_rangepv8df */
    case 8637:  /* avx512dq_rangepv4sf */
    case 8635:  /* avx512dq_rangepv8sf */
    case 8631:  /* avx512dq_rangepv16sf */
    case 8630:  /* *expandv8hi_mask */
    case 8629:  /* *expandv16hi_mask */
    case 8628:  /* *expandv32hi_mask */
    case 8627:  /* *expandv32qi_mask */
    case 8626:  /* *expandv16qi_mask */
    case 8625:  /* *expandv64qi_mask */
    case 8624:  /* *expandv2df_mask */
    case 8623:  /* *expandv2di_mask */
    case 8622:  /* *expandv4sf_mask */
    case 8621:  /* *expandv4si_mask */
    case 8620:  /* *expandv4df_mask */
    case 8619:  /* *expandv4di_mask */
    case 8618:  /* *expandv8sf_mask */
    case 8617:  /* *expandv8si_mask */
    case 8616:  /* *expandv8df_mask */
    case 8615:  /* *expandv8di_mask */
    case 8614:  /* *expandv16sf_mask */
    case 8613:  /* *expandv16si_mask */
    case 8612:  /* expandv8hi_mask */
    case 8611:  /* expandv16hi_mask */
    case 8610:  /* expandv32hi_mask */
    case 8609:  /* expandv32qi_mask */
    case 8608:  /* expandv16qi_mask */
    case 8607:  /* expandv64qi_mask */
    case 8606:  /* expandv2df_mask */
    case 8605:  /* expandv2di_mask */
    case 8604:  /* expandv4sf_mask */
    case 8603:  /* expandv4si_mask */
    case 8602:  /* expandv4df_mask */
    case 8601:  /* expandv4di_mask */
    case 8600:  /* expandv8sf_mask */
    case 8599:  /* expandv8si_mask */
    case 8598:  /* expandv8df_mask */
    case 8597:  /* expandv8di_mask */
    case 8596:  /* expandv16sf_mask */
    case 8595:  /* expandv16si_mask */
    case 8576:  /* compressv8hi_mask */
    case 8575:  /* compressv16hi_mask */
    case 8574:  /* compressv32hi_mask */
    case 8573:  /* compressv32qi_mask */
    case 8572:  /* compressv16qi_mask */
    case 8571:  /* compressv64qi_mask */
    case 8570:  /* avx512vl_compressv2df_mask */
    case 8569:  /* avx512vl_compressv2di_mask */
    case 8568:  /* avx512vl_compressv4sf_mask */
    case 8567:  /* avx512vl_compressv4si_mask */
    case 8566:  /* avx512vl_compressv4df_mask */
    case 8565:  /* avx512vl_compressv4di_mask */
    case 8564:  /* avx512vl_compressv8sf_mask */
    case 8563:  /* avx512vl_compressv8si_mask */
    case 8562:  /* avx512f_compressv8df_mask */
    case 8561:  /* avx512f_compressv8di_mask */
    case 8560:  /* avx512f_compressv16sf_mask */
    case 8559:  /* avx512f_compressv16si_mask */
    case 8152:  /* *avx_vperm2f128v4df_full */
    case 8151:  /* *avx_vperm2f128v8sf_full */
    case 8150:  /* *avx_vperm2f128v8si_full */
    case 8130:  /* avx512vl_vpermt2varv16qi3 */
    case 8128:  /* avx512vl_vpermt2varv32qi3 */
    case 8126:  /* avx512bw_vpermt2varv64qi3 */
    case 8124:  /* avx512vl_vpermt2varv8hi3 */
    case 8122:  /* avx512vl_vpermt2varv16hi3 */
    case 8120:  /* avx512bw_vpermt2varv32hi3 */
    case 8118:  /* avx512vl_vpermt2varv2df3 */
    case 8116:  /* avx512vl_vpermt2varv2di3 */
    case 8114:  /* avx512vl_vpermt2varv4sf3 */
    case 8112:  /* avx512vl_vpermt2varv4si3 */
    case 8110:  /* avx512vl_vpermt2varv4df3 */
    case 8108:  /* avx512vl_vpermt2varv4di3 */
    case 8106:  /* avx512vl_vpermt2varv8sf3 */
    case 8104:  /* avx512vl_vpermt2varv8si3 */
    case 8102:  /* avx512f_vpermt2varv8df3 */
    case 8100:  /* avx512f_vpermt2varv8di3 */
    case 8098:  /* avx512f_vpermt2varv16sf3 */
    case 8096:  /* avx512f_vpermt2varv16si3 */
    case 7893:  /* avx2_permv2ti */
    case 7815:  /* pclmulqdq */
    case 7804:  /* xop_pcom_tfv2di3 */
    case 7803:  /* xop_pcom_tfv4si3 */
    case 7802:  /* xop_pcom_tfv8hi3 */
    case 7801:  /* xop_pcom_tfv16qi3 */
    case 7757:  /* xop_pperm */
    case 7427:  /* sse4_1_pblendvb */
    case 7426:  /* avx2_pblendvb */
    case 7419:  /* sse4_1_mpsadbw */
    case 7418:  /* avx2_mpsadbw */
    case 7414:  /* sse4_1_dppd */
    case 7413:  /* avx_dppd256 */
    case 7412:  /* sse4_1_dpps */
    case 7411:  /* avx_dpps256 */
    case 7398:  /* sse4_1_blendvsd */
    case 7397:  /* sse4_1_blendvss */
    case 7396:  /* sse4_1_blendvpd */
    case 7395:  /* avx_blendvpd256 */
    case 7394:  /* sse4_1_blendvps */
    case 7393:  /* avx_blendvps256 */
    case 7385:  /* sse4a_extrqi */
    case 7356:  /* ssse3_palignrdi */
    case 7355:  /* ssse3_palignrv1ti */
    case 7354:  /* avx2_palignrv2ti */
    case 7353:  /* avx512bw_palignrv4ti */
    case 5890:  /* *avx512vl_alignv2di */
    case 5888:  /* *avx512vl_alignv4di */
    case 5886:  /* *avx512f_alignv8di */
    case 5884:  /* *avx512vl_alignv4si */
    case 5882:  /* *avx512vl_alignv8si */
    case 5880:  /* *avx512f_alignv16si */
    case 3571:  /* fma_fcmaddc_v4sf_pair */
    case 3570:  /* fma_fmaddc_v4sf_pair */
    case 3569:  /* fma_fcmaddc_v8sf_pair */
    case 3568:  /* fma_fmaddc_v8sf_pair */
    case 3567:  /* fma_fcmaddc_v16sf_pair */
    case 3566:  /* fma_fmaddc_v16sf_pair */
    case 3552:  /* fma_fcmaddc_v8hf */
    case 3550:  /* fma_fmaddc_v8hf */
    case 3548:  /* fma_fcmaddc_v16hf */
    case 3546:  /* fma_fmaddc_v16hf */
    case 3542:  /* fma_fcmaddc_v32hf */
    case 3538:  /* fma_fmaddc_v32hf */
    case 3329:  /* *fma_fmaddsub_v2df */
    case 3327:  /* *fma_fmaddsub_v4df */
    case 3323:  /* *fma_fmaddsub_v8df */
    case 3322:  /* *fma_fmaddsub_df */
    case 3320:  /* *fma_fmaddsub_v4sf */
    case 3318:  /* *fma_fmaddsub_v8sf */
    case 3314:  /* *fma_fmaddsub_v16sf */
    case 3313:  /* *fma_fmaddsub_sf */
    case 3312:  /* *fma_fmaddsub_hf */
    case 3310:  /* *fma_fmaddsub_v8hf */
    case 3308:  /* *fma_fmaddsub_v16hf */
    case 3304:  /* *fma_fmaddsub_v32hf */
    case 3303:  /* *fma_fmaddsub_v2df */
    case 3302:  /* *fma_fmaddsub_v4df */
    case 3301:  /* *fma_fmaddsub_v4sf */
    case 3300:  /* *fma_fmaddsub_v8sf */
    case 2882:  /* avx512vl_ucmpv2di3 */
    case 2880:  /* avx512vl_ucmpv4di3 */
    case 2878:  /* avx512f_ucmpv8di3 */
    case 2876:  /* avx512vl_ucmpv4si3 */
    case 2874:  /* avx512vl_ucmpv8si3 */
    case 2872:  /* avx512f_ucmpv16si3 */
    case 2810:  /* avx512vl_ucmpv8hi3 */
    case 2808:  /* avx512vl_ucmpv16hi3 */
    case 2806:  /* avx512bw_ucmpv32hi3 */
    case 2804:  /* avx512vl_ucmpv32qi3 */
    case 2802:  /* avx512vl_ucmpv16qi3 */
    case 2800:  /* avx512bw_ucmpv64qi3 */
    case 2726:  /* avx512vl_cmpv8hi3 */
    case 2724:  /* avx512vl_cmpv16hi3 */
    case 2722:  /* avx512bw_cmpv32hi3 */
    case 2720:  /* avx512vl_cmpv32qi3 */
    case 2718:  /* avx512vl_cmpv16qi3 */
    case 2716:  /* avx512bw_cmpv64qi3 */
    case 2612:  /* avx512vl_cmpv2df3 */
    case 2610:  /* avx512vl_cmpv4df3 */
    case 2606:  /* avx512f_cmpv8df3 */
    case 2604:  /* avx512vl_cmpv4sf3 */
    case 2602:  /* avx512vl_cmpv8sf3 */
    case 2598:  /* avx512f_cmpv16sf3 */
    case 2596:  /* avx512fp16_cmpv8hf3 */
    case 2594:  /* avx512vl_cmpv16hf3 */
    case 2590:  /* avx512bw_cmpv32hf3 */
    case 2588:  /* avx512vl_cmpv2di3 */
    case 2586:  /* avx512vl_cmpv4di3 */
    case 2582:  /* avx512f_cmpv8di3 */
    case 2580:  /* avx512vl_cmpv4si3 */
    case 2578:  /* avx512vl_cmpv8si3 */
    case 2574:  /* avx512f_cmpv16si3 */
    case 2533:  /* avx_cmpv2df3 */
    case 2532:  /* avx_cmpv4df3 */
    case 2531:  /* avx_cmpv4sf3 */
    case 2530:  /* avx_cmpv8sf3 */
    case 1728:  /* mmx_ppermv32 */
    case 1727:  /* mmx_ppermv64 */
    case 1719:  /* mmx_pblendvb_v2hi */
    case 1718:  /* mmx_pblendvb_v2qi */
    case 1717:  /* mmx_pblendvb_v4qi */
    case 1716:  /* mmx_pblendvb_v8qi */
    case 1566:  /* mmx_blendvps */
    case 1321:  /* movhf_mask */
    case 994:  /* setcc_hf_mask */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 2571:  /* sse2_maskcmpv2df3 */
    case 2570:  /* avx_maskcmpv4df3 */
    case 2569:  /* sse_maskcmpv4sf3 */
    case 2568:  /* avx_maskcmpv8sf3 */
    case 2567:  /* *sse2_maskcmpv2df3_comm */
    case 2566:  /* *avx_maskcmpv4df3_comm */
    case 2565:  /* *sse_maskcmpv4sf3_comm */
    case 2564:  /* *avx_maskcmpv8sf3_comm */
    case 1564:  /* *mmx_maskcmpv2sf3 */
    case 1563:  /* *mmx_maskcmpv2sf3_comm */
    case 1197:  /* *fop_df_1 */
    case 1196:  /* *fop_sf_1 */
    case 1195:  /* *fop_xf_1_i387 */
    case 1188:  /* *fop_df_comm */
    case 1187:  /* *fop_sf_comm */
    case 1186:  /* *fop_xf_comm_i387 */
    case 993:  /* setcc_df_sse */
    case 992:  /* setcc_sf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 984:  /* *btdi_setncdi */
    case 983:  /* *btsi_setncsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 982:  /* *btdi_setncqi */
    case 981:  /* *btsi_setncqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      break;

    case 980:  /* *btdi_setcqi */
    case 979:  /* *btsi_setcqi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      break;

    case 978:  /* *jcc_btdi_mask_1 */
    case 977:  /* *jcc_btsi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 976:  /* *jcc_btdi_mask */
    case 975:  /* *jcc_btsi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 974:  /* *jcc_btdi_1 */
    case 973:  /* *jcc_btsi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 972:  /* *jcc_btdi */
    case 971:  /* *jcc_btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 970:  /* *btdi */
    case 969:  /* *btsi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 968:  /* *btcq_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 2);
      recog_data.dup_num[1] = 1;
      break;

    case 967:  /* *btrq_imm */
    case 966:  /* *btsq_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2));
      break;

    case 965:  /* *btrhi_2 */
    case 964:  /* *btrqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 2), 0));
      break;

    case 1116:  /* *bmi2_bzhi_di3_3 */
    case 1115:  /* *bmi2_bzhi_si3_3 */
    case 1114:  /* *bmi2_bzhi_di3_2 */
    case 1113:  /* *bmi2_bzhi_si3_2 */
    case 963:  /* *btrhi_1 */
    case 962:  /* *btrqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 961:  /* *btrdi_mask_1 */
    case 960:  /* *btrsi_mask_1 */
    case 955:  /* *btcdi_mask_1 */
    case 954:  /* *btsdi_mask_1 */
    case 953:  /* *btcsi_mask_1 */
    case 952:  /* *btssi_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 959:  /* *btrdi_mask */
    case 958:  /* *btrsi_mask */
    case 951:  /* *btcdi_mask */
    case 950:  /* *btsdi_mask */
    case 949:  /* *btcsi_mask */
    case 948:  /* *btssi_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 957:  /* *btrdi */
    case 956:  /* *btrsi */
    case 947:  /* *btcdi */
    case 946:  /* *btsdi */
    case 945:  /* *btcsi */
    case 944:  /* *btssi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 922:  /* ix86_rotrti3_doubleword */
    case 921:  /* ix86_rotrdi3_doubleword */
    case 920:  /* ix86_rotlti3_doubleword */
    case 919:  /* ix86_rotldi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 7111:  /* vec_interleave_lowv4si */
    case 7109:  /* *avx512f_interleave_lowv16si */
    case 7107:  /* avx2_interleave_lowv8si */
    case 7105:  /* vec_interleave_highv4si */
    case 7103:  /* *avx512f_interleave_highv16si */
    case 7101:  /* avx2_interleave_highv8si */
    case 7099:  /* vec_interleave_lowv8bf */
    case 7097:  /* vec_interleave_lowv8hf */
    case 7095:  /* vec_interleave_lowv8hi */
    case 7093:  /* avx2_interleave_lowv16bf */
    case 7091:  /* avx2_interleave_lowv16hf */
    case 7089:  /* avx2_interleave_lowv16hi */
    case 7087:  /* *avx512bw_interleave_lowv32bf */
    case 7085:  /* *avx512bw_interleave_lowv32hf */
    case 7083:  /* *avx512bw_interleave_lowv32hi */
    case 7081:  /* vec_interleave_highv8bf */
    case 7079:  /* vec_interleave_highv8hf */
    case 7077:  /* vec_interleave_highv8hi */
    case 7075:  /* avx2_interleave_highv16bf */
    case 7073:  /* avx2_interleave_highv16hf */
    case 7071:  /* avx2_interleave_highv16hi */
    case 7069:  /* avx512bw_interleave_highv32bf */
    case 7067:  /* avx512bw_interleave_highv32hf */
    case 7065:  /* avx512bw_interleave_highv32hi */
    case 7063:  /* vec_interleave_lowv16qi */
    case 7061:  /* avx2_interleave_lowv32qi */
    case 7059:  /* avx512bw_interleave_lowv64qi */
    case 7057:  /* vec_interleave_highv16qi */
    case 7055:  /* avx2_interleave_highv32qi */
    case 7053:  /* avx512bw_interleave_highv64qi */
    case 6019:  /* vec_interleave_lowv2di */
    case 6017:  /* *avx512f_interleave_lowv8di */
    case 6015:  /* avx2_interleave_lowv4di */
    case 6013:  /* vec_interleave_highv2di */
    case 6011:  /* *avx512f_interleave_highv8di */
    case 6009:  /* avx2_interleave_highv4di */
    case 4421:  /* *vec_interleave_lowv2df */
    case 4418:  /* avx_unpcklpd256 */
    case 4414:  /* avx512f_unpcklpd512 */
    case 4411:  /* *vec_interleave_highv2df */
    case 4408:  /* avx_unpckhpd256 */
    case 4406:  /* *avx512f_unpckhpd512 */
    case 4275:  /* vec_interleave_lowv4sf */
    case 4272:  /* avx_unpcklps256 */
    case 4270:  /* *avx512f_unpcklps512 */
    case 4268:  /* vec_interleave_highv4sf */
    case 4266:  /* avx_unpckhps256 */
    case 4264:  /* *avx512f_unpckhps512 */
    case 4263:  /* sse_movlhps */
    case 4262:  /* sse_movhlps */
    case 1767:  /* mmx_punpckldq */
    case 1766:  /* mmx_punpckhdq */
    case 1765:  /* mmx_punpcklwd */
    case 1764:  /* mmx_punpckhwd */
    case 1763:  /* mmx_punpcklbw_low */
    case 1762:  /* mmx_punpcklbw */
    case 1761:  /* mmx_punpckhbw_low */
    case 1760:  /* mmx_punpckhbw */
    case 1585:  /* *vec_interleave_highv2sf */
    case 1584:  /* *vec_interleave_lowv2sf */
    case 933:  /* *bmi2_rorxsi3_1_zext */
    case 868:  /* *bmi2_ashrsi3_1_zext */
    case 867:  /* *bmi2_lshrsi3_1_zext */
    case 809:  /* *bmi2_ashlsi3_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 8298:  /* avx_vec_concatv8df */
    case 8297:  /* avx_vec_concatv16sf */
    case 8296:  /* avx_vec_concatv8di */
    case 8295:  /* avx_vec_concatv16si */
    case 8294:  /* avx_vec_concatv32bf */
    case 8293:  /* avx_vec_concatv32hf */
    case 8292:  /* avx_vec_concatv32hi */
    case 8291:  /* avx_vec_concatv64qi */
    case 8290:  /* avx_vec_concatv4df */
    case 8289:  /* avx_vec_concatv8sf */
    case 8288:  /* avx_vec_concatv4di */
    case 8287:  /* avx_vec_concatv8si */
    case 8286:  /* avx_vec_concatv16bf */
    case 8285:  /* avx_vec_concatv16hf */
    case 8284:  /* avx_vec_concatv16hi */
    case 8283:  /* avx_vec_concatv32qi */
    case 8281:  /* avx512bw_lshrvv32hi */
    case 8279:  /* avx512bw_ashlvv32hi */
    case 8277:  /* avx512vl_lshrvv16hi */
    case 8275:  /* avx512vl_ashlvv16hi */
    case 8273:  /* avx512vl_lshrvv8hi */
    case 8271:  /* avx512vl_ashlvv8hi */
    case 8269:  /* avx2_lshrvv2di */
    case 8267:  /* avx2_ashlvv2di */
    case 8265:  /* avx2_lshrvv4di */
    case 8263:  /* avx2_ashlvv4di */
    case 8261:  /* avx512f_lshrvv8di */
    case 8259:  /* avx512f_ashlvv8di */
    case 8257:  /* avx2_lshrvv4si */
    case 8255:  /* avx2_ashlvv4si */
    case 8253:  /* avx2_lshrvv8si */
    case 8251:  /* avx2_ashlvv8si */
    case 8249:  /* avx512f_lshrvv16si */
    case 8247:  /* avx512f_ashlvv16si */
    case 8245:  /* avx512bw_ashrvv32hi */
    case 8243:  /* avx512vl_ashrvv16hi */
    case 8241:  /* avx512vl_ashrvv8hi */
    case 8239:  /* avx512f_ashrvv8di */
    case 8237:  /* avx2_ashrvv4di */
    case 8235:  /* avx2_ashrvv2di */
    case 8233:  /* avx512f_ashrvv16si */
    case 8231:  /* avx2_ashrvv8si */
    case 8229:  /* avx2_ashrvv4si */
    case 7768:  /* xop_rotrv2di3 */
    case 7767:  /* xop_rotrv4si3 */
    case 7766:  /* xop_rotrv8hi3 */
    case 7765:  /* xop_rotrv16qi3 */
    case 7764:  /* xop_rotlv2di3 */
    case 7763:  /* xop_rotlv4si3 */
    case 7762:  /* xop_rotlv8hi3 */
    case 7761:  /* xop_rotlv16qi3 */
    case 7224:  /* *vec_concatv2di_0 */
    case 7223:  /* vec_concatv2di */
    case 7222:  /* *vec_concatv4si_0 */
    case 7221:  /* *vec_concatv8hi_0 */
    case 7220:  /* *vec_concatv16qi_0 */
    case 7217:  /* *vec_concatv4si */
    case 7216:  /* *vec_concatv8hi */
    case 7215:  /* *vec_concatv16qi */
    case 7214:  /* *vec_concatv2si */
    case 7213:  /* *vec_concatv2si_sse4_1 */
    case 6842:  /* xorv1ti3 */
    case 6841:  /* iorv1ti3 */
    case 6840:  /* andv1ti3 */
    case 6839:  /* *xorv8hi3 */
    case 6838:  /* *iorv8hi3 */
    case 6837:  /* *andv8hi3 */
    case 6836:  /* *xorv16hi3 */
    case 6835:  /* *iorv16hi3 */
    case 6834:  /* *andv16hi3 */
    case 6833:  /* *xorv32hi3 */
    case 6832:  /* *iorv32hi3 */
    case 6831:  /* *andv32hi3 */
    case 6830:  /* *xorv16qi3 */
    case 6829:  /* *iorv16qi3 */
    case 6828:  /* *andv16qi3 */
    case 6827:  /* *xorv32qi3 */
    case 6826:  /* *iorv32qi3 */
    case 6825:  /* *andv32qi3 */
    case 6824:  /* *xorv64qi3 */
    case 6823:  /* *iorv64qi3 */
    case 6822:  /* *andv64qi3 */
    case 6820:  /* *xorv2di3 */
    case 6818:  /* *iorv2di3 */
    case 6816:  /* *andv2di3 */
    case 6814:  /* *xorv4di3 */
    case 6812:  /* *iorv4di3 */
    case 6810:  /* *andv4di3 */
    case 6808:  /* *xorv8di3 */
    case 6806:  /* *iorv8di3 */
    case 6804:  /* *andv8di3 */
    case 6802:  /* *xorv4si3 */
    case 6800:  /* *iorv4si3 */
    case 6798:  /* *andv4si3 */
    case 6796:  /* *xorv8si3 */
    case 6794:  /* *iorv8si3 */
    case 6792:  /* *andv8si3 */
    case 6790:  /* *xorv16si3 */
    case 6788:  /* *iorv16si3 */
    case 6786:  /* *andv16si3 */
    case 6766:  /* *one_cmplv2di2 */
    case 6764:  /* *one_cmplv4di2 */
    case 6762:  /* *one_cmplv4si2 */
    case 6760:  /* *one_cmplv8si2 */
    case 6759:  /* *one_cmplv8hi2 */
    case 6758:  /* *one_cmplv16hi2 */
    case 6757:  /* *one_cmplv32hi2 */
    case 6756:  /* *one_cmplv16qi2 */
    case 6755:  /* *one_cmplv32qi2 */
    case 6754:  /* *one_cmplv64qi2 */
    case 6752:  /* *one_cmplv8di2 */
    case 6750:  /* *one_cmplv16si2 */
    case 6749:  /* *sse2_gtv4si3 */
    case 6748:  /* *sse2_gtv8hi3 */
    case 6747:  /* *sse2_gtv16qi3 */
    case 6746:  /* avx2_gtv4di3 */
    case 6745:  /* avx2_gtv8si3 */
    case 6744:  /* avx2_gtv16hi3 */
    case 6743:  /* avx2_gtv32qi3 */
    case 6742:  /* sse4_2_gtv2di3 */
    case 6741:  /* *sse2_eqv4si3 */
    case 6740:  /* *sse2_eqv8hi3 */
    case 6739:  /* *sse2_eqv16qi3 */
    case 6738:  /* *sse4_1_eqv2di3 */
    case 6715:  /* *avx2_eqv4di3 */
    case 6714:  /* *avx2_eqv8si3 */
    case 6713:  /* *avx2_eqv16hi3 */
    case 6712:  /* *avx2_eqv32qi3 */
    case 6711:  /* *uminv16qi3 */
    case 6710:  /* *umaxv16qi3 */
    case 6708:  /* *sse4_1_uminv4si3 */
    case 6706:  /* *sse4_1_umaxv4si3 */
    case 6704:  /* *sse4_1_uminv8hi3 */
    case 6702:  /* *sse4_1_umaxv8hi3 */
    case 6701:  /* *sminv8hi3 */
    case 6700:  /* *smaxv8hi3 */
    case 6698:  /* *sse4_1_sminv4si3 */
    case 6696:  /* *sse4_1_smaxv4si3 */
    case 6694:  /* *sse4_1_sminv16qi3 */
    case 6692:  /* *sse4_1_smaxv16qi3 */
    case 6690:  /* *uminv8hi3 */
    case 6688:  /* *umaxv8hi3 */
    case 6686:  /* *sminv8hi3 */
    case 6684:  /* *smaxv8hi3 */
    case 6682:  /* *uminv16hi3 */
    case 6680:  /* *umaxv16hi3 */
    case 6678:  /* *sminv16hi3 */
    case 6676:  /* *smaxv16hi3 */
    case 6674:  /* *uminv32hi3 */
    case 6672:  /* *umaxv32hi3 */
    case 6670:  /* *sminv32hi3 */
    case 6668:  /* *smaxv32hi3 */
    case 6666:  /* *uminv32qi3 */
    case 6664:  /* *umaxv32qi3 */
    case 6662:  /* *sminv32qi3 */
    case 6660:  /* *smaxv32qi3 */
    case 6658:  /* *uminv16qi3 */
    case 6656:  /* *umaxv16qi3 */
    case 6654:  /* *sminv16qi3 */
    case 6652:  /* *smaxv16qi3 */
    case 6650:  /* *uminv64qi3 */
    case 6648:  /* *umaxv64qi3 */
    case 6646:  /* *sminv64qi3 */
    case 6644:  /* *smaxv64qi3 */
    case 6642:  /* *avx512f_uminv2di3 */
    case 6640:  /* *avx512f_umaxv2di3 */
    case 6638:  /* *avx512f_sminv2di3 */
    case 6636:  /* *avx512f_smaxv2di3 */
    case 6634:  /* *avx512f_uminv4di3 */
    case 6632:  /* *avx512f_umaxv4di3 */
    case 6630:  /* *avx512f_sminv4di3 */
    case 6628:  /* *avx512f_smaxv4di3 */
    case 6626:  /* *avx512f_uminv8di3 */
    case 6624:  /* *avx512f_umaxv8di3 */
    case 6622:  /* *avx512f_sminv8di3 */
    case 6620:  /* *avx512f_smaxv8di3 */
    case 6618:  /* *avx512f_uminv4si3 */
    case 6616:  /* *avx512f_umaxv4si3 */
    case 6614:  /* *avx512f_sminv4si3 */
    case 6612:  /* *avx512f_smaxv4si3 */
    case 6610:  /* *avx512f_uminv8si3 */
    case 6608:  /* *avx512f_umaxv8si3 */
    case 6606:  /* *avx512f_sminv8si3 */
    case 6604:  /* *avx512f_smaxv8si3 */
    case 6602:  /* *avx512f_uminv16si3 */
    case 6600:  /* *avx512f_umaxv16si3 */
    case 6598:  /* *avx512f_sminv16si3 */
    case 6596:  /* *avx512f_smaxv16si3 */
    case 6595:  /* *avx2_uminv8si3 */
    case 6594:  /* *avx2_umaxv8si3 */
    case 6593:  /* *avx2_sminv8si3 */
    case 6592:  /* *avx2_smaxv8si3 */
    case 6591:  /* *avx2_uminv16hi3 */
    case 6590:  /* *avx2_umaxv16hi3 */
    case 6589:  /* *avx2_sminv16hi3 */
    case 6588:  /* *avx2_smaxv16hi3 */
    case 6587:  /* *avx2_uminv32qi3 */
    case 6586:  /* *avx2_umaxv32qi3 */
    case 6585:  /* *avx2_sminv32qi3 */
    case 6584:  /* *avx2_smaxv32qi3 */
    case 6582:  /* avx512vl_rorv2di */
    case 6580:  /* avx512vl_rolv2di */
    case 6578:  /* avx512vl_rorv4di */
    case 6576:  /* avx512vl_rolv4di */
    case 6574:  /* avx512f_rorv8di */
    case 6572:  /* avx512f_rolv8di */
    case 6570:  /* avx512vl_rorv4si */
    case 6568:  /* avx512vl_rolv4si */
    case 6566:  /* avx512vl_rorv8si */
    case 6564:  /* avx512vl_rolv8si */
    case 6562:  /* avx512f_rorv16si */
    case 6560:  /* avx512f_rolv16si */
    case 6558:  /* avx512vl_rorvv2di */
    case 6556:  /* avx512vl_rolvv2di */
    case 6554:  /* avx512vl_rorvv4di */
    case 6552:  /* avx512vl_rolvv4di */
    case 6550:  /* avx512f_rorvv8di */
    case 6548:  /* avx512f_rolvv8di */
    case 6546:  /* avx512vl_rorvv4si */
    case 6544:  /* avx512vl_rolvv4si */
    case 6542:  /* avx512vl_rorvv8si */
    case 6540:  /* avx512vl_rolvv8si */
    case 6538:  /* avx512f_rorvv16si */
    case 6536:  /* avx512f_rolvv16si */
    case 6535:  /* sse2_lshrv1ti3 */
    case 6534:  /* sse2_ashlv1ti3 */
    case 6533:  /* avx2_lshrv2ti3 */
    case 6532:  /* avx2_ashlv2ti3 */
    case 6531:  /* avx512bw_lshrv1ti3 */
    case 6530:  /* avx512bw_ashlv1ti3 */
    case 6529:  /* avx512bw_lshrv2ti3 */
    case 6528:  /* avx512bw_ashlv2ti3 */
    case 6527:  /* avx512bw_lshrv4ti3 */
    case 6526:  /* avx512bw_ashlv4ti3 */
    case 6525:  /* *rotrv1ti3_internal */
    case 6524:  /* *rotlv1ti3_internal */
    case 6523:  /* *ashrv1ti3_internal */
    case 6522:  /* *lshrv1ti3_internal */
    case 6521:  /* *ashlv1ti3_internal */
    case 6519:  /* lshrv8di3 */
    case 6517:  /* ashlv8di3 */
    case 6515:  /* lshrv16si3 */
    case 6513:  /* ashlv16si3 */
    case 6511:  /* lshrv32hi3 */
    case 6509:  /* ashlv32hi3 */
    case 6508:  /* lshrv2di3 */
    case 6507:  /* ashlv2di3 */
    case 6506:  /* lshrv4di3 */
    case 6505:  /* ashlv4di3 */
    case 6504:  /* lshrv4si3 */
    case 6503:  /* ashlv4si3 */
    case 6502:  /* lshrv8si3 */
    case 6501:  /* ashlv8si3 */
    case 6500:  /* lshrv8hi3 */
    case 6499:  /* ashlv8hi3 */
    case 6498:  /* lshrv16hi3 */
    case 6497:  /* ashlv16hi3 */
    case 6495:  /* *lshrv2di3 */
    case 6493:  /* *ashlv2di3 */
    case 6491:  /* *lshrv4di3 */
    case 6489:  /* *ashlv4di3 */
    case 6487:  /* *lshrv4si3 */
    case 6485:  /* *ashlv4si3 */
    case 6483:  /* *lshrv8si3 */
    case 6481:  /* *ashlv8si3 */
    case 6479:  /* *lshrv8hi3 */
    case 6477:  /* *ashlv8hi3 */
    case 6475:  /* *lshrv16hi3 */
    case 6473:  /* *ashlv16hi3 */
    case 6471:  /* *ashrv8di3 */
    case 6469:  /* *ashrv16si3 */
    case 6467:  /* *ashrv4di3 */
    case 6465:  /* *ashrv32hi3 */
    case 6464:  /* ashrv4si3 */
    case 6463:  /* ashrv8si3 */
    case 6462:  /* ashrv8hi3 */
    case 6461:  /* ashrv16hi3 */
    case 6459:  /* *ashrv2di3 */
    case 6457:  /* *ashrv4si3 */
    case 6455:  /* *ashrv8si3 */
    case 6453:  /* *ashrv8hi3 */
    case 6451:  /* *ashrv16hi3 */
    case 6449:  /* *sse4_1_mulv4si3 */
    case 6447:  /* *avx2_mulv8si3 */
    case 6445:  /* *avx512f_mulv16si3 */
    case 6443:  /* *avx512dq_mulv2di3 */
    case 6441:  /* *avx512dq_mulv4di3 */
    case 6439:  /* *avx512dq_mulv8di3 */
    case 6405:  /* *mulv8hi3 */
    case 6403:  /* *mulv16hi3 */
    case 6401:  /* *mulv32hi3 */
    case 6399:  /* *sse2_ussubv8hi3 */
    case 6397:  /* *sse2_sssubv8hi3 */
    case 6395:  /* *sse2_usaddv8hi3 */
    case 6393:  /* *sse2_ssaddv8hi3 */
    case 6391:  /* *avx2_ussubv16hi3 */
    case 6389:  /* *avx2_sssubv16hi3 */
    case 6387:  /* *avx2_usaddv16hi3 */
    case 6385:  /* *avx2_ssaddv16hi3 */
    case 6383:  /* *avx512bw_ussubv32hi3 */
    case 6381:  /* *avx512bw_sssubv32hi3 */
    case 6379:  /* *avx512bw_usaddv32hi3 */
    case 6377:  /* *avx512bw_ssaddv32hi3 */
    case 6375:  /* *sse2_ussubv16qi3 */
    case 6373:  /* *sse2_sssubv16qi3 */
    case 6371:  /* *sse2_usaddv16qi3 */
    case 6369:  /* *sse2_ssaddv16qi3 */
    case 6367:  /* *avx2_ussubv32qi3 */
    case 6365:  /* *avx2_sssubv32qi3 */
    case 6363:  /* *avx2_usaddv32qi3 */
    case 6361:  /* *avx2_ssaddv32qi3 */
    case 6359:  /* *avx512bw_ussubv64qi3 */
    case 6357:  /* *avx512bw_sssubv64qi3 */
    case 6355:  /* *avx512bw_usaddv64qi3 */
    case 6353:  /* *avx512bw_ssaddv64qi3 */
    case 6328:  /* *subv2di3 */
    case 6327:  /* *addv2di3 */
    case 6326:  /* *subv4di3 */
    case 6325:  /* *addv4di3 */
    case 6324:  /* *subv8di3 */
    case 6323:  /* *addv8di3 */
    case 6322:  /* *subv4si3 */
    case 6321:  /* *addv4si3 */
    case 6320:  /* *subv8si3 */
    case 6319:  /* *addv8si3 */
    case 6318:  /* *subv16si3 */
    case 6317:  /* *addv16si3 */
    case 6316:  /* *subv8hi3 */
    case 6315:  /* *addv8hi3 */
    case 6314:  /* *subv16hi3 */
    case 6313:  /* *addv16hi3 */
    case 6312:  /* *subv32hi3 */
    case 6311:  /* *addv32hi3 */
    case 6310:  /* *subv16qi3 */
    case 6309:  /* *addv16qi3 */
    case 6308:  /* *subv32qi3 */
    case 6307:  /* *addv32qi3 */
    case 6306:  /* *subv64qi3 */
    case 6305:  /* *addv64qi3 */
    case 6033:  /* vec_concatv2df */
    case 4307:  /* *vec_concatv4sf_0 */
    case 4306:  /* *vec_concatv4sf */
    case 4305:  /* *vec_concatv2sf_sse */
    case 4304:  /* *vec_concatv2sf_sse4_1 */
    case 3039:  /* *xortf3 */
    case 3038:  /* *iortf3 */
    case 3037:  /* *andtf3 */
    case 3036:  /* xordf3 */
    case 3035:  /* iordf3 */
    case 3034:  /* anddf3 */
    case 3033:  /* xorsf3 */
    case 3032:  /* iorsf3 */
    case 3031:  /* andsf3 */
    case 3026:  /* *bit_and_float_vector_all_ones */
    case 3025:  /* *bit_and_float_vector_all_ones */
    case 3024:  /* *bit_and_float_vector_all_ones */
    case 3023:  /* *bit_and_float_vector_all_ones */
    case 3022:  /* *bit_and_float_vector_all_ones */
    case 3021:  /* *bit_and_float_vector_all_ones */
    case 3020:  /* *bit_and_float_vector_all_ones */
    case 3019:  /* *bit_and_float_vector_all_ones */
    case 3018:  /* *bit_and_float_vector_all_ones */
    case 3016:  /* *xorv8df3 */
    case 3014:  /* *iorv8df3 */
    case 3012:  /* *andv8df3 */
    case 3010:  /* *xorv16sf3 */
    case 3008:  /* *iorv16sf3 */
    case 3006:  /* *andv16sf3 */
    case 3005:  /* *xorv32hf3 */
    case 3004:  /* *iorv32hf3 */
    case 3003:  /* *andv32hf3 */
    case 3001:  /* *xorv2df3 */
    case 2999:  /* *iorv2df3 */
    case 2997:  /* *andv2df3 */
    case 2995:  /* *xorv4df3 */
    case 2993:  /* *iorv4df3 */
    case 2991:  /* *andv4df3 */
    case 2989:  /* *xorv4sf3 */
    case 2987:  /* *iorv4sf3 */
    case 2985:  /* *andv4sf3 */
    case 2983:  /* *xorv8sf3 */
    case 2981:  /* *iorv8sf3 */
    case 2979:  /* *andv8sf3 */
    case 2978:  /* *xorv8hf3 */
    case 2977:  /* *iorv8hf3 */
    case 2976:  /* *andv8hf3 */
    case 2975:  /* *xorv16hf3 */
    case 2974:  /* *iorv16hf3 */
    case 2973:  /* *andv16hf3 */
    case 2388:  /* *sminv2df3 */
    case 2386:  /* *smaxv2df3 */
    case 2384:  /* *sminv4df3 */
    case 2382:  /* *smaxv4df3 */
    case 2378:  /* *sminv8df3 */
    case 2374:  /* *smaxv8df3 */
    case 2372:  /* *sminv4sf3 */
    case 2370:  /* *smaxv4sf3 */
    case 2368:  /* *sminv8sf3 */
    case 2366:  /* *smaxv8sf3 */
    case 2362:  /* *sminv16sf3 */
    case 2358:  /* *smaxv16sf3 */
    case 2356:  /* *sminv8hf3 */
    case 2354:  /* *smaxv8hf3 */
    case 2352:  /* *sminv16hf3 */
    case 2350:  /* *smaxv16hf3 */
    case 2346:  /* *sminv32hf3 */
    case 2342:  /* *smaxv32hf3 */
    case 2233:  /* sse2_divv2df3 */
    case 2231:  /* avx_divv4df3 */
    case 2227:  /* avx512f_divv8df3 */
    case 2225:  /* sse_divv4sf3 */
    case 2223:  /* avx_divv8sf3 */
    case 2219:  /* avx512f_divv16sf3 */
    case 2217:  /* avx512fp16_divv8hf3 */
    case 2215:  /* avx512fp16_divv16hf3 */
    case 2211:  /* avx512fp16_divv32hf3 */
    case 2177:  /* *mulv2df3 */
    case 2173:  /* *mulv4df3 */
    case 2169:  /* *mulv8df3 */
    case 2165:  /* *mulv4sf3 */
    case 2161:  /* *mulv8sf3 */
    case 2157:  /* *mulv16sf3 */
    case 2153:  /* *mulv8hf3 */
    case 2149:  /* *mulv16hf3 */
    case 2145:  /* *mulv32hf3 */
    case 2111:  /* *subv2df3 */
    case 2107:  /* *addv2df3 */
    case 2103:  /* *subv4df3 */
    case 2099:  /* *addv4df3 */
    case 2095:  /* *subv8df3 */
    case 2091:  /* *addv8df3 */
    case 2087:  /* *subv4sf3 */
    case 2083:  /* *addv4sf3 */
    case 2079:  /* *subv8sf3 */
    case 2075:  /* *addv8sf3 */
    case 2071:  /* *subv16sf3 */
    case 2067:  /* *addv16sf3 */
    case 2063:  /* *subv8hf3 */
    case 2059:  /* *addv8hf3 */
    case 2055:  /* *subv16hf3 */
    case 2051:  /* *addv16hf3 */
    case 2047:  /* *subv32hf3 */
    case 2043:  /* *addv32hf3 */
    case 1793:  /* *mmx_concatv2si */
    case 1746:  /* *mmx_xorv2si3 */
    case 1745:  /* *mmx_iorv2si3 */
    case 1744:  /* *mmx_andv2si3 */
    case 1743:  /* *mmx_xorv4hi3 */
    case 1742:  /* *mmx_iorv4hi3 */
    case 1741:  /* *mmx_andv4hi3 */
    case 1740:  /* *mmx_xorv8qi3 */
    case 1739:  /* *mmx_iorv8qi3 */
    case 1738:  /* *mmx_andv8qi3 */
    case 1703:  /* *gtv2hi3 */
    case 1702:  /* *gtv2qi3 */
    case 1701:  /* *gtv4qi3 */
    case 1700:  /* mmx_gtv2si3 */
    case 1699:  /* mmx_gtv4hi3 */
    case 1698:  /* mmx_gtv8qi3 */
    case 1697:  /* *eqv2hi3 */
    case 1696:  /* *eqv2qi3 */
    case 1695:  /* *eqv4qi3 */
    case 1694:  /* *mmx_eqv2si3 */
    case 1693:  /* *mmx_eqv4hi3 */
    case 1692:  /* *mmx_eqv8qi3 */
    case 1688:  /* ashrv2hi3 */
    case 1687:  /* lshrv2hi3 */
    case 1686:  /* ashlv2hi3 */
    case 1685:  /* mmx_lshrv1si3 */
    case 1684:  /* mmx_ashlv1si3 */
    case 1683:  /* mmx_lshrv1di3 */
    case 1682:  /* mmx_ashlv1di3 */
    case 1681:  /* mmx_lshrv2si3 */
    case 1680:  /* mmx_ashlv2si3 */
    case 1679:  /* mmx_lshrv4hi3 */
    case 1678:  /* mmx_ashlv4hi3 */
    case 1677:  /* mmx_ashrv2si3 */
    case 1676:  /* mmx_ashrv4hi3 */
    case 1669:  /* uminv2hi3 */
    case 1668:  /* umaxv2hi3 */
    case 1667:  /* uminv2qi3 */
    case 1666:  /* umaxv2qi3 */
    case 1665:  /* uminv4qi3 */
    case 1664:  /* umaxv4qi3 */
    case 1663:  /* *mmx_uminv8qi3 */
    case 1662:  /* *mmx_umaxv8qi3 */
    case 1661:  /* uminv2si3 */
    case 1660:  /* umaxv2si3 */
    case 1659:  /* uminv4hi3 */
    case 1658:  /* umaxv4hi3 */
    case 1657:  /* sminv2hi3 */
    case 1656:  /* smaxv2hi3 */
    case 1655:  /* sminv2qi3 */
    case 1654:  /* smaxv2qi3 */
    case 1653:  /* sminv4qi3 */
    case 1652:  /* smaxv4qi3 */
    case 1651:  /* *mmx_sminv4hi3 */
    case 1650:  /* *mmx_smaxv4hi3 */
    case 1649:  /* sminv2si3 */
    case 1648:  /* smaxv2si3 */
    case 1647:  /* sminv8qi3 */
    case 1646:  /* smaxv8qi3 */
    case 1638:  /* mulv2hi3 */
    case 1637:  /* *mmx_mulv4hi3 */
    case 1636:  /* *ussubv2hi3 */
    case 1635:  /* *sssubv2hi3 */
    case 1634:  /* *usaddv2hi3 */
    case 1633:  /* *ssaddv2hi3 */
    case 1632:  /* *ussubv2qi3 */
    case 1631:  /* *sssubv2qi3 */
    case 1630:  /* *usaddv2qi3 */
    case 1629:  /* *ssaddv2qi3 */
    case 1628:  /* *ussubv4qi3 */
    case 1627:  /* *sssubv4qi3 */
    case 1626:  /* *usaddv4qi3 */
    case 1625:  /* *ssaddv4qi3 */
    case 1624:  /* *mmx_ussubv4hi3 */
    case 1623:  /* *mmx_sssubv4hi3 */
    case 1622:  /* *mmx_usaddv4hi3 */
    case 1621:  /* *mmx_ssaddv4hi3 */
    case 1620:  /* *mmx_ussubv8qi3 */
    case 1619:  /* *mmx_sssubv8qi3 */
    case 1618:  /* *mmx_usaddv8qi3 */
    case 1617:  /* *mmx_ssaddv8qi3 */
    case 1614:  /* subv2hi3 */
    case 1613:  /* addv2hi3 */
    case 1612:  /* subv4qi3 */
    case 1611:  /* addv4qi3 */
    case 1610:  /* *mmx_subv1di3 */
    case 1609:  /* *mmx_addv1di3 */
    case 1608:  /* *mmx_subv2si3 */
    case 1607:  /* *mmx_addv2si3 */
    case 1606:  /* *mmx_subv4hi3 */
    case 1605:  /* *mmx_addv4hi3 */
    case 1604:  /* *mmx_subv8qi3 */
    case 1603:  /* *mmx_addv8qi3 */
    case 1601:  /* divv2hf3 */
    case 1600:  /* mulv2hf3 */
    case 1599:  /* subv2hf3 */
    case 1598:  /* addv2hf3 */
    case 1597:  /* divv4hf3 */
    case 1596:  /* mulv4hf3 */
    case 1595:  /* subv4hf3 */
    case 1594:  /* addv4hf3 */
    case 1589:  /* *mmx_concatv2sf */
    case 1570:  /* xorv2sf3 */
    case 1569:  /* iorv2sf3 */
    case 1568:  /* andv2sf3 */
    case 1562:  /* mmx_gev2sf3 */
    case 1561:  /* mmx_gtv2sf3 */
    case 1560:  /* *mmx_eqv2sf3 */
    case 1545:  /* *mmx_sminv2sf3 */
    case 1544:  /* *mmx_smaxv2sf3 */
    case 1543:  /* *mmx_mulv2sf3 */
    case 1542:  /* *mmx_subv2sf3 */
    case 1541:  /* *mmx_addv2sf3 */
    case 1332:  /* sminhf3 */
    case 1331:  /* smaxhf3 */
    case 1330:  /* smindf3 */
    case 1329:  /* smaxdf3 */
    case 1328:  /* sminsf3 */
    case 1327:  /* smaxsf3 */
    case 1192:  /* *divhf */
    case 1191:  /* *mulhf */
    case 1190:  /* *subhf */
    case 1189:  /* *addhf */
    case 928:  /* *bmi2_rorxdi3_1 */
    case 927:  /* *bmi2_rorxsi3_1 */
    case 861:  /* *bmi2_ashrdi3_1 */
    case 860:  /* *bmi2_lshrdi3_1 */
    case 859:  /* *bmi2_ashrsi3_1 */
    case 858:  /* *bmi2_lshrsi3_1 */
    case 806:  /* *bmi2_ashldi3_1 */
    case 805:  /* *bmi2_ashlsi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 854:  /* *x86_shrd_2 */
    case 850:  /* *x86_64_shrd_2 */
    case 800:  /* *x86_shld_2 */
    case 796:  /* *x86_64_shld_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 853:  /* *x86_shrd_shld_1_nozext */
    case 849:  /* *x86_64_shrd_shld_1_nozext */
    case 799:  /* *x86_shld_shrd_1_nozext */
    case 795:  /* *x86_64_shld_shrd_1_nozext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 852:  /* x86_shrd_1 */
    case 848:  /* x86_64_shrd_1 */
    case 798:  /* x86_shld_1 */
    case 794:  /* x86_64_shld_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 851:  /* x86_shrd */
    case 847:  /* x86_64_shrd */
    case 797:  /* x86_shld */
    case 793:  /* x86_64_shld */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 918:  /* *rotrdi3_mask_1 */
    case 917:  /* *rotldi3_mask_1 */
    case 916:  /* *rotrsi3_mask_1 */
    case 915:  /* *rotlsi3_mask_1 */
    case 914:  /* *rotrhi3_mask_1 */
    case 913:  /* *rotlhi3_mask_1 */
    case 912:  /* *rotrqi3_mask_1 */
    case 911:  /* *rotlqi3_mask_1 */
    case 842:  /* *ashrti3_doubleword_mask_1 */
    case 841:  /* *lshrti3_doubleword_mask_1 */
    case 840:  /* *ashrdi3_doubleword_mask_1 */
    case 839:  /* *lshrdi3_doubleword_mask_1 */
    case 834:  /* *ashrdi3_mask_1 */
    case 833:  /* *lshrdi3_mask_1 */
    case 832:  /* *ashrsi3_mask_1 */
    case 831:  /* *lshrsi3_mask_1 */
    case 804:  /* *ashldi3_mask_1 */
    case 803:  /* *ashlsi3_mask_1 */
    case 790:  /* *ashlti3_doubleword_mask_1 */
    case 789:  /* *ashldi3_doubleword_mask_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 910:  /* *rotrdi3_mask */
    case 909:  /* *rotldi3_mask */
    case 908:  /* *rotrsi3_mask */
    case 907:  /* *rotlsi3_mask */
    case 906:  /* *rotrhi3_mask */
    case 905:  /* *rotlhi3_mask */
    case 904:  /* *rotrqi3_mask */
    case 903:  /* *rotlqi3_mask */
    case 838:  /* *ashrti3_doubleword_mask */
    case 837:  /* *lshrti3_doubleword_mask */
    case 836:  /* *ashrdi3_doubleword_mask */
    case 835:  /* *lshrdi3_doubleword_mask */
    case 830:  /* *ashrdi3_mask */
    case 829:  /* *lshrdi3_mask */
    case 828:  /* *ashrsi3_mask */
    case 827:  /* *lshrsi3_mask */
    case 802:  /* *ashldi3_mask */
    case 801:  /* *ashlsi3_mask */
    case 788:  /* *ashlti3_doubleword_mask */
    case 787:  /* *ashldi3_doubleword_mask */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      break;

    case 2042:  /* *nabsv2df2 */
    case 2041:  /* *nabsv4df2 */
    case 2040:  /* *nabsv8df2 */
    case 2039:  /* *nabsv4sf2 */
    case 2038:  /* *nabsv8sf2 */
    case 2037:  /* *nabsv16sf2 */
    case 1540:  /* *mmx_nabsv2sf2 */
    case 766:  /* *nabsdf2_1 */
    case 765:  /* *nabssf2_1 */
    case 752:  /* *nabstf2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 737:  /* *negvdi3 */
    case 736:  /* *negvsi3 */
    case 735:  /* *negvhi3 */
    case 734:  /* *negvqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 733:  /* *negqi_extdi_2 */
    case 732:  /* *negqi_extsi_2 */
    case 731:  /* *negqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      break;

    case 730:  /* *negdi_ccc_2 */
    case 729:  /* *negsi_ccc_2 */
    case 728:  /* *neghi_ccc_2 */
    case 727:  /* *negqi_ccc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      break;

    case 726:  /* *negdi_ccc_1 */
    case 725:  /* *negsi_ccc_1 */
    case 724:  /* *neghi_ccc_1 */
    case 723:  /* *negqi_ccc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 786:  /* *one_cmplsi2_2_zext */
    case 722:  /* *negsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 785:  /* *one_cmpldi2_2 */
    case 784:  /* *one_cmplsi2_2 */
    case 783:  /* *one_cmplhi2_2 */
    case 782:  /* *one_cmplqi2_2 */
    case 721:  /* *negdi_2 */
    case 720:  /* *negsi_2 */
    case 719:  /* *neghi_2 */
    case 718:  /* *negqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 864:  /* *highpartdisi2 */
    case 717:  /* *neghi_1_slp */
    case 716:  /* *negqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 1995:  /* *knotsi_1_zext */
    case 1152:  /* *popcounthi2_2 */
    case 1151:  /* *popcounthi2_1 */
    case 1149:  /* *popcountsi2_zext_2 */
    case 1076:  /* *clzsi2_lzcnt_zext_2 */
    case 1058:  /* *ctzsidi2_uext */
    case 1057:  /* *ctzsidi2_sext */
    case 749:  /* *nabsdi2_1 */
    case 748:  /* *nabssi2_1 */
    case 747:  /* *nabshi2_1 */
    case 746:  /* *nabsqi2_1 */
    case 741:  /* *nabsti2_doubleword */
    case 740:  /* *nabsdi2_doubleword */
    case 715:  /* *negsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 9025:  /* *vcvtneps2bf16_v4sf */
    case 8185:  /* vec_set_hi_v32qi */
    case 8183:  /* vec_set_hi_v16bf */
    case 8182:  /* vec_set_hi_v16hf */
    case 8181:  /* vec_set_hi_v16hi */
    case 8176:  /* vec_set_hi_v8sf */
    case 8174:  /* vec_set_hi_v8si */
    case 8168:  /* vec_set_hi_v4df */
    case 8166:  /* vec_set_hi_v4di */
    case 7145:  /* vec_set_hi_v8di */
    case 7143:  /* vec_set_hi_v8df */
    case 7137:  /* vec_set_hi_v16si */
    case 7135:  /* vec_set_hi_v16sf */
    case 6779:  /* *andnotv2di3 */
    case 6778:  /* *andnotv4di3 */
    case 6777:  /* *andnotv4si3 */
    case 6776:  /* *andnotv8si3 */
    case 6775:  /* *andnotv8hi3 */
    case 6774:  /* *andnotv16hi3 */
    case 6773:  /* *andnotv32hi3 */
    case 6772:  /* *andnotv16qi3 */
    case 6771:  /* *andnotv32qi3 */
    case 6770:  /* *andnotv64qi3 */
    case 6769:  /* *andnotv8di3 */
    case 6768:  /* *andnotv16si3 */
    case 6264:  /* avx512vl_us_truncatev2div2si2 */
    case 6263:  /* avx512vl_truncatev2div2si2 */
    case 6262:  /* avx512vl_ss_truncatev2div2si2 */
    case 6206:  /* avx512vl_us_truncatev4siv4hi2 */
    case 6205:  /* avx512vl_truncatev4siv4hi2 */
    case 6204:  /* avx512vl_ss_truncatev4siv4hi2 */
    case 6203:  /* avx512vl_us_truncatev2div2hi2 */
    case 6202:  /* avx512vl_truncatev2div2hi2 */
    case 6201:  /* avx512vl_ss_truncatev2div2hi2 */
    case 6200:  /* avx512vl_us_truncatev4div4hi2 */
    case 6199:  /* avx512vl_truncatev4div4hi2 */
    case 6198:  /* avx512vl_ss_truncatev4div4hi2 */
    case 6106:  /* avx512vl_us_truncatev8hiv8qi2 */
    case 6105:  /* avx512vl_truncatev8hiv8qi2 */
    case 6104:  /* avx512vl_ss_truncatev8hiv8qi2 */
    case 6103:  /* avx512vl_us_truncatev4siv4qi2 */
    case 6102:  /* avx512vl_truncatev4siv4qi2 */
    case 6101:  /* avx512vl_ss_truncatev4siv4qi2 */
    case 6100:  /* avx512vl_us_truncatev8siv8qi2 */
    case 6099:  /* avx512vl_truncatev8siv8qi2 */
    case 6098:  /* avx512vl_ss_truncatev8siv8qi2 */
    case 6097:  /* avx512vl_us_truncatev2div2qi2 */
    case 6096:  /* avx512vl_truncatev2div2qi2 */
    case 6095:  /* avx512vl_ss_truncatev2div2qi2 */
    case 6094:  /* avx512vl_us_truncatev4div4qi2 */
    case 6093:  /* avx512vl_truncatev4div4qi2 */
    case 6092:  /* avx512vl_ss_truncatev4div4qi2 */
    case 6027:  /* sse2_loadhpd */
    case 4294:  /* sse_loadhps */
    case 4222:  /* *sse2_cvtpd2ps */
    case 4100:  /* *avx512dq_floatunsv2div2sf2 */
    case 4099:  /* *avx512dq_floatv2div2sf2 */
    case 3906:  /* *avx512fp16_vcvtpd2ph_v2df */
    case 3901:  /* *avx512fp16_vcvtps2ph_v4sf */
    case 3900:  /* *avx512fp16_vcvtpd2ph_v4df */
    case 3755:  /* *avx512fp16_vcvtuqq2ph_v2di */
    case 3754:  /* *avx512fp16_vcvtqq2ph_v2di */
    case 3745:  /* *avx512fp16_vcvtuqq2ph_v4di */
    case 3744:  /* *avx512fp16_vcvtqq2ph_v4di */
    case 3743:  /* *avx512fp16_vcvtudq2ph_v4si */
    case 3742:  /* *avx512fp16_vcvtdq2ph_v4si */
    case 3030:  /* *andnotv1ti3 */
    case 3029:  /* *andnottf3 */
    case 3028:  /* *andnotdf3 */
    case 3027:  /* *andnotsf3 */
    case 2971:  /* avx512f_andnotv8df3 */
    case 2969:  /* avx512f_andnotv16sf3 */
    case 2968:  /* avx512fp16_andnotv32hf3 */
    case 2966:  /* sse2_andnotv2df3 */
    case 2964:  /* avx_andnotv4df3 */
    case 2962:  /* sse_andnotv4sf3 */
    case 2960:  /* avx_andnotv8sf3 */
    case 2959:  /* avx512fp16_andnotv8hf3 */
    case 2958:  /* avx512fp16_andnotv16hf3 */
    case 2296:  /* sse2_vmsqrtv2df2 */
    case 2292:  /* sse_vmsqrtv4sf2 */
    case 2288:  /* avx512fp16_vmsqrtv8hf2 */
    case 1956:  /* *sse2_movq128_v2df */
    case 1955:  /* *sse2_movq128_v2di */
    case 1734:  /* mmx_andnotv2si3 */
    case 1733:  /* mmx_andnotv4hi3 */
    case 1732:  /* mmx_andnotv8qi3 */
    case 1567:  /* *mmx_andnotv2sf3 */
    case 1017:  /* *sibcall_value */
    case 1016:  /* *sibcall_value */
    case 1013:  /* *call_value */
    case 1012:  /* *call_value */
    case 708:  /* *concatditi3_7 */
    case 707:  /* *concatditi3_7 */
    case 706:  /* *concatditi3_7 */
    case 705:  /* *concatsidi3_7 */
    case 704:  /* *concatsidi3_7 */
    case 703:  /* *concatsidi3_7 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 702:  /* *concatditi3_6 */
    case 701:  /* *concatditi3_6 */
    case 700:  /* *concatditi3_6 */
    case 699:  /* *concatsidi3_6 */
    case 698:  /* *concatsidi3_6 */
    case 697:  /* *concatsidi3_6 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 690:  /* *concatditi3_4 */
    case 689:  /* *concatditi3_4 */
    case 688:  /* *concatditi3_4 */
    case 687:  /* *concatsidi3_4 */
    case 686:  /* *concatsidi3_4 */
    case 685:  /* *concatsidi3_4 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 684:  /* *concatditi3_3 */
    case 683:  /* *concatditi3_3 */
    case 682:  /* *concatditi3_3 */
    case 681:  /* *concatsidi3_3 */
    case 680:  /* *concatsidi3_3 */
    case 679:  /* *concatsidi3_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 678:  /* *concatditi3_2 */
    case 677:  /* *concatditi3_2 */
    case 676:  /* *concatditi3_2 */
    case 675:  /* *concatsidi3_2 */
    case 674:  /* *concatsidi3_2 */
    case 673:  /* *concatsidi3_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 1));
      break;

    case 672:  /* *concatditi3_1 */
    case 671:  /* *concatditi3_1 */
    case 670:  /* *concatditi3_1 */
    case 669:  /* *concatsidi3_1 */
    case 668:  /* *concatsidi3_1 */
    case 667:  /* *concatsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 637:  /* *xorsi_2_zext_imm */
    case 636:  /* *iorsi_2_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 614:  /* *xor2andn */
    case 613:  /* *xor2andn */
    case 612:  /* *xor2andn */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 596:  /* *andn_di_ccno */
    case 595:  /* *andn_si_ccno */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 1986:  /* kandndi */
    case 1985:  /* kandnsi */
    case 1984:  /* kandnhi */
    case 1983:  /* kandnqi */
    case 1737:  /* *andnotv2hi3 */
    case 1736:  /* *andnotv2qi3 */
    case 1735:  /* *andnotv4qi3 */
    case 1168:  /* *tls_local_dynamic_base_64_di */
    case 1167:  /* *tls_local_dynamic_base_64_si */
    case 1019:  /* *sibcall_value_memory */
    case 1018:  /* *sibcall_value_memory */
    case 618:  /* *xorsi_1_zext_imm */
    case 617:  /* *iorsi_1_zext_imm */
    case 594:  /* *andnhi_1 */
    case 593:  /* *andnqi_1 */
    case 592:  /* *andndi_1 */
    case 591:  /* *andnsi_1 */
    case 590:  /* *andnti3_doubleword */
    case 589:  /* *andndi3_doubleword */
    case 588:  /* *andnti3_doubleword_bmi */
    case 587:  /* *andndi3_doubleword_bmi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 666:  /* *xorqi_extdi_1_cc */
    case 665:  /* *xorqi_extsi_1_cc */
    case 664:  /* *xorqi_exthi_1_cc */
    case 583:  /* *andqi_extdi_1_cc */
    case 582:  /* *andqi_extsi_1_cc */
    case 581:  /* *andqi_exthi_1_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 558:  /* *testti_not_doubleword */
    case 557:  /* *testdi_not_doubleword */
    case 556:  /* *testdi_not */
    case 555:  /* *testsi_not */
    case 554:  /* *testhi_not */
    case 553:  /* *testqi_not */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 552:  /* *testqi_ext_3 */
    case 551:  /* *testqi_ext_3 */
    case 550:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 549:  /* *testqi_extdi_2 */
    case 548:  /* *testqi_extsi_2 */
    case 547:  /* *testqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      break;

    case 546:  /* *testqi_extdi_1 */
    case 545:  /* *testqi_extsi_1 */
    case 544:  /* *testqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 538:  /* udivmodhiqi3 */
    case 537:  /* divmodhiqi3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 535:  /* *udivmodsi4_noext_zext_2 */
    case 534:  /* *divmodsi4_noext_zext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 533:  /* *udivmodsi4_noext_zext_1 */
    case 532:  /* *divmodsi4_noext_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 531:  /* *udivmoddi4_noext */
    case 530:  /* *divmoddi4_noext */
    case 529:  /* *udivmodsi4_noext */
    case 528:  /* *divmodsi4_noext */
    case 527:  /* *udivmodhi4_noext */
    case 526:  /* *divmodhi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 525:  /* *udivmodsi4_pow2_zext_2 */
    case 524:  /* *udivmodsi4_zext_2 */
    case 523:  /* *divmodsi4_zext_2 */
    case 511:  /* udivmodsi4_zext_2 */
    case 510:  /* divmodsi4_zext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 522:  /* *udivmodsi4_pow2_zext_1 */
    case 521:  /* *udivmodsi4_zext_1 */
    case 520:  /* *divmodsi4_zext_1 */
    case 509:  /* udivmodsi4_zext_1 */
    case 508:  /* divmodsi4_zext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 536:  /* *divmodsi4_const */
    case 519:  /* *udivmoddi4_pow2 */
    case 518:  /* *udivmodsi4_pow2 */
    case 517:  /* *udivmoddi4 */
    case 516:  /* *udivmodsi4 */
    case 515:  /* *udivmodhi4 */
    case 514:  /* *divmoddi4 */
    case 513:  /* *divmodsi4 */
    case 512:  /* *divmodhi4 */
    case 507:  /* udivmoddi4_1 */
    case 506:  /* udivmodsi4_1 */
    case 505:  /* divmoddi4_1 */
    case 504:  /* divmodsi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 501:  /* *umulsi3_highpart_zext */
    case 500:  /* *smulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 503:  /* *umulsi3_highpart_1 */
    case 502:  /* *smulsi3_highpart_1 */
    case 499:  /* *umuldi3_highpart_1 */
    case 498:  /* *smuldi3_highpart_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 497:  /* *umulsi3_highpart_zext */
    case 496:  /* *smulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 495:  /* umuldi3_highpart */
    case 494:  /* smuldi3_highpart */
    case 493:  /* umulsi3_highpart */
    case 492:  /* smulsi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 491:  /* *umulqihi3_1 */
    case 490:  /* *mulqihi3_1 */
    case 489:  /* *mulditi3_1 */
    case 488:  /* *mulsidi3_1 */
    case 487:  /* *umulditi3_1 */
    case 486:  /* *umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 485:  /* *bmi2_umulditi3_1 */
    case 484:  /* *bmi2_umulsidi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 481:  /* *umulvdi4 */
    case 480:  /* *umulvsi4 */
    case 479:  /* *umulvhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 459:  /* *subdi3_eq_1 */
    case 458:  /* *subsi3_eq_1 */
    case 457:  /* *subhi3_eq_1 */
    case 456:  /* *subqi3_eq_1 */
    case 455:  /* *subdi3_ne */
    case 454:  /* *subsi3_ne */
    case 453:  /* *subhi3_ne */
    case 452:  /* *subqi3_ne */
    case 451:  /* *subdi3_eq */
    case 450:  /* *subsi3_eq */
    case 449:  /* *subhi3_eq */
    case 448:  /* *subqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      break;

    case 439:  /* *adddi3_ne */
    case 438:  /* *addsi3_ne */
    case 437:  /* *addhi3_ne */
    case 436:  /* *addqi3_ne */
    case 435:  /* *adddi3_eq */
    case 434:  /* *addsi3_eq */
    case 433:  /* *addhi3_eq */
    case 432:  /* *addqi3_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 429:  /* *addsi3_zext_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 428:  /* *adddi3_cc_overflow_2 */
    case 427:  /* *addsi3_cc_overflow_2 */
    case 426:  /* *addhi3_cc_overflow_2 */
    case 425:  /* *addqi3_cc_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 424:  /* *adddi3_cconly_overflow_2 */
    case 423:  /* *addsi3_cconly_overflow_2 */
    case 422:  /* *addhi3_cconly_overflow_2 */
    case 421:  /* *addqi3_cconly_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 2;
      break;

    case 420:  /* *addsi3_zext_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 431:  /* *addti3_doubleword_cc_overflow_1 */
    case 430:  /* *adddi3_doubleword_cc_overflow_1 */
    case 419:  /* *adddi3_cc_overflow_1 */
    case 418:  /* *addsi3_cc_overflow_1 */
    case 417:  /* *addhi3_cc_overflow_1 */
    case 416:  /* *addqi3_cc_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 415:  /* *adddi3_cconly_overflow_1 */
    case 414:  /* *addsi3_cconly_overflow_1 */
    case 413:  /* *addhi3_cconly_overflow_1 */
    case 412:  /* *addqi3_cconly_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 7817:  /* avx_vzeroupper_callee_abi */
    case 1822:  /* *mmx_femms */
    case 1821:  /* *mmx_emms */
    case 1505:  /* serialize */
    case 1504:  /* speculation_barrier */
    case 1495:  /* testui */
    case 1494:  /* stui */
    case 1493:  /* clui */
    case 1488:  /* xresldtrk */
    case 1487:  /* xsusldtrk */
    case 1482:  /* wbnoinvd */
    case 1481:  /* wbinvd */
    case 1469:  /* xtest_1 */
    case 1467:  /* xend */
    case 1465:  /* nop_endbr */
    case 1463:  /* setssbsy */
    case 1457:  /* saveprevssp */
    case 1427:  /* fnclex */
    case 1376:  /* ud2 */
    case 1375:  /* trap */
    case 1273:  /* cld */
    case 1042:  /* *leave_rex64 */
    case 1041:  /* *leave */
    case 1040:  /* eh_return_internal */
    case 1032:  /* nop */
    case 1028:  /* simple_return_internal_long */
    case 1027:  /* interrupt_return */
    case 1026:  /* simple_return_internal */
    case 1023:  /* blockage */
    case 411:  /* *setcc_qi_addqi3_cconly_overflow_1_ccc */
    case 410:  /* *setcc_qi_addqi3_cconly_overflow_1_cc */
      break;

    case 409:  /* subborrowdi */
    case 408:  /* subborrowsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 407:  /* subdi3_carry_ccgz */
    case 406:  /* subsi3_carry_ccgz */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      break;

    case 405:  /* *subdi3_carry_ccc_1 */
    case 404:  /* *subsi3_carry_ccc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 403:  /* subdi3_carry_ccc */
    case 402:  /* subsi3_carry_ccc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      break;

    case 399:  /* *subsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      break;

    case 390:  /* subdi3_carry */
    case 389:  /* subsi3_carry */
    case 388:  /* subhi3_carry */
    case 387:  /* subqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 386:  /* *addcarrydi_1 */
    case 385:  /* *addcarrysi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[4] = 3;
      break;

    case 384:  /* addcarrydi */
    case 383:  /* addcarrysi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[4] = 2;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 382:  /* *addsi3_carry_zext_0r */
    case 381:  /* *addsi3_carry_zext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 380:  /* *addsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 379:  /* *adddi3_carry_0r */
    case 378:  /* *addsi3_carry_0r */
    case 377:  /* *addhi3_carry_0r */
    case 376:  /* *addqi3_carry_0r */
    case 375:  /* *adddi3_carry_0 */
    case 374:  /* *addsi3_carry_0 */
    case 373:  /* *addhi3_carry_0 */
    case 372:  /* *addqi3_carry_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 371:  /* adddi3_carry */
    case 370:  /* addsi3_carry */
    case 369:  /* addhi3_carry */
    case 368:  /* addqi3_carry */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 367:  /* *subsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 366:  /* *dec_cmovdi */
    case 365:  /* *dec_cmovsi */
    case 364:  /* *dec_cmovhi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0);
      recog_data.dup_num[0] = 2;
      break;

    case 363:  /* *subdi_3 */
    case 362:  /* *subsi_3 */
    case 361:  /* *subhi_3 */
    case 360:  /* *subqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 359:  /* *subvdi4_overflow_2 */
    case 358:  /* *subvsi4_overflow_2 */
    case 357:  /* *subvhi4_overflow_2 */
    case 356:  /* *subvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      break;

    case 355:  /* *subvdi4_overflow_1 */
    case 354:  /* *subvsi4_overflow_1 */
    case 353:  /* *subvhi4_overflow_1 */
    case 352:  /* *subvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 5;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1), 0);
      recog_data.dup_num[2] = 3;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0);
      recog_data.dup_num[4] = 1;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1), 0);
      recog_data.dup_num[5] = 3;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 336:  /* *subqi_extdi_0 */
    case 335:  /* *subqi_extsi_0 */
    case 334:  /* *subqi_exthi_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      break;

    case 467:  /* *subdi3_ne_0 */
    case 466:  /* *subsi3_ne_0 */
    case 465:  /* *subhi3_ne_0 */
    case 464:  /* *subqi3_ne_0 */
    case 463:  /* *subdi3_eq_0 */
    case 462:  /* *subsi3_eq_0 */
    case 461:  /* *subhi3_eq_0 */
    case 460:  /* *subqi3_eq_0 */
    case 321:  /* *subti3_doubleword_zext */
    case 320:  /* *subdi3_doubleword_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 5636:  /* *avx512vl_vpternlogv2df_2 */
    case 5635:  /* *avx512vl_vpternlogv2df_2 */
    case 5634:  /* *avx512vl_vpternlogv2df_2 */
    case 5633:  /* *avx512vl_vpternlogv2df_2 */
    case 5632:  /* *avx512vl_vpternlogv2df_2 */
    case 5631:  /* *avx512vl_vpternlogv2df_2 */
    case 5630:  /* *avx512vl_vpternlogv2df_2 */
    case 5629:  /* *avx512vl_vpternlogv2df_2 */
    case 5628:  /* *avx512vl_vpternlogv2df_2 */
    case 5627:  /* *avx512vl_vpternlogv2df_2 */
    case 5626:  /* *avx512vl_vpternlogv2df_2 */
    case 5625:  /* *avx512vl_vpternlogv2df_2 */
    case 5624:  /* *avx512vl_vpternlogv2df_2 */
    case 5623:  /* *avx512vl_vpternlogv2df_2 */
    case 5622:  /* *avx512vl_vpternlogv2df_2 */
    case 5621:  /* *avx512vl_vpternlogv2df_2 */
    case 5620:  /* *avx512vl_vpternlogv2df_2 */
    case 5619:  /* *avx512vl_vpternlogv2df_2 */
    case 5618:  /* *avx512vl_vpternlogv2df_2 */
    case 5617:  /* *avx512vl_vpternlogv2df_2 */
    case 5616:  /* *avx512vl_vpternlogv2df_2 */
    case 5615:  /* *avx512vl_vpternlogv2df_2 */
    case 5614:  /* *avx512vl_vpternlogv2df_2 */
    case 5613:  /* *avx512vl_vpternlogv2df_2 */
    case 5612:  /* *avx512vl_vpternlogv2df_2 */
    case 5611:  /* *avx512vl_vpternlogv2df_2 */
    case 5610:  /* *avx512vl_vpternlogv2df_2 */
    case 5609:  /* *avx512vl_vpternlogv4df_2 */
    case 5608:  /* *avx512vl_vpternlogv4df_2 */
    case 5607:  /* *avx512vl_vpternlogv4df_2 */
    case 5606:  /* *avx512vl_vpternlogv4df_2 */
    case 5605:  /* *avx512vl_vpternlogv4df_2 */
    case 5604:  /* *avx512vl_vpternlogv4df_2 */
    case 5603:  /* *avx512vl_vpternlogv4df_2 */
    case 5602:  /* *avx512vl_vpternlogv4df_2 */
    case 5601:  /* *avx512vl_vpternlogv4df_2 */
    case 5600:  /* *avx512vl_vpternlogv4df_2 */
    case 5599:  /* *avx512vl_vpternlogv4df_2 */
    case 5598:  /* *avx512vl_vpternlogv4df_2 */
    case 5597:  /* *avx512vl_vpternlogv4df_2 */
    case 5596:  /* *avx512vl_vpternlogv4df_2 */
    case 5595:  /* *avx512vl_vpternlogv4df_2 */
    case 5594:  /* *avx512vl_vpternlogv4df_2 */
    case 5593:  /* *avx512vl_vpternlogv4df_2 */
    case 5592:  /* *avx512vl_vpternlogv4df_2 */
    case 5591:  /* *avx512vl_vpternlogv4df_2 */
    case 5590:  /* *avx512vl_vpternlogv4df_2 */
    case 5589:  /* *avx512vl_vpternlogv4df_2 */
    case 5588:  /* *avx512vl_vpternlogv4df_2 */
    case 5587:  /* *avx512vl_vpternlogv4df_2 */
    case 5586:  /* *avx512vl_vpternlogv4df_2 */
    case 5585:  /* *avx512vl_vpternlogv4df_2 */
    case 5584:  /* *avx512vl_vpternlogv4df_2 */
    case 5583:  /* *avx512vl_vpternlogv4df_2 */
    case 5582:  /* *avx512f_vpternlogv8df_2 */
    case 5581:  /* *avx512f_vpternlogv8df_2 */
    case 5580:  /* *avx512f_vpternlogv8df_2 */
    case 5579:  /* *avx512f_vpternlogv8df_2 */
    case 5578:  /* *avx512f_vpternlogv8df_2 */
    case 5577:  /* *avx512f_vpternlogv8df_2 */
    case 5576:  /* *avx512f_vpternlogv8df_2 */
    case 5575:  /* *avx512f_vpternlogv8df_2 */
    case 5574:  /* *avx512f_vpternlogv8df_2 */
    case 5573:  /* *avx512f_vpternlogv8df_2 */
    case 5572:  /* *avx512f_vpternlogv8df_2 */
    case 5571:  /* *avx512f_vpternlogv8df_2 */
    case 5570:  /* *avx512f_vpternlogv8df_2 */
    case 5569:  /* *avx512f_vpternlogv8df_2 */
    case 5568:  /* *avx512f_vpternlogv8df_2 */
    case 5567:  /* *avx512f_vpternlogv8df_2 */
    case 5566:  /* *avx512f_vpternlogv8df_2 */
    case 5565:  /* *avx512f_vpternlogv8df_2 */
    case 5564:  /* *avx512f_vpternlogv8df_2 */
    case 5563:  /* *avx512f_vpternlogv8df_2 */
    case 5562:  /* *avx512f_vpternlogv8df_2 */
    case 5561:  /* *avx512f_vpternlogv8df_2 */
    case 5560:  /* *avx512f_vpternlogv8df_2 */
    case 5559:  /* *avx512f_vpternlogv8df_2 */
    case 5558:  /* *avx512f_vpternlogv8df_2 */
    case 5557:  /* *avx512f_vpternlogv8df_2 */
    case 5556:  /* *avx512f_vpternlogv8df_2 */
    case 5555:  /* *avx512vl_vpternlogv4sf_2 */
    case 5554:  /* *avx512vl_vpternlogv4sf_2 */
    case 5553:  /* *avx512vl_vpternlogv4sf_2 */
    case 5552:  /* *avx512vl_vpternlogv4sf_2 */
    case 5551:  /* *avx512vl_vpternlogv4sf_2 */
    case 5550:  /* *avx512vl_vpternlogv4sf_2 */
    case 5549:  /* *avx512vl_vpternlogv4sf_2 */
    case 5548:  /* *avx512vl_vpternlogv4sf_2 */
    case 5547:  /* *avx512vl_vpternlogv4sf_2 */
    case 5546:  /* *avx512vl_vpternlogv4sf_2 */
    case 5545:  /* *avx512vl_vpternlogv4sf_2 */
    case 5544:  /* *avx512vl_vpternlogv4sf_2 */
    case 5543:  /* *avx512vl_vpternlogv4sf_2 */
    case 5542:  /* *avx512vl_vpternlogv4sf_2 */
    case 5541:  /* *avx512vl_vpternlogv4sf_2 */
    case 5540:  /* *avx512vl_vpternlogv4sf_2 */
    case 5539:  /* *avx512vl_vpternlogv4sf_2 */
    case 5538:  /* *avx512vl_vpternlogv4sf_2 */
    case 5537:  /* *avx512vl_vpternlogv4sf_2 */
    case 5536:  /* *avx512vl_vpternlogv4sf_2 */
    case 5535:  /* *avx512vl_vpternlogv4sf_2 */
    case 5534:  /* *avx512vl_vpternlogv4sf_2 */
    case 5533:  /* *avx512vl_vpternlogv4sf_2 */
    case 5532:  /* *avx512vl_vpternlogv4sf_2 */
    case 5531:  /* *avx512vl_vpternlogv4sf_2 */
    case 5530:  /* *avx512vl_vpternlogv4sf_2 */
    case 5529:  /* *avx512vl_vpternlogv4sf_2 */
    case 5528:  /* *avx512vl_vpternlogv8sf_2 */
    case 5527:  /* *avx512vl_vpternlogv8sf_2 */
    case 5526:  /* *avx512vl_vpternlogv8sf_2 */
    case 5525:  /* *avx512vl_vpternlogv8sf_2 */
    case 5524:  /* *avx512vl_vpternlogv8sf_2 */
    case 5523:  /* *avx512vl_vpternlogv8sf_2 */
    case 5522:  /* *avx512vl_vpternlogv8sf_2 */
    case 5521:  /* *avx512vl_vpternlogv8sf_2 */
    case 5520:  /* *avx512vl_vpternlogv8sf_2 */
    case 5519:  /* *avx512vl_vpternlogv8sf_2 */
    case 5518:  /* *avx512vl_vpternlogv8sf_2 */
    case 5517:  /* *avx512vl_vpternlogv8sf_2 */
    case 5516:  /* *avx512vl_vpternlogv8sf_2 */
    case 5515:  /* *avx512vl_vpternlogv8sf_2 */
    case 5514:  /* *avx512vl_vpternlogv8sf_2 */
    case 5513:  /* *avx512vl_vpternlogv8sf_2 */
    case 5512:  /* *avx512vl_vpternlogv8sf_2 */
    case 5511:  /* *avx512vl_vpternlogv8sf_2 */
    case 5510:  /* *avx512vl_vpternlogv8sf_2 */
    case 5509:  /* *avx512vl_vpternlogv8sf_2 */
    case 5508:  /* *avx512vl_vpternlogv8sf_2 */
    case 5507:  /* *avx512vl_vpternlogv8sf_2 */
    case 5506:  /* *avx512vl_vpternlogv8sf_2 */
    case 5505:  /* *avx512vl_vpternlogv8sf_2 */
    case 5504:  /* *avx512vl_vpternlogv8sf_2 */
    case 5503:  /* *avx512vl_vpternlogv8sf_2 */
    case 5502:  /* *avx512vl_vpternlogv8sf_2 */
    case 5501:  /* *avx512f_vpternlogv16sf_2 */
    case 5500:  /* *avx512f_vpternlogv16sf_2 */
    case 5499:  /* *avx512f_vpternlogv16sf_2 */
    case 5498:  /* *avx512f_vpternlogv16sf_2 */
    case 5497:  /* *avx512f_vpternlogv16sf_2 */
    case 5496:  /* *avx512f_vpternlogv16sf_2 */
    case 5495:  /* *avx512f_vpternlogv16sf_2 */
    case 5494:  /* *avx512f_vpternlogv16sf_2 */
    case 5493:  /* *avx512f_vpternlogv16sf_2 */
    case 5492:  /* *avx512f_vpternlogv16sf_2 */
    case 5491:  /* *avx512f_vpternlogv16sf_2 */
    case 5490:  /* *avx512f_vpternlogv16sf_2 */
    case 5489:  /* *avx512f_vpternlogv16sf_2 */
    case 5488:  /* *avx512f_vpternlogv16sf_2 */
    case 5487:  /* *avx512f_vpternlogv16sf_2 */
    case 5486:  /* *avx512f_vpternlogv16sf_2 */
    case 5485:  /* *avx512f_vpternlogv16sf_2 */
    case 5484:  /* *avx512f_vpternlogv16sf_2 */
    case 5483:  /* *avx512f_vpternlogv16sf_2 */
    case 5482:  /* *avx512f_vpternlogv16sf_2 */
    case 5481:  /* *avx512f_vpternlogv16sf_2 */
    case 5480:  /* *avx512f_vpternlogv16sf_2 */
    case 5479:  /* *avx512f_vpternlogv16sf_2 */
    case 5478:  /* *avx512f_vpternlogv16sf_2 */
    case 5477:  /* *avx512f_vpternlogv16sf_2 */
    case 5476:  /* *avx512f_vpternlogv16sf_2 */
    case 5475:  /* *avx512f_vpternlogv16sf_2 */
    case 5474:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5473:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5472:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5471:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5470:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5469:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5468:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5467:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5466:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5465:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5464:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5463:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5462:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5461:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5460:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5459:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5458:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5457:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5456:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5455:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5454:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5453:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5452:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5451:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5450:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5449:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5448:  /* *avx512fp16_vpternlogv8hf_2 */
    case 5447:  /* *avx512vl_vpternlogv16hf_2 */
    case 5446:  /* *avx512vl_vpternlogv16hf_2 */
    case 5445:  /* *avx512vl_vpternlogv16hf_2 */
    case 5444:  /* *avx512vl_vpternlogv16hf_2 */
    case 5443:  /* *avx512vl_vpternlogv16hf_2 */
    case 5442:  /* *avx512vl_vpternlogv16hf_2 */
    case 5441:  /* *avx512vl_vpternlogv16hf_2 */
    case 5440:  /* *avx512vl_vpternlogv16hf_2 */
    case 5439:  /* *avx512vl_vpternlogv16hf_2 */
    case 5438:  /* *avx512vl_vpternlogv16hf_2 */
    case 5437:  /* *avx512vl_vpternlogv16hf_2 */
    case 5436:  /* *avx512vl_vpternlogv16hf_2 */
    case 5435:  /* *avx512vl_vpternlogv16hf_2 */
    case 5434:  /* *avx512vl_vpternlogv16hf_2 */
    case 5433:  /* *avx512vl_vpternlogv16hf_2 */
    case 5432:  /* *avx512vl_vpternlogv16hf_2 */
    case 5431:  /* *avx512vl_vpternlogv16hf_2 */
    case 5430:  /* *avx512vl_vpternlogv16hf_2 */
    case 5429:  /* *avx512vl_vpternlogv16hf_2 */
    case 5428:  /* *avx512vl_vpternlogv16hf_2 */
    case 5427:  /* *avx512vl_vpternlogv16hf_2 */
    case 5426:  /* *avx512vl_vpternlogv16hf_2 */
    case 5425:  /* *avx512vl_vpternlogv16hf_2 */
    case 5424:  /* *avx512vl_vpternlogv16hf_2 */
    case 5423:  /* *avx512vl_vpternlogv16hf_2 */
    case 5422:  /* *avx512vl_vpternlogv16hf_2 */
    case 5421:  /* *avx512vl_vpternlogv16hf_2 */
    case 5420:  /* *avx512bw_vpternlogv32hf_2 */
    case 5419:  /* *avx512bw_vpternlogv32hf_2 */
    case 5418:  /* *avx512bw_vpternlogv32hf_2 */
    case 5417:  /* *avx512bw_vpternlogv32hf_2 */
    case 5416:  /* *avx512bw_vpternlogv32hf_2 */
    case 5415:  /* *avx512bw_vpternlogv32hf_2 */
    case 5414:  /* *avx512bw_vpternlogv32hf_2 */
    case 5413:  /* *avx512bw_vpternlogv32hf_2 */
    case 5412:  /* *avx512bw_vpternlogv32hf_2 */
    case 5411:  /* *avx512bw_vpternlogv32hf_2 */
    case 5410:  /* *avx512bw_vpternlogv32hf_2 */
    case 5409:  /* *avx512bw_vpternlogv32hf_2 */
    case 5408:  /* *avx512bw_vpternlogv32hf_2 */
    case 5407:  /* *avx512bw_vpternlogv32hf_2 */
    case 5406:  /* *avx512bw_vpternlogv32hf_2 */
    case 5405:  /* *avx512bw_vpternlogv32hf_2 */
    case 5404:  /* *avx512bw_vpternlogv32hf_2 */
    case 5403:  /* *avx512bw_vpternlogv32hf_2 */
    case 5402:  /* *avx512bw_vpternlogv32hf_2 */
    case 5401:  /* *avx512bw_vpternlogv32hf_2 */
    case 5400:  /* *avx512bw_vpternlogv32hf_2 */
    case 5399:  /* *avx512bw_vpternlogv32hf_2 */
    case 5398:  /* *avx512bw_vpternlogv32hf_2 */
    case 5397:  /* *avx512bw_vpternlogv32hf_2 */
    case 5396:  /* *avx512bw_vpternlogv32hf_2 */
    case 5395:  /* *avx512bw_vpternlogv32hf_2 */
    case 5394:  /* *avx512bw_vpternlogv32hf_2 */
    case 5393:  /* *avx512vl_vpternlogv2di_2 */
    case 5392:  /* *avx512vl_vpternlogv2di_2 */
    case 5391:  /* *avx512vl_vpternlogv2di_2 */
    case 5390:  /* *avx512vl_vpternlogv2di_2 */
    case 5389:  /* *avx512vl_vpternlogv2di_2 */
    case 5388:  /* *avx512vl_vpternlogv2di_2 */
    case 5387:  /* *avx512vl_vpternlogv2di_2 */
    case 5386:  /* *avx512vl_vpternlogv2di_2 */
    case 5385:  /* *avx512vl_vpternlogv2di_2 */
    case 5384:  /* *avx512vl_vpternlogv2di_2 */
    case 5383:  /* *avx512vl_vpternlogv2di_2 */
    case 5382:  /* *avx512vl_vpternlogv2di_2 */
    case 5381:  /* *avx512vl_vpternlogv2di_2 */
    case 5380:  /* *avx512vl_vpternlogv2di_2 */
    case 5379:  /* *avx512vl_vpternlogv2di_2 */
    case 5378:  /* *avx512vl_vpternlogv2di_2 */
    case 5377:  /* *avx512vl_vpternlogv2di_2 */
    case 5376:  /* *avx512vl_vpternlogv2di_2 */
    case 5375:  /* *avx512vl_vpternlogv2di_2 */
    case 5374:  /* *avx512vl_vpternlogv2di_2 */
    case 5373:  /* *avx512vl_vpternlogv2di_2 */
    case 5372:  /* *avx512vl_vpternlogv2di_2 */
    case 5371:  /* *avx512vl_vpternlogv2di_2 */
    case 5370:  /* *avx512vl_vpternlogv2di_2 */
    case 5369:  /* *avx512vl_vpternlogv2di_2 */
    case 5368:  /* *avx512vl_vpternlogv2di_2 */
    case 5367:  /* *avx512vl_vpternlogv2di_2 */
    case 5366:  /* *avx512vl_vpternlogv4di_2 */
    case 5365:  /* *avx512vl_vpternlogv4di_2 */
    case 5364:  /* *avx512vl_vpternlogv4di_2 */
    case 5363:  /* *avx512vl_vpternlogv4di_2 */
    case 5362:  /* *avx512vl_vpternlogv4di_2 */
    case 5361:  /* *avx512vl_vpternlogv4di_2 */
    case 5360:  /* *avx512vl_vpternlogv4di_2 */
    case 5359:  /* *avx512vl_vpternlogv4di_2 */
    case 5358:  /* *avx512vl_vpternlogv4di_2 */
    case 5357:  /* *avx512vl_vpternlogv4di_2 */
    case 5356:  /* *avx512vl_vpternlogv4di_2 */
    case 5355:  /* *avx512vl_vpternlogv4di_2 */
    case 5354:  /* *avx512vl_vpternlogv4di_2 */
    case 5353:  /* *avx512vl_vpternlogv4di_2 */
    case 5352:  /* *avx512vl_vpternlogv4di_2 */
    case 5351:  /* *avx512vl_vpternlogv4di_2 */
    case 5350:  /* *avx512vl_vpternlogv4di_2 */
    case 5349:  /* *avx512vl_vpternlogv4di_2 */
    case 5348:  /* *avx512vl_vpternlogv4di_2 */
    case 5347:  /* *avx512vl_vpternlogv4di_2 */
    case 5346:  /* *avx512vl_vpternlogv4di_2 */
    case 5345:  /* *avx512vl_vpternlogv4di_2 */
    case 5344:  /* *avx512vl_vpternlogv4di_2 */
    case 5343:  /* *avx512vl_vpternlogv4di_2 */
    case 5342:  /* *avx512vl_vpternlogv4di_2 */
    case 5341:  /* *avx512vl_vpternlogv4di_2 */
    case 5340:  /* *avx512vl_vpternlogv4di_2 */
    case 5339:  /* *avx512f_vpternlogv8di_2 */
    case 5338:  /* *avx512f_vpternlogv8di_2 */
    case 5337:  /* *avx512f_vpternlogv8di_2 */
    case 5336:  /* *avx512f_vpternlogv8di_2 */
    case 5335:  /* *avx512f_vpternlogv8di_2 */
    case 5334:  /* *avx512f_vpternlogv8di_2 */
    case 5333:  /* *avx512f_vpternlogv8di_2 */
    case 5332:  /* *avx512f_vpternlogv8di_2 */
    case 5331:  /* *avx512f_vpternlogv8di_2 */
    case 5330:  /* *avx512f_vpternlogv8di_2 */
    case 5329:  /* *avx512f_vpternlogv8di_2 */
    case 5328:  /* *avx512f_vpternlogv8di_2 */
    case 5327:  /* *avx512f_vpternlogv8di_2 */
    case 5326:  /* *avx512f_vpternlogv8di_2 */
    case 5325:  /* *avx512f_vpternlogv8di_2 */
    case 5324:  /* *avx512f_vpternlogv8di_2 */
    case 5323:  /* *avx512f_vpternlogv8di_2 */
    case 5322:  /* *avx512f_vpternlogv8di_2 */
    case 5321:  /* *avx512f_vpternlogv8di_2 */
    case 5320:  /* *avx512f_vpternlogv8di_2 */
    case 5319:  /* *avx512f_vpternlogv8di_2 */
    case 5318:  /* *avx512f_vpternlogv8di_2 */
    case 5317:  /* *avx512f_vpternlogv8di_2 */
    case 5316:  /* *avx512f_vpternlogv8di_2 */
    case 5315:  /* *avx512f_vpternlogv8di_2 */
    case 5314:  /* *avx512f_vpternlogv8di_2 */
    case 5313:  /* *avx512f_vpternlogv8di_2 */
    case 5312:  /* *avx512vl_vpternlogv4si_2 */
    case 5311:  /* *avx512vl_vpternlogv4si_2 */
    case 5310:  /* *avx512vl_vpternlogv4si_2 */
    case 5309:  /* *avx512vl_vpternlogv4si_2 */
    case 5308:  /* *avx512vl_vpternlogv4si_2 */
    case 5307:  /* *avx512vl_vpternlogv4si_2 */
    case 5306:  /* *avx512vl_vpternlogv4si_2 */
    case 5305:  /* *avx512vl_vpternlogv4si_2 */
    case 5304:  /* *avx512vl_vpternlogv4si_2 */
    case 5303:  /* *avx512vl_vpternlogv4si_2 */
    case 5302:  /* *avx512vl_vpternlogv4si_2 */
    case 5301:  /* *avx512vl_vpternlogv4si_2 */
    case 5300:  /* *avx512vl_vpternlogv4si_2 */
    case 5299:  /* *avx512vl_vpternlogv4si_2 */
    case 5298:  /* *avx512vl_vpternlogv4si_2 */
    case 5297:  /* *avx512vl_vpternlogv4si_2 */
    case 5296:  /* *avx512vl_vpternlogv4si_2 */
    case 5295:  /* *avx512vl_vpternlogv4si_2 */
    case 5294:  /* *avx512vl_vpternlogv4si_2 */
    case 5293:  /* *avx512vl_vpternlogv4si_2 */
    case 5292:  /* *avx512vl_vpternlogv4si_2 */
    case 5291:  /* *avx512vl_vpternlogv4si_2 */
    case 5290:  /* *avx512vl_vpternlogv4si_2 */
    case 5289:  /* *avx512vl_vpternlogv4si_2 */
    case 5288:  /* *avx512vl_vpternlogv4si_2 */
    case 5287:  /* *avx512vl_vpternlogv4si_2 */
    case 5286:  /* *avx512vl_vpternlogv4si_2 */
    case 5285:  /* *avx512vl_vpternlogv8si_2 */
    case 5284:  /* *avx512vl_vpternlogv8si_2 */
    case 5283:  /* *avx512vl_vpternlogv8si_2 */
    case 5282:  /* *avx512vl_vpternlogv8si_2 */
    case 5281:  /* *avx512vl_vpternlogv8si_2 */
    case 5280:  /* *avx512vl_vpternlogv8si_2 */
    case 5279:  /* *avx512vl_vpternlogv8si_2 */
    case 5278:  /* *avx512vl_vpternlogv8si_2 */
    case 5277:  /* *avx512vl_vpternlogv8si_2 */
    case 5276:  /* *avx512vl_vpternlogv8si_2 */
    case 5275:  /* *avx512vl_vpternlogv8si_2 */
    case 5274:  /* *avx512vl_vpternlogv8si_2 */
    case 5273:  /* *avx512vl_vpternlogv8si_2 */
    case 5272:  /* *avx512vl_vpternlogv8si_2 */
    case 5271:  /* *avx512vl_vpternlogv8si_2 */
    case 5270:  /* *avx512vl_vpternlogv8si_2 */
    case 5269:  /* *avx512vl_vpternlogv8si_2 */
    case 5268:  /* *avx512vl_vpternlogv8si_2 */
    case 5267:  /* *avx512vl_vpternlogv8si_2 */
    case 5266:  /* *avx512vl_vpternlogv8si_2 */
    case 5265:  /* *avx512vl_vpternlogv8si_2 */
    case 5264:  /* *avx512vl_vpternlogv8si_2 */
    case 5263:  /* *avx512vl_vpternlogv8si_2 */
    case 5262:  /* *avx512vl_vpternlogv8si_2 */
    case 5261:  /* *avx512vl_vpternlogv8si_2 */
    case 5260:  /* *avx512vl_vpternlogv8si_2 */
    case 5259:  /* *avx512vl_vpternlogv8si_2 */
    case 5258:  /* *avx512f_vpternlogv16si_2 */
    case 5257:  /* *avx512f_vpternlogv16si_2 */
    case 5256:  /* *avx512f_vpternlogv16si_2 */
    case 5255:  /* *avx512f_vpternlogv16si_2 */
    case 5254:  /* *avx512f_vpternlogv16si_2 */
    case 5253:  /* *avx512f_vpternlogv16si_2 */
    case 5252:  /* *avx512f_vpternlogv16si_2 */
    case 5251:  /* *avx512f_vpternlogv16si_2 */
    case 5250:  /* *avx512f_vpternlogv16si_2 */
    case 5249:  /* *avx512f_vpternlogv16si_2 */
    case 5248:  /* *avx512f_vpternlogv16si_2 */
    case 5247:  /* *avx512f_vpternlogv16si_2 */
    case 5246:  /* *avx512f_vpternlogv16si_2 */
    case 5245:  /* *avx512f_vpternlogv16si_2 */
    case 5244:  /* *avx512f_vpternlogv16si_2 */
    case 5243:  /* *avx512f_vpternlogv16si_2 */
    case 5242:  /* *avx512f_vpternlogv16si_2 */
    case 5241:  /* *avx512f_vpternlogv16si_2 */
    case 5240:  /* *avx512f_vpternlogv16si_2 */
    case 5239:  /* *avx512f_vpternlogv16si_2 */
    case 5238:  /* *avx512f_vpternlogv16si_2 */
    case 5237:  /* *avx512f_vpternlogv16si_2 */
    case 5236:  /* *avx512f_vpternlogv16si_2 */
    case 5235:  /* *avx512f_vpternlogv16si_2 */
    case 5234:  /* *avx512f_vpternlogv16si_2 */
    case 5233:  /* *avx512f_vpternlogv16si_2 */
    case 5232:  /* *avx512f_vpternlogv16si_2 */
    case 5231:  /* *avx512vl_vpternlogv8hi_2 */
    case 5230:  /* *avx512vl_vpternlogv8hi_2 */
    case 5229:  /* *avx512vl_vpternlogv8hi_2 */
    case 5228:  /* *avx512vl_vpternlogv8hi_2 */
    case 5227:  /* *avx512vl_vpternlogv8hi_2 */
    case 5226:  /* *avx512vl_vpternlogv8hi_2 */
    case 5225:  /* *avx512vl_vpternlogv8hi_2 */
    case 5224:  /* *avx512vl_vpternlogv8hi_2 */
    case 5223:  /* *avx512vl_vpternlogv8hi_2 */
    case 5222:  /* *avx512vl_vpternlogv8hi_2 */
    case 5221:  /* *avx512vl_vpternlogv8hi_2 */
    case 5220:  /* *avx512vl_vpternlogv8hi_2 */
    case 5219:  /* *avx512vl_vpternlogv8hi_2 */
    case 5218:  /* *avx512vl_vpternlogv8hi_2 */
    case 5217:  /* *avx512vl_vpternlogv8hi_2 */
    case 5216:  /* *avx512vl_vpternlogv8hi_2 */
    case 5215:  /* *avx512vl_vpternlogv8hi_2 */
    case 5214:  /* *avx512vl_vpternlogv8hi_2 */
    case 5213:  /* *avx512vl_vpternlogv8hi_2 */
    case 5212:  /* *avx512vl_vpternlogv8hi_2 */
    case 5211:  /* *avx512vl_vpternlogv8hi_2 */
    case 5210:  /* *avx512vl_vpternlogv8hi_2 */
    case 5209:  /* *avx512vl_vpternlogv8hi_2 */
    case 5208:  /* *avx512vl_vpternlogv8hi_2 */
    case 5207:  /* *avx512vl_vpternlogv8hi_2 */
    case 5206:  /* *avx512vl_vpternlogv8hi_2 */
    case 5205:  /* *avx512vl_vpternlogv8hi_2 */
    case 5204:  /* *avx512vl_vpternlogv16hi_2 */
    case 5203:  /* *avx512vl_vpternlogv16hi_2 */
    case 5202:  /* *avx512vl_vpternlogv16hi_2 */
    case 5201:  /* *avx512vl_vpternlogv16hi_2 */
    case 5200:  /* *avx512vl_vpternlogv16hi_2 */
    case 5199:  /* *avx512vl_vpternlogv16hi_2 */
    case 5198:  /* *avx512vl_vpternlogv16hi_2 */
    case 5197:  /* *avx512vl_vpternlogv16hi_2 */
    case 5196:  /* *avx512vl_vpternlogv16hi_2 */
    case 5195:  /* *avx512vl_vpternlogv16hi_2 */
    case 5194:  /* *avx512vl_vpternlogv16hi_2 */
    case 5193:  /* *avx512vl_vpternlogv16hi_2 */
    case 5192:  /* *avx512vl_vpternlogv16hi_2 */
    case 5191:  /* *avx512vl_vpternlogv16hi_2 */
    case 5190:  /* *avx512vl_vpternlogv16hi_2 */
    case 5189:  /* *avx512vl_vpternlogv16hi_2 */
    case 5188:  /* *avx512vl_vpternlogv16hi_2 */
    case 5187:  /* *avx512vl_vpternlogv16hi_2 */
    case 5186:  /* *avx512vl_vpternlogv16hi_2 */
    case 5185:  /* *avx512vl_vpternlogv16hi_2 */
    case 5184:  /* *avx512vl_vpternlogv16hi_2 */
    case 5183:  /* *avx512vl_vpternlogv16hi_2 */
    case 5182:  /* *avx512vl_vpternlogv16hi_2 */
    case 5181:  /* *avx512vl_vpternlogv16hi_2 */
    case 5180:  /* *avx512vl_vpternlogv16hi_2 */
    case 5179:  /* *avx512vl_vpternlogv16hi_2 */
    case 5178:  /* *avx512vl_vpternlogv16hi_2 */
    case 5177:  /* *avx512bw_vpternlogv32hi_2 */
    case 5176:  /* *avx512bw_vpternlogv32hi_2 */
    case 5175:  /* *avx512bw_vpternlogv32hi_2 */
    case 5174:  /* *avx512bw_vpternlogv32hi_2 */
    case 5173:  /* *avx512bw_vpternlogv32hi_2 */
    case 5172:  /* *avx512bw_vpternlogv32hi_2 */
    case 5171:  /* *avx512bw_vpternlogv32hi_2 */
    case 5170:  /* *avx512bw_vpternlogv32hi_2 */
    case 5169:  /* *avx512bw_vpternlogv32hi_2 */
    case 5168:  /* *avx512bw_vpternlogv32hi_2 */
    case 5167:  /* *avx512bw_vpternlogv32hi_2 */
    case 5166:  /* *avx512bw_vpternlogv32hi_2 */
    case 5165:  /* *avx512bw_vpternlogv32hi_2 */
    case 5164:  /* *avx512bw_vpternlogv32hi_2 */
    case 5163:  /* *avx512bw_vpternlogv32hi_2 */
    case 5162:  /* *avx512bw_vpternlogv32hi_2 */
    case 5161:  /* *avx512bw_vpternlogv32hi_2 */
    case 5160:  /* *avx512bw_vpternlogv32hi_2 */
    case 5159:  /* *avx512bw_vpternlogv32hi_2 */
    case 5158:  /* *avx512bw_vpternlogv32hi_2 */
    case 5157:  /* *avx512bw_vpternlogv32hi_2 */
    case 5156:  /* *avx512bw_vpternlogv32hi_2 */
    case 5155:  /* *avx512bw_vpternlogv32hi_2 */
    case 5154:  /* *avx512bw_vpternlogv32hi_2 */
    case 5153:  /* *avx512bw_vpternlogv32hi_2 */
    case 5152:  /* *avx512bw_vpternlogv32hi_2 */
    case 5151:  /* *avx512bw_vpternlogv32hi_2 */
    case 5150:  /* *avx512vl_vpternlogv16qi_2 */
    case 5149:  /* *avx512vl_vpternlogv16qi_2 */
    case 5148:  /* *avx512vl_vpternlogv16qi_2 */
    case 5147:  /* *avx512vl_vpternlogv16qi_2 */
    case 5146:  /* *avx512vl_vpternlogv16qi_2 */
    case 5145:  /* *avx512vl_vpternlogv16qi_2 */
    case 5144:  /* *avx512vl_vpternlogv16qi_2 */
    case 5143:  /* *avx512vl_vpternlogv16qi_2 */
    case 5142:  /* *avx512vl_vpternlogv16qi_2 */
    case 5141:  /* *avx512vl_vpternlogv16qi_2 */
    case 5140:  /* *avx512vl_vpternlogv16qi_2 */
    case 5139:  /* *avx512vl_vpternlogv16qi_2 */
    case 5138:  /* *avx512vl_vpternlogv16qi_2 */
    case 5137:  /* *avx512vl_vpternlogv16qi_2 */
    case 5136:  /* *avx512vl_vpternlogv16qi_2 */
    case 5135:  /* *avx512vl_vpternlogv16qi_2 */
    case 5134:  /* *avx512vl_vpternlogv16qi_2 */
    case 5133:  /* *avx512vl_vpternlogv16qi_2 */
    case 5132:  /* *avx512vl_vpternlogv16qi_2 */
    case 5131:  /* *avx512vl_vpternlogv16qi_2 */
    case 5130:  /* *avx512vl_vpternlogv16qi_2 */
    case 5129:  /* *avx512vl_vpternlogv16qi_2 */
    case 5128:  /* *avx512vl_vpternlogv16qi_2 */
    case 5127:  /* *avx512vl_vpternlogv16qi_2 */
    case 5126:  /* *avx512vl_vpternlogv16qi_2 */
    case 5125:  /* *avx512vl_vpternlogv16qi_2 */
    case 5124:  /* *avx512vl_vpternlogv16qi_2 */
    case 5123:  /* *avx512vl_vpternlogv32qi_2 */
    case 5122:  /* *avx512vl_vpternlogv32qi_2 */
    case 5121:  /* *avx512vl_vpternlogv32qi_2 */
    case 5120:  /* *avx512vl_vpternlogv32qi_2 */
    case 5119:  /* *avx512vl_vpternlogv32qi_2 */
    case 5118:  /* *avx512vl_vpternlogv32qi_2 */
    case 5117:  /* *avx512vl_vpternlogv32qi_2 */
    case 5116:  /* *avx512vl_vpternlogv32qi_2 */
    case 5115:  /* *avx512vl_vpternlogv32qi_2 */
    case 5114:  /* *avx512vl_vpternlogv32qi_2 */
    case 5113:  /* *avx512vl_vpternlogv32qi_2 */
    case 5112:  /* *avx512vl_vpternlogv32qi_2 */
    case 5111:  /* *avx512vl_vpternlogv32qi_2 */
    case 5110:  /* *avx512vl_vpternlogv32qi_2 */
    case 5109:  /* *avx512vl_vpternlogv32qi_2 */
    case 5108:  /* *avx512vl_vpternlogv32qi_2 */
    case 5107:  /* *avx512vl_vpternlogv32qi_2 */
    case 5106:  /* *avx512vl_vpternlogv32qi_2 */
    case 5105:  /* *avx512vl_vpternlogv32qi_2 */
    case 5104:  /* *avx512vl_vpternlogv32qi_2 */
    case 5103:  /* *avx512vl_vpternlogv32qi_2 */
    case 5102:  /* *avx512vl_vpternlogv32qi_2 */
    case 5101:  /* *avx512vl_vpternlogv32qi_2 */
    case 5100:  /* *avx512vl_vpternlogv32qi_2 */
    case 5099:  /* *avx512vl_vpternlogv32qi_2 */
    case 5098:  /* *avx512vl_vpternlogv32qi_2 */
    case 5097:  /* *avx512vl_vpternlogv32qi_2 */
    case 5096:  /* *avx512bw_vpternlogv64qi_2 */
    case 5095:  /* *avx512bw_vpternlogv64qi_2 */
    case 5094:  /* *avx512bw_vpternlogv64qi_2 */
    case 5093:  /* *avx512bw_vpternlogv64qi_2 */
    case 5092:  /* *avx512bw_vpternlogv64qi_2 */
    case 5091:  /* *avx512bw_vpternlogv64qi_2 */
    case 5090:  /* *avx512bw_vpternlogv64qi_2 */
    case 5089:  /* *avx512bw_vpternlogv64qi_2 */
    case 5088:  /* *avx512bw_vpternlogv64qi_2 */
    case 5087:  /* *avx512bw_vpternlogv64qi_2 */
    case 5086:  /* *avx512bw_vpternlogv64qi_2 */
    case 5085:  /* *avx512bw_vpternlogv64qi_2 */
    case 5084:  /* *avx512bw_vpternlogv64qi_2 */
    case 5083:  /* *avx512bw_vpternlogv64qi_2 */
    case 5082:  /* *avx512bw_vpternlogv64qi_2 */
    case 5081:  /* *avx512bw_vpternlogv64qi_2 */
    case 5080:  /* *avx512bw_vpternlogv64qi_2 */
    case 5079:  /* *avx512bw_vpternlogv64qi_2 */
    case 5078:  /* *avx512bw_vpternlogv64qi_2 */
    case 5077:  /* *avx512bw_vpternlogv64qi_2 */
    case 5076:  /* *avx512bw_vpternlogv64qi_2 */
    case 5075:  /* *avx512bw_vpternlogv64qi_2 */
    case 5074:  /* *avx512bw_vpternlogv64qi_2 */
    case 5073:  /* *avx512bw_vpternlogv64qi_2 */
    case 5072:  /* *avx512bw_vpternlogv64qi_2 */
    case 5071:  /* *avx512bw_vpternlogv64qi_2 */
    case 5070:  /* *avx512bw_vpternlogv64qi_2 */
    case 309:  /* *leahi_general_3b */
    case 308:  /* *leaqi_general_3b */
    case 307:  /* *leahi_general_3 */
    case 306:  /* *leaqi_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 7717:  /* xop_pmacssdd */
    case 7716:  /* xop_pmacsdd */
    case 7715:  /* xop_pmacssww */
    case 7714:  /* xop_pmacsww */
    case 5825:  /* *avx512vl_vpternlogv2df_3 */
    case 5824:  /* *avx512vl_vpternlogv2df_3 */
    case 5823:  /* *avx512vl_vpternlogv2df_3 */
    case 5822:  /* *avx512vl_vpternlogv2df_3 */
    case 5821:  /* *avx512vl_vpternlogv2df_3 */
    case 5820:  /* *avx512vl_vpternlogv2df_3 */
    case 5819:  /* *avx512vl_vpternlogv2df_3 */
    case 5818:  /* *avx512vl_vpternlogv2df_3 */
    case 5817:  /* *avx512vl_vpternlogv2df_3 */
    case 5816:  /* *avx512vl_vpternlogv4df_3 */
    case 5815:  /* *avx512vl_vpternlogv4df_3 */
    case 5814:  /* *avx512vl_vpternlogv4df_3 */
    case 5813:  /* *avx512vl_vpternlogv4df_3 */
    case 5812:  /* *avx512vl_vpternlogv4df_3 */
    case 5811:  /* *avx512vl_vpternlogv4df_3 */
    case 5810:  /* *avx512vl_vpternlogv4df_3 */
    case 5809:  /* *avx512vl_vpternlogv4df_3 */
    case 5808:  /* *avx512vl_vpternlogv4df_3 */
    case 5807:  /* *avx512f_vpternlogv8df_3 */
    case 5806:  /* *avx512f_vpternlogv8df_3 */
    case 5805:  /* *avx512f_vpternlogv8df_3 */
    case 5804:  /* *avx512f_vpternlogv8df_3 */
    case 5803:  /* *avx512f_vpternlogv8df_3 */
    case 5802:  /* *avx512f_vpternlogv8df_3 */
    case 5801:  /* *avx512f_vpternlogv8df_3 */
    case 5800:  /* *avx512f_vpternlogv8df_3 */
    case 5799:  /* *avx512f_vpternlogv8df_3 */
    case 5798:  /* *avx512vl_vpternlogv4sf_3 */
    case 5797:  /* *avx512vl_vpternlogv4sf_3 */
    case 5796:  /* *avx512vl_vpternlogv4sf_3 */
    case 5795:  /* *avx512vl_vpternlogv4sf_3 */
    case 5794:  /* *avx512vl_vpternlogv4sf_3 */
    case 5793:  /* *avx512vl_vpternlogv4sf_3 */
    case 5792:  /* *avx512vl_vpternlogv4sf_3 */
    case 5791:  /* *avx512vl_vpternlogv4sf_3 */
    case 5790:  /* *avx512vl_vpternlogv4sf_3 */
    case 5789:  /* *avx512vl_vpternlogv8sf_3 */
    case 5788:  /* *avx512vl_vpternlogv8sf_3 */
    case 5787:  /* *avx512vl_vpternlogv8sf_3 */
    case 5786:  /* *avx512vl_vpternlogv8sf_3 */
    case 5785:  /* *avx512vl_vpternlogv8sf_3 */
    case 5784:  /* *avx512vl_vpternlogv8sf_3 */
    case 5783:  /* *avx512vl_vpternlogv8sf_3 */
    case 5782:  /* *avx512vl_vpternlogv8sf_3 */
    case 5781:  /* *avx512vl_vpternlogv8sf_3 */
    case 5780:  /* *avx512f_vpternlogv16sf_3 */
    case 5779:  /* *avx512f_vpternlogv16sf_3 */
    case 5778:  /* *avx512f_vpternlogv16sf_3 */
    case 5777:  /* *avx512f_vpternlogv16sf_3 */
    case 5776:  /* *avx512f_vpternlogv16sf_3 */
    case 5775:  /* *avx512f_vpternlogv16sf_3 */
    case 5774:  /* *avx512f_vpternlogv16sf_3 */
    case 5773:  /* *avx512f_vpternlogv16sf_3 */
    case 5772:  /* *avx512f_vpternlogv16sf_3 */
    case 5771:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5770:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5769:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5768:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5767:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5766:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5765:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5764:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5763:  /* *avx512fp16_vpternlogv8hf_3 */
    case 5762:  /* *avx512vl_vpternlogv16hf_3 */
    case 5761:  /* *avx512vl_vpternlogv16hf_3 */
    case 5760:  /* *avx512vl_vpternlogv16hf_3 */
    case 5759:  /* *avx512vl_vpternlogv16hf_3 */
    case 5758:  /* *avx512vl_vpternlogv16hf_3 */
    case 5757:  /* *avx512vl_vpternlogv16hf_3 */
    case 5756:  /* *avx512vl_vpternlogv16hf_3 */
    case 5755:  /* *avx512vl_vpternlogv16hf_3 */
    case 5754:  /* *avx512vl_vpternlogv16hf_3 */
    case 5753:  /* *avx512bw_vpternlogv32hf_3 */
    case 5752:  /* *avx512bw_vpternlogv32hf_3 */
    case 5751:  /* *avx512bw_vpternlogv32hf_3 */
    case 5750:  /* *avx512bw_vpternlogv32hf_3 */
    case 5749:  /* *avx512bw_vpternlogv32hf_3 */
    case 5748:  /* *avx512bw_vpternlogv32hf_3 */
    case 5747:  /* *avx512bw_vpternlogv32hf_3 */
    case 5746:  /* *avx512bw_vpternlogv32hf_3 */
    case 5745:  /* *avx512bw_vpternlogv32hf_3 */
    case 5744:  /* *avx512vl_vpternlogv2di_3 */
    case 5743:  /* *avx512vl_vpternlogv2di_3 */
    case 5742:  /* *avx512vl_vpternlogv2di_3 */
    case 5741:  /* *avx512vl_vpternlogv2di_3 */
    case 5740:  /* *avx512vl_vpternlogv2di_3 */
    case 5739:  /* *avx512vl_vpternlogv2di_3 */
    case 5738:  /* *avx512vl_vpternlogv2di_3 */
    case 5737:  /* *avx512vl_vpternlogv2di_3 */
    case 5736:  /* *avx512vl_vpternlogv2di_3 */
    case 5735:  /* *avx512vl_vpternlogv4di_3 */
    case 5734:  /* *avx512vl_vpternlogv4di_3 */
    case 5733:  /* *avx512vl_vpternlogv4di_3 */
    case 5732:  /* *avx512vl_vpternlogv4di_3 */
    case 5731:  /* *avx512vl_vpternlogv4di_3 */
    case 5730:  /* *avx512vl_vpternlogv4di_3 */
    case 5729:  /* *avx512vl_vpternlogv4di_3 */
    case 5728:  /* *avx512vl_vpternlogv4di_3 */
    case 5727:  /* *avx512vl_vpternlogv4di_3 */
    case 5726:  /* *avx512f_vpternlogv8di_3 */
    case 5725:  /* *avx512f_vpternlogv8di_3 */
    case 5724:  /* *avx512f_vpternlogv8di_3 */
    case 5723:  /* *avx512f_vpternlogv8di_3 */
    case 5722:  /* *avx512f_vpternlogv8di_3 */
    case 5721:  /* *avx512f_vpternlogv8di_3 */
    case 5720:  /* *avx512f_vpternlogv8di_3 */
    case 5719:  /* *avx512f_vpternlogv8di_3 */
    case 5718:  /* *avx512f_vpternlogv8di_3 */
    case 5717:  /* *avx512vl_vpternlogv4si_3 */
    case 5716:  /* *avx512vl_vpternlogv4si_3 */
    case 5715:  /* *avx512vl_vpternlogv4si_3 */
    case 5714:  /* *avx512vl_vpternlogv4si_3 */
    case 5713:  /* *avx512vl_vpternlogv4si_3 */
    case 5712:  /* *avx512vl_vpternlogv4si_3 */
    case 5711:  /* *avx512vl_vpternlogv4si_3 */
    case 5710:  /* *avx512vl_vpternlogv4si_3 */
    case 5709:  /* *avx512vl_vpternlogv4si_3 */
    case 5708:  /* *avx512vl_vpternlogv8si_3 */
    case 5707:  /* *avx512vl_vpternlogv8si_3 */
    case 5706:  /* *avx512vl_vpternlogv8si_3 */
    case 5705:  /* *avx512vl_vpternlogv8si_3 */
    case 5704:  /* *avx512vl_vpternlogv8si_3 */
    case 5703:  /* *avx512vl_vpternlogv8si_3 */
    case 5702:  /* *avx512vl_vpternlogv8si_3 */
    case 5701:  /* *avx512vl_vpternlogv8si_3 */
    case 5700:  /* *avx512vl_vpternlogv8si_3 */
    case 5699:  /* *avx512f_vpternlogv16si_3 */
    case 5698:  /* *avx512f_vpternlogv16si_3 */
    case 5697:  /* *avx512f_vpternlogv16si_3 */
    case 5696:  /* *avx512f_vpternlogv16si_3 */
    case 5695:  /* *avx512f_vpternlogv16si_3 */
    case 5694:  /* *avx512f_vpternlogv16si_3 */
    case 5693:  /* *avx512f_vpternlogv16si_3 */
    case 5692:  /* *avx512f_vpternlogv16si_3 */
    case 5691:  /* *avx512f_vpternlogv16si_3 */
    case 5690:  /* *avx512vl_vpternlogv8hi_3 */
    case 5689:  /* *avx512vl_vpternlogv8hi_3 */
    case 5688:  /* *avx512vl_vpternlogv8hi_3 */
    case 5687:  /* *avx512vl_vpternlogv8hi_3 */
    case 5686:  /* *avx512vl_vpternlogv8hi_3 */
    case 5685:  /* *avx512vl_vpternlogv8hi_3 */
    case 5684:  /* *avx512vl_vpternlogv8hi_3 */
    case 5683:  /* *avx512vl_vpternlogv8hi_3 */
    case 5682:  /* *avx512vl_vpternlogv8hi_3 */
    case 5681:  /* *avx512vl_vpternlogv16hi_3 */
    case 5680:  /* *avx512vl_vpternlogv16hi_3 */
    case 5679:  /* *avx512vl_vpternlogv16hi_3 */
    case 5678:  /* *avx512vl_vpternlogv16hi_3 */
    case 5677:  /* *avx512vl_vpternlogv16hi_3 */
    case 5676:  /* *avx512vl_vpternlogv16hi_3 */
    case 5675:  /* *avx512vl_vpternlogv16hi_3 */
    case 5674:  /* *avx512vl_vpternlogv16hi_3 */
    case 5673:  /* *avx512vl_vpternlogv16hi_3 */
    case 5672:  /* *avx512bw_vpternlogv32hi_3 */
    case 5671:  /* *avx512bw_vpternlogv32hi_3 */
    case 5670:  /* *avx512bw_vpternlogv32hi_3 */
    case 5669:  /* *avx512bw_vpternlogv32hi_3 */
    case 5668:  /* *avx512bw_vpternlogv32hi_3 */
    case 5667:  /* *avx512bw_vpternlogv32hi_3 */
    case 5666:  /* *avx512bw_vpternlogv32hi_3 */
    case 5665:  /* *avx512bw_vpternlogv32hi_3 */
    case 5664:  /* *avx512bw_vpternlogv32hi_3 */
    case 5663:  /* *avx512vl_vpternlogv16qi_3 */
    case 5662:  /* *avx512vl_vpternlogv16qi_3 */
    case 5661:  /* *avx512vl_vpternlogv16qi_3 */
    case 5660:  /* *avx512vl_vpternlogv16qi_3 */
    case 5659:  /* *avx512vl_vpternlogv16qi_3 */
    case 5658:  /* *avx512vl_vpternlogv16qi_3 */
    case 5657:  /* *avx512vl_vpternlogv16qi_3 */
    case 5656:  /* *avx512vl_vpternlogv16qi_3 */
    case 5655:  /* *avx512vl_vpternlogv16qi_3 */
    case 5654:  /* *avx512vl_vpternlogv32qi_3 */
    case 5653:  /* *avx512vl_vpternlogv32qi_3 */
    case 5652:  /* *avx512vl_vpternlogv32qi_3 */
    case 5651:  /* *avx512vl_vpternlogv32qi_3 */
    case 5650:  /* *avx512vl_vpternlogv32qi_3 */
    case 5649:  /* *avx512vl_vpternlogv32qi_3 */
    case 5648:  /* *avx512vl_vpternlogv32qi_3 */
    case 5647:  /* *avx512vl_vpternlogv32qi_3 */
    case 5646:  /* *avx512vl_vpternlogv32qi_3 */
    case 5645:  /* *avx512bw_vpternlogv64qi_3 */
    case 5644:  /* *avx512bw_vpternlogv64qi_3 */
    case 5643:  /* *avx512bw_vpternlogv64qi_3 */
    case 5642:  /* *avx512bw_vpternlogv64qi_3 */
    case 5641:  /* *avx512bw_vpternlogv64qi_3 */
    case 5640:  /* *avx512bw_vpternlogv64qi_3 */
    case 5639:  /* *avx512bw_vpternlogv64qi_3 */
    case 5638:  /* *avx512bw_vpternlogv64qi_3 */
    case 5637:  /* *avx512bw_vpternlogv64qi_3 */
    case 696:  /* *concatditi3_5 */
    case 695:  /* *concatditi3_5 */
    case 694:  /* *concatditi3_5 */
    case 693:  /* *concatsidi3_5 */
    case 692:  /* *concatsidi3_5 */
    case 691:  /* *concatsidi3_5 */
    case 317:  /* *leadi_general_4 */
    case 316:  /* *leadi_general_4 */
    case 315:  /* *leasi_general_4 */
    case 314:  /* *leasi_general_4 */
    case 313:  /* *leahi_general_4 */
    case 312:  /* *leahi_general_4 */
    case 311:  /* *leaqi_general_4 */
    case 310:  /* *leaqi_general_4 */
    case 305:  /* *leahi_general_2b */
    case 304:  /* *leaqi_general_2b */
    case 303:  /* *leahi_general_2 */
    case 302:  /* *leaqi_general_2 */
    case 301:  /* *leahi_general_1 */
    case 300:  /* *leaqi_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 299:  /* *addvdi4_overflow_2 */
    case 298:  /* *addvsi4_overflow_2 */
    case 297:  /* *addvhi4_overflow_2 */
    case 296:  /* *addvqi4_overflow_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      break;

    case 295:  /* *addvdi4_overflow_1 */
    case 294:  /* *addvsi4_overflow_1 */
    case 293:  /* *addvhi4_overflow_1 */
    case 292:  /* *addvqi4_overflow_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[3] = 2;
      recog_data.dup_loc[4] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 0), 0);
      recog_data.dup_num[4] = 3;
      recog_data.dup_loc[5] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0), 1);
      recog_data.dup_num[5] = 1;
      recog_data.dup_loc[6] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[6] = 2;
      break;

    case 478:  /* *mulvdi4_1 */
    case 477:  /* *mulvsi4_1 */
    case 476:  /* *mulvhi4_1 */
    case 351:  /* *subvti4_doubleword_1 */
    case 350:  /* *subvdi4_doubleword_1 */
    case 347:  /* subvdi4_1 */
    case 346:  /* subvsi4_1 */
    case 345:  /* subvhi4_1 */
    case 344:  /* subvqi4_1 */
    case 291:  /* *addvti4_doubleword_1 */
    case 290:  /* *addvdi4_doubleword_1 */
    case 287:  /* addvdi4_1 */
    case 286:  /* addvsi4_1 */
    case 285:  /* addvhi4_1 */
    case 284:  /* addvqi4_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      break;

    case 483:  /* *umulvqi4 */
    case 482:  /* *mulvqi4 */
    case 475:  /* *mulvhi4 */
    case 474:  /* *mulvdi4 */
    case 473:  /* *mulvsi4 */
    case 349:  /* *subvti4_doubleword */
    case 348:  /* *subvdi4_doubleword */
    case 343:  /* *subvdi4 */
    case 342:  /* *subvsi4 */
    case 341:  /* *subvhi4 */
    case 340:  /* *subvqi4 */
    case 289:  /* *addvti4_doubleword */
    case 288:  /* *addvdi4_doubleword */
    case 283:  /* *addvdi4 */
    case 282:  /* *addvsi4 */
    case 281:  /* *addvhi4 */
    case 280:  /* *addvqi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      recog_data.dup_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0);
      recog_data.dup_num[2] = 1;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 1);
      recog_data.dup_num[3] = 2;
      break;

    case 663:  /* *xorqi_extdi_2 */
    case 662:  /* *iorqi_extdi_2 */
    case 661:  /* *xorqi_extsi_2 */
    case 660:  /* *iorqi_extsi_2 */
    case 659:  /* *xorqi_exthi_2 */
    case 658:  /* *iorqi_exthi_2 */
    case 586:  /* *andqi_extdi_2 */
    case 585:  /* *andqi_extsi_2 */
    case 584:  /* *andqi_exthi_2 */
    case 339:  /* *subqi_extdi_2 */
    case 338:  /* *subqi_extsi_2 */
    case 337:  /* *subqi_exthi_2 */
    case 279:  /* *addqi_extdi_2 */
    case 278:  /* *addqi_extsi_2 */
    case 277:  /* *addqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 0), 0));
      break;

    case 902:  /* *ashrqi_extdi_2 */
    case 901:  /* *lshrqi_extdi_2 */
    case 900:  /* *ashrqi_extsi_2 */
    case 899:  /* *lshrqi_extsi_2 */
    case 898:  /* *ashrqi_exthi_2 */
    case 897:  /* *lshrqi_exthi_2 */
    case 826:  /* *ashlqi_extdi_2 */
    case 825:  /* *ashlqi_extsi_2 */
    case 824:  /* *ashlqi_exthi_2 */
    case 657:  /* *xorqi_extdi_1 */
    case 656:  /* *iorqi_extdi_1 */
    case 655:  /* *xorqi_extsi_1 */
    case 654:  /* *iorqi_extsi_1 */
    case 653:  /* *xorqi_exthi_1 */
    case 652:  /* *iorqi_exthi_1 */
    case 580:  /* *andqi_extdi_1 */
    case 579:  /* *andqi_extsi_1 */
    case 578:  /* *andqi_exthi_1 */
    case 276:  /* *addqi_extdi_1 */
    case 275:  /* *addqi_extsi_1 */
    case 274:  /* *addqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 651:  /* *xorqi_extdi_0 */
    case 650:  /* *iorqi_extdi_0 */
    case 649:  /* *xorqi_extsi_0 */
    case 648:  /* *iorqi_extsi_0 */
    case 647:  /* *xorqi_exthi_0 */
    case 646:  /* *iorqi_exthi_0 */
    case 577:  /* *andqi_extdi_0 */
    case 576:  /* *andqi_extsi_0 */
    case 575:  /* *andqi_exthi_0 */
    case 273:  /* *addqi_extdi_0 */
    case 272:  /* *addqi_extsi_0 */
    case 271:  /* *addqi_exthi_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 896:  /* *ashrdi3_cconly */
    case 895:  /* *lshrdi3_cconly */
    case 894:  /* *ashrsi3_cconly */
    case 893:  /* *lshrsi3_cconly */
    case 892:  /* *ashrhi3_cconly */
    case 891:  /* *lshrhi3_cconly */
    case 890:  /* *ashrqi3_cconly */
    case 889:  /* *lshrqi3_cconly */
    case 823:  /* *ashldi3_cconly */
    case 822:  /* *ashlsi3_cconly */
    case 821:  /* *ashlhi3_cconly */
    case 820:  /* *ashlqi3_cconly */
    case 645:  /* *xordi_3 */
    case 644:  /* *iordi_3 */
    case 643:  /* *xorsi_3 */
    case 642:  /* *iorsi_3 */
    case 641:  /* *xorhi_3 */
    case 640:  /* *iorhi_3 */
    case 639:  /* *xorqi_3 */
    case 638:  /* *iorqi_3 */
    case 270:  /* *adddi_5 */
    case 269:  /* *addsi_5 */
    case 268:  /* *addhi_5 */
    case 267:  /* *addqi_5 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 266:  /* *addsi_4 */
    case 265:  /* *addhi_4 */
    case 264:  /* *addqi_4 */
    case 263:  /* *adddi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 262:  /* *addsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 261:  /* *adddi_3 */
    case 260:  /* *addsi_3 */
    case 259:  /* *addhi_3 */
    case 258:  /* *addqi_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 888:  /* *ashrsi3_cmp_zext */
    case 887:  /* *lshrsi3_cmp_zext */
    case 819:  /* *ashlsi3_cmp_zext */
    case 635:  /* *xorsi_2_zext */
    case 634:  /* *iorsi_2_zext */
    case 570:  /* *andsi_2_zext */
    case 333:  /* *subsi_2_zext */
    case 257:  /* *addsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 886:  /* *ashrdi3_cmp */
    case 885:  /* *lshrdi3_cmp */
    case 884:  /* *ashrsi3_cmp */
    case 883:  /* *lshrsi3_cmp */
    case 882:  /* *ashrhi3_cmp */
    case 881:  /* *lshrhi3_cmp */
    case 880:  /* *ashrqi3_cmp */
    case 879:  /* *lshrqi3_cmp */
    case 818:  /* *ashldi3_cmp */
    case 817:  /* *ashlsi3_cmp */
    case 816:  /* *ashlhi3_cmp */
    case 815:  /* *ashlqi3_cmp */
    case 633:  /* *xordi_2 */
    case 632:  /* *iordi_2 */
    case 631:  /* *xorsi_2 */
    case 630:  /* *iorsi_2 */
    case 629:  /* *xorhi_2 */
    case 628:  /* *iorhi_2 */
    case 627:  /* *xorqi_2 */
    case 626:  /* *iorqi_2 */
    case 574:  /* *andsi_2 */
    case 573:  /* *andhi_2 */
    case 572:  /* *andqi_2 */
    case 571:  /* *andqi_2_maybe_si */
    case 569:  /* *anddi_2 */
    case 332:  /* *subdi_2 */
    case 331:  /* *subsi_2 */
    case 330:  /* *subhi_2 */
    case 329:  /* *subqi_2 */
    case 256:  /* *adddi_2 */
    case 255:  /* *addsi_2 */
    case 254:  /* *addhi_2 */
    case 253:  /* *addqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 943:  /* *rotrhi3_1_slp */
    case 942:  /* *rotlhi3_1_slp */
    case 941:  /* *rotrqi3_1_slp */
    case 940:  /* *rotlqi3_1_slp */
    case 878:  /* *ashrhi3_1_slp */
    case 877:  /* *lshrhi3_1_slp */
    case 876:  /* *ashrqi3_1_slp */
    case 875:  /* *lshrqi3_1_slp */
    case 814:  /* *ashlhi3_1_slp */
    case 813:  /* *ashlqi3_1_slp */
    case 625:  /* *xorhi_1_slp */
    case 624:  /* *iorhi_1_slp */
    case 623:  /* *xorqi_1_slp */
    case 622:  /* *iorqi_1_slp */
    case 568:  /* *andhi_1_slp */
    case 567:  /* *andqi_1_slp */
    case 328:  /* *subhi_1_slp */
    case 327:  /* *subqi_1_slp */
    case 252:  /* *addhi_1_slp */
    case 251:  /* *addqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 1990:  /* kxnordi */
    case 1989:  /* kxnorsi */
    case 1988:  /* kxnorhi */
    case 1987:  /* kxnorqi */
    case 935:  /* *rotrsi3_1_zext */
    case 934:  /* *rotlsi3_1_zext */
    case 870:  /* *ashrsi3_1_zext */
    case 869:  /* *lshrsi3_1_zext */
    case 857:  /* *ashrsi3_cvt_zext */
    case 810:  /* *ashlsi3_1_zext */
    case 621:  /* *notxorqi_1 */
    case 616:  /* *xorsi_1_zext */
    case 615:  /* *iorsi_1_zext */
    case 609:  /* *notxordi_1 */
    case 608:  /* *notxorsi_1 */
    case 607:  /* *notxorhi_1 */
    case 563:  /* *andsi_1_zext */
    case 471:  /* *mulsi3_1_zext */
    case 401:  /* *subsi3_carry_zext_0r */
    case 400:  /* *subsi3_carry_zext_0 */
    case 326:  /* *subsi_1_zext */
    case 248:  /* addsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 447:  /* *adddi3_ne_0 */
    case 446:  /* *addsi3_ne_0 */
    case 445:  /* *addhi3_ne_0 */
    case 444:  /* *addqi3_ne_0 */
    case 443:  /* *adddi3_eq_0 */
    case 442:  /* *addsi3_eq_0 */
    case 441:  /* *addhi3_eq_0 */
    case 440:  /* *addqi3_eq_0 */
    case 245:  /* *addti3_doubleword_zext */
    case 244:  /* *adddi3_doubleword_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 2007:  /* klshiftrtdi */
    case 2006:  /* kashiftdi */
    case 2005:  /* klshiftrtsi */
    case 2004:  /* kashiftsi */
    case 2003:  /* klshiftrthi */
    case 2002:  /* kashifthi */
    case 2001:  /* klshiftrtqi */
    case 2000:  /* kashiftqi */
    case 1999:  /* kadddi */
    case 1998:  /* kaddsi */
    case 1997:  /* kaddhi */
    case 1996:  /* kaddqi */
    case 1982:  /* kxordi */
    case 1981:  /* kiordi */
    case 1980:  /* kanddi */
    case 1979:  /* kxorsi */
    case 1978:  /* kiorsi */
    case 1977:  /* kandsi */
    case 1976:  /* kxorhi */
    case 1975:  /* kiorhi */
    case 1974:  /* kandhi */
    case 1973:  /* kxorqi */
    case 1972:  /* kiorqi */
    case 1971:  /* kandqi */
    case 1755:  /* *xorv2hi3 */
    case 1754:  /* *iorv2hi3 */
    case 1753:  /* *andv2hi3 */
    case 1752:  /* *xorv2qi3 */
    case 1751:  /* *iorv2qi3 */
    case 1750:  /* *andv2qi3 */
    case 1749:  /* *xorv4qi3 */
    case 1748:  /* *iorv4qi3 */
    case 1747:  /* *andv4qi3 */
    case 1691:  /* ashrv2qi3 */
    case 1690:  /* lshrv2qi3 */
    case 1689:  /* ashlv2qi3 */
    case 1616:  /* subv2qi3 */
    case 1615:  /* addv2qi3 */
    case 1366:  /* pro_epilogue_adjust_stack_sub_di */
    case 1365:  /* pro_epilogue_adjust_stack_sub_si */
    case 1364:  /* pro_epilogue_adjust_stack_add_di */
    case 1363:  /* pro_epilogue_adjust_stack_add_si */
    case 1362:  /* *umindi3_1 */
    case 1361:  /* *umaxdi3_1 */
    case 1360:  /* *smindi3_1 */
    case 1359:  /* *smaxdi3_1 */
    case 1358:  /* *uminsi3_1 */
    case 1357:  /* *umaxsi3_1 */
    case 1356:  /* *sminsi3_1 */
    case 1355:  /* *smaxsi3_1 */
    case 1354:  /* *uminhi3_1 */
    case 1353:  /* *umaxhi3_1 */
    case 1352:  /* *sminhi3_1 */
    case 1351:  /* *smaxhi3_1 */
    case 1350:  /* *uminqi3_1 */
    case 1349:  /* *umaxqi3_1 */
    case 1348:  /* *sminqi3_1 */
    case 1347:  /* *smaxqi3_1 */
    case 1346:  /* *uminti3_doubleword */
    case 1345:  /* *umaxti3_doubleword */
    case 1344:  /* *sminti3_doubleword */
    case 1343:  /* *smaxti3_doubleword */
    case 1342:  /* *umindi3_doubleword */
    case 1341:  /* *umaxdi3_doubleword */
    case 1340:  /* *smindi3_doubleword */
    case 1339:  /* *smaxdi3_doubleword */
    case 939:  /* *rotrhi3_1 */
    case 938:  /* *rotlhi3_1 */
    case 937:  /* *rotrqi3_1 */
    case 936:  /* *rotlqi3_1 */
    case 932:  /* *rotrdi3_1 */
    case 931:  /* *rotldi3_1 */
    case 930:  /* *rotrsi3_1 */
    case 929:  /* *rotlsi3_1 */
    case 874:  /* *lshrhi3_1 */
    case 873:  /* *lshrqi3_1 */
    case 872:  /* *ashrhi3_1 */
    case 871:  /* *ashrqi3_1 */
    case 866:  /* *lshrdi3_1 */
    case 865:  /* *lshrsi3_1 */
    case 863:  /* *ashrdi3_1 */
    case 862:  /* *ashrsi3_1 */
    case 856:  /* ashrdi3_cvt */
    case 855:  /* ashrsi3_cvt */
    case 846:  /* ashrti3_doubleword */
    case 845:  /* lshrti3_doubleword */
    case 844:  /* ashrdi3_doubleword */
    case 843:  /* lshrdi3_doubleword */
    case 812:  /* *ashlqi3_1 */
    case 811:  /* *ashlhi3_1 */
    case 808:  /* *ashldi3_1 */
    case 807:  /* *ashlsi3_1 */
    case 792:  /* ashlti3_doubleword */
    case 791:  /* ashldi3_doubleword */
    case 620:  /* *xorqi_1 */
    case 619:  /* *iorqi_1 */
    case 611:  /* *xordi_1_btc */
    case 610:  /* *iordi_1_bts */
    case 606:  /* *xordi_1 */
    case 605:  /* *iordi_1 */
    case 604:  /* *xorsi_1 */
    case 603:  /* *iorsi_1 */
    case 602:  /* *xorhi_1 */
    case 601:  /* *iorhi_1 */
    case 600:  /* *xorti3_doubleword */
    case 599:  /* *iorti3_doubleword */
    case 598:  /* *xordi3_doubleword */
    case 597:  /* *iordi3_doubleword */
    case 566:  /* *andqi_1 */
    case 565:  /* *andsi_1 */
    case 564:  /* *andhi_1 */
    case 562:  /* *anddi_1_btr */
    case 561:  /* *anddi_1 */
    case 560:  /* *andti3_doubleword */
    case 559:  /* *anddi3_doubleword */
    case 472:  /* *mulqi3_1 */
    case 470:  /* *muldi3_1 */
    case 469:  /* *mulsi3_1 */
    case 468:  /* *mulhi3_1 */
    case 398:  /* *subdi3_carry_0r */
    case 397:  /* *subsi3_carry_0r */
    case 396:  /* *subhi3_carry_0r */
    case 395:  /* *subqi3_carry_0r */
    case 394:  /* *subdi3_carry_0 */
    case 393:  /* *subsi3_carry_0 */
    case 392:  /* *subhi3_carry_0 */
    case 391:  /* *subqi3_carry_0 */
    case 325:  /* *subdi_1 */
    case 324:  /* *subsi_1 */
    case 323:  /* *subhi_1 */
    case 322:  /* *subqi_1 */
    case 319:  /* *subti3_doubleword */
    case 318:  /* *subdi3_doubleword */
    case 250:  /* *addqi_1 */
    case 249:  /* *addhi_1 */
    case 247:  /* *adddi_1 */
    case 246:  /* *addsi_1 */
    case 243:  /* *addti3_doubleword */
    case 242:  /* *adddi3_doubleword */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 7292:  /* sse_stmxcsr */
    case 1480:  /* rdpid_rex64 */
    case 1479:  /* rdpid */
    case 1439:  /* rdgsbasedi */
    case 1438:  /* rdfsbasedi */
    case 1437:  /* rdgsbasesi */
    case 1436:  /* rdfsbasesi */
    case 1431:  /* lwp_slwpcbdi */
    case 1430:  /* lwp_slwpcbsi */
    case 1426:  /* fnstsw */
    case 1399:  /* fxsave64 */
    case 1398:  /* fxsave */
    case 1394:  /* rdtsc */
    case 1379:  /* *prefetch_prefetchwt1 */
    case 1227:  /* x86_fnstsw_1 */
    case 1173:  /* *load_tp_x32_zext */
    case 1172:  /* *load_tp_di */
    case 1171:  /* *load_tp_si */
    case 1037:  /* set_got_rex64 */
    case 214:  /* x86_fnstcw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 239:  /* floatunssixf2_i387_with_xmm */
    case 238:  /* floatunssidf2_i387_with_xmm */
    case 237:  /* floatunssisf2_i387_with_xmm */
    case 213:  /* fix_truncsi_i387 */
    case 212:  /* fix_trunchi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 232:  /* floatdixf2_i387_with_xmm */
    case 231:  /* floatdidf2_i387_with_xmm */
    case 230:  /* floatdisf2_i387_with_xmm */
    case 211:  /* fix_truncdi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 2036:  /* *negv2df2 */
    case 2035:  /* *absv2df2 */
    case 2034:  /* *negv4df2 */
    case 2033:  /* *absv4df2 */
    case 2032:  /* *negv8df2 */
    case 2031:  /* *absv8df2 */
    case 2030:  /* *negv4sf2 */
    case 2029:  /* *absv4sf2 */
    case 2028:  /* *negv8sf2 */
    case 2027:  /* *absv8sf2 */
    case 2026:  /* *negv16sf2 */
    case 2025:  /* *absv16sf2 */
    case 2024:  /* *negv8hf2 */
    case 2023:  /* *absv8hf2 */
    case 2022:  /* *negv16hf2 */
    case 2021:  /* *absv16hf2 */
    case 2020:  /* *negv32hf2 */
    case 2019:  /* *absv32hf2 */
    case 1539:  /* *mmx_negv2sf2 */
    case 1538:  /* *mmx_absv2sf2 */
    case 1044:  /* ffssi2_no_cmove */
    case 764:  /* *negdf2_1 */
    case 763:  /* *absdf2_1 */
    case 762:  /* *negsf2_1 */
    case 761:  /* *abssf2_1 */
    case 760:  /* *neghf2_1 */
    case 759:  /* *abshf2_1 */
    case 751:  /* *negtf2_1 */
    case 750:  /* *abstf2_1 */
    case 207:  /* fix_truncdi_i387_fisttp */
    case 206:  /* fix_truncsi_i387_fisttp */
    case 205:  /* fix_trunchi_i387_fisttp */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 200:  /* *fixuns_truncdf_1 */
    case 199:  /* *fixuns_truncsf_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 9089:  /* storedi_via_sse */
    case 9088:  /* loaddi_via_sse */
    case 9087:  /* storedi_via_fpu */
    case 9086:  /* loaddi_via_fpu */
    case 8755:  /* *conflictv2di */
    case 8753:  /* *conflictv4di */
    case 8751:  /* *conflictv8di */
    case 8749:  /* *conflictv4si */
    case 8747:  /* *conflictv8si */
    case 8745:  /* *conflictv16si */
    case 8326:  /* *avx512f_vcvtph2ps512 */
    case 8324:  /* vcvtph2ps256 */
    case 8322:  /* *vcvtph2ps_load */
    case 7813:  /* aesimc */
    case 7786:  /* xop_frczv4df2 */
    case 7785:  /* xop_frczv8sf2 */
    case 7784:  /* xop_frczv2df2 */
    case 7783:  /* xop_frczv4sf2 */
    case 7782:  /* xop_frczdf2 */
    case 7781:  /* xop_frczsf2 */
    case 7702:  /* *avx512er_rsqrt28v8df */
    case 7698:  /* *avx512er_rsqrt28v16sf */
    case 7686:  /* *avx512er_rcp28v8df */
    case 7682:  /* *avx512er_rcp28v16sf */
    case 7678:  /* avx512er_exp2v8df */
    case 7674:  /* avx512er_exp2v16sf */
    case 7440:  /* sse4_1_phminposuw */
    case 7417:  /* sse4_1_movntdqa */
    case 7416:  /* avx2_movntdqa */
    case 7415:  /* avx512f_movntdqa */
    case 7382:  /* sse4a_movntdf */
    case 7381:  /* sse4a_movntsf */
    case 7279:  /* sse2_pmovmskb */
    case 7278:  /* avx2_pmovmskb */
    case 7245:  /* sse2_movmskpd */
    case 7244:  /* avx_movmskpd256 */
    case 7243:  /* sse_movmskps */
    case 7242:  /* avx_movmskps256 */
    case 5864:  /* avx512vl_getexpv2df */
    case 5860:  /* avx512vl_getexpv4df */
    case 5856:  /* avx512f_getexpv8df */
    case 5852:  /* avx512vl_getexpv4sf */
    case 5848:  /* avx512vl_getexpv8sf */
    case 5844:  /* avx512f_getexpv16sf */
    case 5840:  /* avx512fp16_getexpv8hf */
    case 5836:  /* avx512vl_getexpv16hf */
    case 5832:  /* avx512bw_getexpv32hf */
    case 4245:  /* avx512vl_cvtq2maskv2di */
    case 4244:  /* avx512vl_cvtq2maskv4di */
    case 4243:  /* avx512f_cvtq2maskv8di */
    case 4242:  /* avx512vl_cvtd2maskv4si */
    case 4241:  /* avx512vl_cvtd2maskv8si */
    case 4240:  /* avx512f_cvtd2maskv16si */
    case 4239:  /* avx512vl_cvtw2maskv8hi */
    case 4238:  /* avx512vl_cvtw2maskv16hi */
    case 4237:  /* avx512bw_cvtw2maskv32hi */
    case 4236:  /* avx512vl_cvtb2maskv32qi */
    case 4235:  /* avx512vl_cvtb2maskv16qi */
    case 4234:  /* avx512bw_cvtb2maskv64qi */
    case 4181:  /* fixuns_notruncv2dfv2di2 */
    case 4179:  /* fixuns_notruncv4dfv4di2 */
    case 4175:  /* fixuns_notruncv8dfv8di2 */
    case 4173:  /* fix_notruncv2dfv2di2 */
    case 4171:  /* fix_notruncv4dfv4di2 */
    case 4167:  /* fix_notruncv8dfv8di2 */
    case 4129:  /* fixuns_notruncv4dfv4si2 */
    case 4125:  /* fixuns_notruncv8dfv8si2 */
    case 4119:  /* avx_cvtpd2dq256 */
    case 4115:  /* avx512f_cvtpd2dq512 */
    case 4054:  /* sse2_cvtsd2siq_2 */
    case 4053:  /* sse2_cvtsd2si_2 */
    case 4027:  /* sse2_cvtpd2pi */
    case 4009:  /* *avx512dq_cvtps2uqqv4di */
    case 4005:  /* *avx512dq_cvtps2uqqv8di */
    case 4001:  /* *avx512dq_cvtps2qqv4di */
    case 3997:  /* *avx512dq_cvtps2qqv8di */
    case 3993:  /* *avx512vl_fixuns_notruncv4sfv4si */
    case 3989:  /* *avx512vl_fixuns_notruncv8sfv8si */
    case 3985:  /* *avx512f_fixuns_notruncv16sfv16si */
    case 3981:  /* avx512f_fix_notruncv16sfv16si */
    case 3979:  /* sse2_fix_notruncv4sfv4si */
    case 3977:  /* avx_fix_notruncv8sfv8si */
    case 3945:  /* sse_cvtss2siq_2 */
    case 3944:  /* sse_cvtss2si_2 */
    case 3771:  /* avx512fp16_vcvtsh2siq_2 */
    case 3770:  /* avx512fp16_vcvtsh2usiq_2 */
    case 3769:  /* avx512fp16_vcvtsh2si_2 */
    case 3768:  /* avx512fp16_vcvtsh2usi_2 */
    case 3690:  /* avx512fp16_vcvtph2qq_v2di */
    case 3686:  /* avx512fp16_vcvtph2uqq_v2di */
    case 3682:  /* avx512fp16_vcvtph2dq_v4si */
    case 3678:  /* avx512fp16_vcvtph2udq_v4si */
    case 3674:  /* avx512fp16_vcvtph2w_v8hi */
    case 3670:  /* avx512fp16_vcvtph2uw_v8hi */
    case 3666:  /* avx512fp16_vcvtph2qq_v4di */
    case 3662:  /* avx512fp16_vcvtph2uqq_v4di */
    case 3658:  /* avx512fp16_vcvtph2dq_v8si */
    case 3654:  /* avx512fp16_vcvtph2udq_v8si */
    case 3650:  /* avx512fp16_vcvtph2w_v16hi */
    case 3646:  /* avx512fp16_vcvtph2uw_v16hi */
    case 3642:  /* avx512fp16_vcvtph2qq_v8di */
    case 3638:  /* avx512fp16_vcvtph2uqq_v8di */
    case 3634:  /* avx512fp16_vcvtph2dq_v16si */
    case 3630:  /* avx512fp16_vcvtph2udq_v16si */
    case 3626:  /* avx512fp16_vcvtph2w_v32hi */
    case 3622:  /* avx512fp16_vcvtph2uw_v32hi */
    case 2330:  /* *rsqrt14v2df */
    case 2328:  /* *rsqrt14v4df */
    case 2326:  /* *rsqrt14v8df */
    case 2324:  /* *rsqrt14v4sf */
    case 2322:  /* *rsqrt14v8sf */
    case 2320:  /* *rsqrt14v16sf */
    case 2318:  /* avx512fp16_rsqrtv8hf2 */
    case 2316:  /* avx512fp16_rsqrtv16hf2 */
    case 2314:  /* avx512fp16_rsqrtv32hf2 */
    case 2313:  /* sse_rsqrtv4sf2 */
    case 2312:  /* avx_rsqrtv8sf2 */
    case 2258:  /* *rcp14v2df */
    case 2256:  /* *rcp14v4df */
    case 2254:  /* *rcp14v8df */
    case 2252:  /* *rcp14v4sf */
    case 2250:  /* *rcp14v8sf */
    case 2248:  /* *rcp14v16sf */
    case 2243:  /* avx512fp16_rcpv8hf2 */
    case 2241:  /* avx512fp16_rcpv16hf2 */
    case 2239:  /* avx512fp16_rcpv32hf2 */
    case 2236:  /* sse_rcpv4sf2 */
    case 2235:  /* avx_rcpv8sf2 */
    case 1970:  /* sse2_movntv2di */
    case 1969:  /* avx_movntv4di */
    case 1968:  /* avx512f_movntv8di */
    case 1967:  /* sse2_movntv2df */
    case 1966:  /* avx_movntv4df */
    case 1965:  /* avx512f_movntv8df */
    case 1964:  /* sse_movntv4sf */
    case 1963:  /* avx_movntv8sf */
    case 1962:  /* avx512f_movntv16sf */
    case 1961:  /* sse2_movntidi */
    case 1960:  /* sse2_movntisi */
    case 1959:  /* sse3_lddqu */
    case 1958:  /* avx_lddqu256 */
    case 1897:  /* *avx512vl_loadv8bf */
    case 1896:  /* *avx512vl_loadv16bf */
    case 1895:  /* *avx512bw_loadv32bf */
    case 1894:  /* *avx512fp16_loadv8hf */
    case 1893:  /* *avx512vl_loadv16hf */
    case 1892:  /* *avx512bw_loadv32hf */
    case 1891:  /* *avx512vl_loadv8hi */
    case 1890:  /* *avx512vl_loadv16hi */
    case 1889:  /* *avx512bw_loadv32hi */
    case 1888:  /* *avx512vl_loadv32qi */
    case 1887:  /* *avx512vl_loadv16qi */
    case 1886:  /* *avx512bw_loadv64qi */
    case 1873:  /* *avx512vl_loadv2df */
    case 1872:  /* *avx512vl_loadv4df */
    case 1871:  /* *avx512f_loadv8df */
    case 1870:  /* *avx512vl_loadv4sf */
    case 1869:  /* *avx512vl_loadv8sf */
    case 1868:  /* *avx512f_loadv16sf */
    case 1867:  /* *avx512vl_loadv2di */
    case 1866:  /* *avx512vl_loadv4di */
    case 1865:  /* *avx512f_loadv8di */
    case 1864:  /* *avx512vl_loadv4si */
    case 1863:  /* *avx512vl_loadv8si */
    case 1862:  /* *avx512f_loadv16si */
    case 1818:  /* mmx_pmovmskb */
    case 1593:  /* lrintv2sfv2si2 */
    case 1552:  /* mmx_rsqrtv2sf2 */
    case 1548:  /* mmx_rcpv2sf2 */
    case 1537:  /* sse_movntq */
    case 1484:  /* movdiridi */
    case 1483:  /* movdirisi */
    case 1454:  /* rdsspdi */
    case 1453:  /* rdsspsi */
    case 1422:  /* xgetbv */
    case 1405:  /* xsaves */
    case 1404:  /* xsavec */
    case 1403:  /* xsaveopt */
    case 1402:  /* xsave */
    case 1392:  /* rdpmc */
    case 1272:  /* movmsk_df */
    case 1271:  /* fxamxf2_i387 */
    case 1270:  /* fxamdf2_i387 */
    case 1269:  /* fxamsf2_i387 */
    case 1248:  /* lrintxfsi2 */
    case 1247:  /* lrintxfhi2 */
    case 1245:  /* rintxf2 */
    case 1238:  /* *f2xm1xf2_i387 */
    case 1231:  /* cosxf2 */
    case 1230:  /* sinxf2 */
    case 1223:  /* rsqrthf2 */
    case 1222:  /* *rsqrtsf2_sse */
    case 1220:  /* truncxfdf2_i387_noop_unspec */
    case 1219:  /* truncxfsf2_i387_noop_unspec */
    case 1194:  /* rcphf2 */
    case 1193:  /* *rcpsf2_sse */
    case 1181:  /* *tls_dynamic_gnu2_lea_64_di */
    case 1180:  /* *tls_dynamic_gnu2_lea_64_si */
    case 179:  /* extendbfsf2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 6265:  /* *avx512f_pshufd_truncv2div2si_1 */
    case 1580:  /* mmx_pi2fw */
    case 1579:  /* mmx_pf2iw */
    case 175:  /* *extendqisi_ext_1 */
    case 174:  /* *extendqisi_ext_1 */
    case 173:  /* *extendqisi_ext_1 */
    case 172:  /* *extendqihi_ext_1 */
    case 171:  /* *extendqihi_ext_1 */
    case 170:  /* *extendqihi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 162:  /* extendditi2 */
    case 161:  /* extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 1994:  /* knotdi */
    case 1993:  /* knotsi */
    case 1992:  /* knothi */
    case 1991:  /* knotqi */
    case 1602:  /* negv2qi2 */
    case 1315:  /* *x86_movdicc_0_m1_neg */
    case 1314:  /* *x86_movsicc_0_m1_neg */
    case 1313:  /* *x86_movhicc_0_m1_neg */
    case 1312:  /* *x86_movqicc_0_m1_neg */
    case 1311:  /* *x86_movdicc_0_m1_se */
    case 1310:  /* *x86_movsicc_0_m1_se */
    case 1309:  /* *x86_movdicc_0_m1 */
    case 1308:  /* *x86_movsicc_0_m1 */
    case 1153:  /* popcounthi2 */
    case 1144:  /* popcountdi2 */
    case 1143:  /* popcountsi2 */
    case 1070:  /* clzdi2_lzcnt */
    case 1069:  /* clzsi2_lzcnt */
    case 1052:  /* ctzdi2 */
    case 1051:  /* ctzsi2 */
    case 758:  /* *negxf2_i387_1 */
    case 757:  /* *absxf2_i387_1 */
    case 756:  /* *negdf2_i387_1 */
    case 755:  /* *absdf2_i387_1 */
    case 754:  /* *negsf2_i387_1 */
    case 753:  /* *abssf2_i387_1 */
    case 745:  /* *absdi2_1 */
    case 744:  /* *abssi2_1 */
    case 743:  /* *abshi2_1 */
    case 742:  /* *absqi2_1 */
    case 739:  /* *absti2_doubleword */
    case 738:  /* *absdi2_doubleword */
    case 714:  /* *negdi_1 */
    case 713:  /* *negsi_1 */
    case 712:  /* *neghi_1 */
    case 711:  /* *negqi_1 */
    case 710:  /* *negti2_doubleword */
    case 709:  /* *negdi2_doubleword */
    case 210:  /* *fix_truncdi_i387_1 */
    case 209:  /* *fix_truncsi_i387_1 */
    case 208:  /* *fix_trunchi_i387_1 */
    case 158:  /* zero_extendqihi2_and */
    case 155:  /* zero_extendhisi2_and */
    case 154:  /* zero_extendqisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 781:  /* *one_cmplhi_1_slp */
    case 780:  /* *one_cmplqi_1_slp */
    case 133:  /* *insvqi_3 */
    case 132:  /* *insvqi_3 */
    case 131:  /* *insvqi_3 */
    case 130:  /* *insvqi_3 */
    case 129:  /* *insvqi_3 */
    case 128:  /* *insvqi_3 */
    case 127:  /* *insvqi_2 */
    case 126:  /* *insvqi_2 */
    case 125:  /* *insvqi_2 */
    case 124:  /* *insvqi_2 */
    case 123:  /* *insvqi_2 */
    case 122:  /* *insvqi_2 */
    case 121:  /* *insvqi_1 */
    case 120:  /* *insvqi_1 */
    case 119:  /* *insvqi_1 */
    case 115:  /* *insvqi_1_mem_rex64 */
    case 114:  /* *insvqi_1_mem_rex64 */
    case 113:  /* *insvqi_1_mem_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 9075:  /* vcvtneobf162ps_v16bf */
    case 9074:  /* vcvtneoph2ps_v16hf */
    case 9073:  /* vcvtneobf162ps_v8bf */
    case 9072:  /* vcvtneoph2ps_v8hf */
    case 9071:  /* vcvtneebf162ps_v16bf */
    case 9070:  /* vcvtneeph2ps_v16hf */
    case 9069:  /* vcvtneebf162ps_v8bf */
    case 9068:  /* vcvtneeph2ps_v8hf */
    case 9067:  /* vbcstnesh2ps_v4sf */
    case 9066:  /* vbcstnesh2ps_v8sf */
    case 9065:  /* vbcstnebf162ps_v4sf */
    case 9064:  /* vbcstnebf162ps_v8sf */
    case 8766:  /* avx512f_pd512_pd */
    case 8765:  /* avx512f_ps512_ps */
    case 8764:  /* avx512f_si512_si */
    case 8065:  /* avx512cd_maskw_vec_dupv4si */
    case 8064:  /* avx512cd_maskw_vec_dupv8si */
    case 8063:  /* avx512cd_maskw_vec_dupv16si */
    case 8062:  /* avx512cd_maskb_vec_dupv2di */
    case 8061:  /* avx512cd_maskb_vec_dupv4di */
    case 8060:  /* avx512cd_maskb_vec_dupv8di */
    case 8042:  /* *avx512dq_broadcastv8sf */
    case 8040:  /* *avx512dq_broadcastv16sf */
    case 8038:  /* *avx512dq_broadcastv4si */
    case 8036:  /* *avx512dq_broadcastv8si */
    case 8034:  /* *avx512dq_broadcastv16si */
    case 7947:  /* avx512vl_vec_dupv8bf */
    case 7945:  /* avx512vl_vec_dupv16bf */
    case 7943:  /* avx512bw_vec_dupv32bf */
    case 7941:  /* avx512fp16_vec_dupv8hf */
    case 7939:  /* avx512vl_vec_dupv16hf */
    case 7937:  /* avx512bw_vec_dupv32hf */
    case 7935:  /* avx512vl_vec_dupv8hi */
    case 7933:  /* avx512vl_vec_dupv16hi */
    case 7931:  /* avx512bw_vec_dupv32hi */
    case 7929:  /* avx512vl_vec_dupv32qi */
    case 7927:  /* avx512vl_vec_dupv16qi */
    case 7925:  /* avx512bw_vec_dupv64qi */
    case 7923:  /* avx512vl_vec_dupv2df */
    case 7921:  /* avx512vl_vec_dupv4df */
    case 7919:  /* avx512f_vec_dupv8df */
    case 7917:  /* avx512vl_vec_dupv4sf */
    case 7915:  /* avx512vl_vec_dupv8sf */
    case 7913:  /* avx512f_vec_dupv16sf */
    case 7911:  /* avx512vl_vec_dupv2di */
    case 7909:  /* avx512vl_vec_dupv4di */
    case 7907:  /* avx512f_vec_dupv8di */
    case 7905:  /* avx512vl_vec_dupv4si */
    case 7903:  /* avx512vl_vec_dupv8si */
    case 7901:  /* avx512f_vec_dupv16si */
    case 7900:  /* avx512bw_vec_dupv32bf_1 */
    case 7899:  /* avx512bw_vec_dupv32hf_1 */
    case 7898:  /* avx512bw_vec_dupv64qi_1 */
    case 7897:  /* avx512bw_vec_dupv32hi_1 */
    case 7896:  /* avx512f_vec_dupv8di_1 */
    case 7895:  /* avx512f_vec_dupv16si_1 */
    case 7894:  /* avx2_vec_dupv4df */
    case 7841:  /* avx2_pbroadcastv16bf_1 */
    case 7840:  /* avx2_pbroadcastv16hf_1 */
    case 7839:  /* avx2_pbroadcastv4di_1 */
    case 7838:  /* avx2_pbroadcastv8si_1 */
    case 7837:  /* avx2_pbroadcastv16hi_1 */
    case 7836:  /* avx2_pbroadcastv32qi_1 */
    case 7835:  /* avx2_pbroadcastv8bf */
    case 7834:  /* avx2_pbroadcastv16bf */
    case 7833:  /* avx2_pbroadcastv32bf */
    case 7832:  /* avx2_pbroadcastv8hf */
    case 7831:  /* avx2_pbroadcastv16hf */
    case 7830:  /* avx2_pbroadcastv32hf */
    case 7829:  /* avx2_pbroadcastv2di */
    case 7828:  /* avx2_pbroadcastv4di */
    case 7827:  /* avx2_pbroadcastv4si */
    case 7826:  /* avx2_pbroadcastv8si */
    case 7825:  /* avx2_pbroadcastv8hi */
    case 7824:  /* avx2_pbroadcastv16hi */
    case 7823:  /* avx2_pbroadcastv32hi */
    case 7822:  /* avx2_pbroadcastv16qi */
    case 7821:  /* avx2_pbroadcastv32qi */
    case 7820:  /* avx2_pbroadcastv64qi */
    case 7819:  /* avx2_pbroadcastv8di */
    case 7818:  /* avx2_pbroadcastv16si */
    case 7610:  /* sse4_1_zero_extendv2siv2di2 */
    case 7608:  /* sse4_1_sign_extendv2siv2di2 */
    case 7586:  /* sse4_1_zero_extendv2hiv2di2 */
    case 7584:  /* sse4_1_sign_extendv2hiv2di2 */
    case 7574:  /* avx2_zero_extendv4hiv4di2 */
    case 7572:  /* avx2_sign_extendv4hiv4di2 */
    case 7559:  /* sse4_1_zero_extendv2qiv2di2 */
    case 7557:  /* sse4_1_sign_extendv2qiv2di2 */
    case 7547:  /* avx2_zero_extendv4qiv4di2 */
    case 7545:  /* avx2_sign_extendv4qiv4di2 */
    case 7535:  /* avx512f_zero_extendv8qiv8di2 */
    case 7533:  /* avx512f_sign_extendv8qiv8di2 */
    case 7519:  /* sse4_1_zero_extendv4hiv4si2 */
    case 7517:  /* sse4_1_sign_extendv4hiv4si2 */
    case 7491:  /* sse4_1_zero_extendv4qiv4si2 */
    case 7489:  /* sse4_1_sign_extendv4qiv4si2 */
    case 7479:  /* avx2_zero_extendv8qiv8si2 */
    case 7477:  /* avx2_sign_extendv8qiv8si2 */
    case 7459:  /* sse4_1_zero_extendv8qiv8hi2 */
    case 7457:  /* sse4_1_sign_extendv8qiv8hi2 */
    case 7205:  /* *vec_extractv4si_0_zext */
    case 7204:  /* *vec_extractv4si_0_zext_sse4 */
    case 6292:  /* *avx512f_us_truncatev8div16qi2_store_2 */
    case 6291:  /* *avx512f_truncatev8div16qi2_store_2 */
    case 6290:  /* *avx512f_ss_truncatev8div16qi2_store_2 */
    case 6286:  /* avx512f_us_truncatev8div16qi2 */
    case 6285:  /* avx512f_truncatev8div16qi2 */
    case 6284:  /* avx512f_ss_truncatev8div16qi2 */
    case 6271:  /* *avx512vl_us_truncatev2div2si2_store_2 */
    case 6270:  /* *avx512vl_truncatev2div2si2_store_2 */
    case 6269:  /* *avx512vl_ss_truncatev2div2si2_store_2 */
    case 6249:  /* *avx512vl_us_truncatev2div2hi2_store_2 */
    case 6248:  /* *avx512vl_truncatev2div2hi2_store_2 */
    case 6247:  /* *avx512vl_ss_truncatev2div2hi2_store_2 */
    case 6219:  /* *avx512vl_us_truncatev4div4hi2_store_2 */
    case 6218:  /* *avx512vl_truncatev4div4hi2_store_2 */
    case 6217:  /* *avx512vl_ss_truncatev4div4hi2_store_2 */
    case 6216:  /* *avx512vl_us_truncatev4siv4hi2_store_2 */
    case 6215:  /* *avx512vl_truncatev4siv4hi2_store_2 */
    case 6214:  /* *avx512vl_ss_truncatev4siv4hi2_store_2 */
    case 6173:  /* *avx512vl_us_truncatev8siv8qi2_store_2 */
    case 6172:  /* *avx512vl_truncatev8siv8qi2_store_2 */
    case 6171:  /* *avx512vl_ss_truncatev8siv8qi2_store_2 */
    case 6170:  /* *avx512vl_us_truncatev8hiv8qi2_store_2 */
    case 6169:  /* *avx512vl_truncatev8hiv8qi2_store_2 */
    case 6168:  /* *avx512vl_ss_truncatev8hiv8qi2_store_2 */
    case 6137:  /* *avx512vl_us_truncatev4div4qi2_store_2 */
    case 6136:  /* *avx512vl_truncatev4div4qi2_store_2 */
    case 6135:  /* *avx512vl_ss_truncatev4div4qi2_store_2 */
    case 6134:  /* *avx512vl_us_truncatev4siv4qi2_store_2 */
    case 6133:  /* *avx512vl_truncatev4siv4qi2_store_2 */
    case 6132:  /* *avx512vl_ss_truncatev4siv4qi2_store_2 */
    case 6113:  /* *avx512vl_us_truncatev2div2qi2_store_2 */
    case 6112:  /* *avx512vl_truncatev2div2qi2_store_2 */
    case 6111:  /* *avx512vl_ss_truncatev2div2qi2_store_2 */
    case 4336:  /* *vec_setv2di_0_zero_extendsi_1 */
    case 4325:  /* *vec_setv2di_0_zero_extendhi_1 */
    case 4303:  /* avx512f_vec_dupv8df_1 */
    case 4302:  /* avx512f_vec_dupv16sf_1 */
    case 4301:  /* avx2_vec_dupv8sf_1 */
    case 4300:  /* avx2_vec_dupv4sf */
    case 4299:  /* avx2_vec_dupv8sf */
    case 4258:  /* sse2_cvtps2pd */
    case 4233:  /* vec_unpacks_lo_v16sf */
    case 4232:  /* *avx_cvtps2pd256_2 */
    case 4203:  /* sse2_cvttpd2dq */
    case 4197:  /* avx512dq_fixuns_truncv2sfv2di2 */
    case 4195:  /* avx512dq_fix_truncv2sfv2di2 */
    case 4144:  /* *fixuns_truncv2dfv2si2 */
    case 4113:  /* sse2_cvtdq2pd */
    case 4112:  /* avx_cvtdq2pd256_2 */
    case 4111:  /* avx512f_cvtdq2pd512_2 */
    case 4109:  /* *floatunsv2siv2df2 */
    case 4057:  /* sse2_cvttsd2siq */
    case 4055:  /* sse2_cvttsd2si */
    case 4047:  /* avx512f_vcvttsd2usiq */
    case 4045:  /* avx512f_vcvttsd2usi */
    case 4039:  /* avx512f_vcvttss2usiq */
    case 4037:  /* avx512f_vcvttss2usi */
    case 3948:  /* sse_cvttss2siq */
    case 3946:  /* sse_cvttss2si */
    case 3935:  /* sse_cvttps2pi */
    case 3884:  /* avx512fp16_float_extend_phv2df2 */
    case 3878:  /* avx512fp16_float_extend_phv4sf2 */
    case 3876:  /* avx512fp16_float_extend_phv4df2 */
    case 3858:  /* avx512fp16_fixuns_truncdi2 */
    case 3856:  /* avx512fp16_fix_truncdi2 */
    case 3854:  /* avx512fp16_fixuns_truncsi2 */
    case 3852:  /* avx512fp16_fix_truncsi2 */
    case 3846:  /* avx512fp16_fixuns_truncv2di2 */
    case 3844:  /* avx512fp16_fix_truncv2di2 */
    case 3834:  /* avx512fp16_fixuns_truncv4di2 */
    case 3832:  /* avx512fp16_fix_truncv4di2 */
    case 3830:  /* avx512fp16_fixuns_truncv4si2 */
    case 3828:  /* avx512fp16_fix_truncv4si2 */
    case 1811:  /* *vec_dupv2hi */
    case 1798:  /* *vec_extractv2si_1_zext */
    case 1796:  /* *vec_extractv2si_0_zext */
    case 1795:  /* *vec_extractv2si_0_zext_sse4 */
    case 1791:  /* *vec_dupv4hi */
    case 1773:  /* sse4_1_zero_extendv2qiv2hi2 */
    case 1772:  /* sse4_1_sign_extendv2qiv2hi2 */
    case 1771:  /* sse4_1_zero_extendv2hiv2si2 */
    case 1770:  /* sse4_1_sign_extendv2hiv2si2 */
    case 1769:  /* sse4_1_zero_extendv4qiv4hi2 */
    case 1768:  /* sse4_1_sign_extendv4qiv4hi2 */
    case 778:  /* *one_cmplsi2_1_zext */
    case 198:  /* *fixuns_truncdfsi2_avx512f_zext */
    case 197:  /* *fixuns_truncsfsi2_avx512f_zext */
    case 196:  /* *fixuns_trunchfsi2zext */
    case 168:  /* *extendqisi2_zext */
    case 166:  /* *extendhisi2_zext */
    case 112:  /* *extzvqi */
    case 111:  /* *extzvqi */
    case 110:  /* *extzvqi */
    case 106:  /* *extzvqi_mem_rex64 */
    case 105:  /* *extzvqi_mem_rex64 */
    case 104:  /* *extzvqi_mem_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 1008:  /* *sibcall_memory */
    case 1007:  /* *sibcall_memory */
    case 101:  /* *movstricthi_xor */
    case 100:  /* *movstrictqi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 149:  /* *swapxf */
    case 97:  /* *swaphi */
    case 96:  /* *swapqi */
    case 95:  /* swapdi */
    case 94:  /* swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 9030:  /* avx512f_cvtneps2bf16_v8sf */
    case 9028:  /* avx512f_cvtneps2bf16_v16sf */
    case 9027:  /* vcvtneps2bf16_v8sf */
    case 8844:  /* vpopcountv8hi */
    case 8842:  /* vpopcountv16hi */
    case 8840:  /* vpopcountv32hi */
    case 8838:  /* vpopcountv32qi */
    case 8836:  /* vpopcountv16qi */
    case 8834:  /* vpopcountv64qi */
    case 8824:  /* vpopcountv2di */
    case 8822:  /* vpopcountv4di */
    case 8820:  /* vpopcountv8di */
    case 8818:  /* vpopcountv4si */
    case 8816:  /* vpopcountv8si */
    case 8814:  /* vpopcountv16si */
    case 8769:  /* avx512f_pd512_256pd */
    case 8768:  /* avx512f_ps512_256ps */
    case 8767:  /* avx512f_si512_256si */
    case 8743:  /* clzv2di2 */
    case 8741:  /* clzv4di2 */
    case 8739:  /* clzv8di2 */
    case 8737:  /* clzv4si2 */
    case 8735:  /* clzv8si2 */
    case 8733:  /* clzv16si2 */
    case 8228:  /* avx_pd256_pd */
    case 8227:  /* avx_ps256_ps */
    case 8226:  /* avx_si256_si */
    case 8058:  /* *avx512dq_broadcastv4df_1 */
    case 8056:  /* *avx512dq_broadcastv4di_1 */
    case 8054:  /* *avx512dq_broadcastv8df_1 */
    case 8052:  /* *avx512dq_broadcastv8di_1 */
    case 8050:  /* *avx512dq_broadcastv16si_1 */
    case 8048:  /* *avx512dq_broadcastv16sf_1 */
    case 8046:  /* *avx512vl_broadcastv8sf_1 */
    case 8044:  /* *avx512vl_broadcastv8si_1 */
    case 8025:  /* vec_dupv4df */
    case 8024:  /* vec_dupv4di */
    case 8023:  /* vec_dupv8sf */
    case 8022:  /* vec_dupv8si */
    case 8021:  /* *vec_dupv8bf */
    case 8020:  /* *vec_dupv16bf */
    case 8019:  /* *vec_dupv8hf */
    case 8018:  /* *vec_dupv16hf */
    case 8017:  /* *vec_dupv4si */
    case 8016:  /* *vec_dupv8si */
    case 8015:  /* *vec_dupv8hi */
    case 8014:  /* *vec_dupv16hi */
    case 8013:  /* *vec_dupv16qi */
    case 8012:  /* *vec_dupv32qi */
    case 8007:  /* *vec_dupv2di */
    case 8006:  /* *vec_dupv4si */
    case 8005:  /* vec_dupv4sf */
    case 8003:  /* *avx512vl_vec_dup_gprv2df */
    case 8001:  /* *avx512vl_vec_dup_gprv4df */
    case 7999:  /* *avx512f_vec_dup_gprv8df */
    case 7997:  /* *avx512vl_vec_dup_gprv4sf */
    case 7995:  /* *avx512vl_vec_dup_gprv8sf */
    case 7993:  /* *avx512f_vec_dup_gprv16sf */
    case 7991:  /* *avx512vl_vec_dup_gprv2di */
    case 7989:  /* *avx512vl_vec_dup_gprv4di */
    case 7987:  /* *avx512f_vec_dup_gprv8di */
    case 7985:  /* *avx512vl_vec_dup_gprv4si */
    case 7983:  /* *avx512vl_vec_dup_gprv8si */
    case 7981:  /* *avx512f_vec_dup_gprv16si */
    case 7979:  /* *avx512vl_vec_dup_gprv8bf */
    case 7977:  /* *avx512vl_vec_dup_gprv16bf */
    case 7975:  /* *avx512bw_vec_dup_gprv32bf */
    case 7973:  /* *avx512fp16_vec_dup_gprv8hf */
    case 7971:  /* *avx512vl_vec_dup_gprv16hf */
    case 7969:  /* *avx512bw_vec_dup_gprv32hf */
    case 7967:  /* *avx512vl_vec_dup_gprv8hi */
    case 7965:  /* *avx512vl_vec_dup_gprv16hi */
    case 7963:  /* *avx512bw_vec_dup_gprv32hi */
    case 7961:  /* *avx512vl_vec_dup_gprv32qi */
    case 7959:  /* *avx512vl_vec_dup_gprv16qi */
    case 7957:  /* *avx512bw_vec_dup_gprv64qi */
    case 7955:  /* *avx512f_broadcastv8di */
    case 7953:  /* *avx512f_broadcastv8df */
    case 7951:  /* *avx512f_broadcastv16si */
    case 7949:  /* *avx512f_broadcastv16sf */
    case 7614:  /* *sse4_1_zero_extendv2siv2di2_1 */
    case 7612:  /* *sse4_1_sign_extendv2siv2di2_1 */
    case 7604:  /* avx2_zero_extendv4siv4di2 */
    case 7602:  /* avx2_sign_extendv4siv4di2 */
    case 7598:  /* avx512f_zero_extendv8siv8di2 */
    case 7596:  /* avx512f_sign_extendv8siv8di2 */
    case 7590:  /* *sse4_1_zero_extendv2hiv2di2_1 */
    case 7588:  /* *sse4_1_sign_extendv2hiv2di2_1 */
    case 7578:  /* *avx2_zero_extendv4hiv4di2_1 */
    case 7576:  /* *avx2_sign_extendv4hiv4di2_1 */
    case 7570:  /* avx512f_zero_extendv8hiv8di2 */
    case 7568:  /* avx512f_sign_extendv8hiv8di2 */
    case 7563:  /* *sse4_1_zero_extendv2qiv2di2_1 */
    case 7561:  /* *sse4_1_sign_extendv2qiv2di2_1 */
    case 7551:  /* *avx2_zero_extendv4qiv4di2_1 */
    case 7549:  /* *avx2_sign_extendv4qiv4di2_1 */
    case 7539:  /* *avx512f_zero_extendv8qiv8di2_1 */
    case 7537:  /* *avx512f_sign_extendv8qiv8di2_1 */
    case 7523:  /* *sse4_1_zero_extendv4hiv4si2_1 */
    case 7521:  /* *sse4_1_sign_extendv4hiv4si2_1 */
    case 7511:  /* avx2_zero_extendv8hiv8si2 */
    case 7509:  /* avx2_sign_extendv8hiv8si2 */
    case 7503:  /* avx512f_zero_extendv16hiv16si2 */
    case 7501:  /* avx512f_sign_extendv16hiv16si2 */
    case 7495:  /* *sse4_1_zero_extendv4qiv4si2_1 */
    case 7493:  /* *sse4_1_sign_extendv4qiv4si2_1 */
    case 7483:  /* *avx2_zero_extendv8qiv8si2_1 */
    case 7481:  /* *avx2_sign_extendv8qiv8si2_1 */
    case 7475:  /* *avx512f_zero_extendv16qiv16si2 */
    case 7473:  /* *avx512f_sign_extendv16qiv16si2 */
    case 7463:  /* *sse4_1_zero_extendv8qiv8hi2_1 */
    case 7461:  /* *sse4_1_sign_extendv8qiv8hi2_1 */
    case 7451:  /* avx512bw_zero_extendv32qiv32hi2 */
    case 7449:  /* avx512bw_sign_extendv32qiv32hi2 */
    case 7443:  /* avx2_zero_extendv16qiv16hi2 */
    case 7441:  /* avx2_sign_extendv16qiv16hi2 */
    case 7368:  /* *absv2di2 */
    case 7367:  /* *absv4di2 */
    case 7366:  /* *absv8di2 */
    case 7365:  /* *absv4si2 */
    case 7364:  /* *absv8si2 */
    case 7363:  /* *absv16si2 */
    case 7362:  /* *absv8hi2 */
    case 7361:  /* *absv16hi2 */
    case 7360:  /* *absv32hi2 */
    case 7359:  /* *absv16qi2 */
    case 7358:  /* *absv32qi2 */
    case 7357:  /* *absv64qi2 */
    case 7210:  /* *vec_extractv2di_1 */
    case 7203:  /* *vec_extractv2di_0_sse */
    case 7202:  /* *vec_extractv2di_0 */
    case 7201:  /* *vec_extractv4si_0 */
    case 7191:  /* *vec_extractv8hi_0_mem */
    case 7190:  /* *vec_extractv16qi_0_mem */
    case 6289:  /* *avx512f_us_truncatev8div16qi2_store_1 */
    case 6288:  /* *avx512f_truncatev8div16qi2_store_1 */
    case 6287:  /* *avx512f_ss_truncatev8div16qi2_store_1 */
    case 6268:  /* *avx512vl_us_truncatev2div2si2_store_1 */
    case 6267:  /* *avx512vl_truncatev2div2si2_store_1 */
    case 6266:  /* *avx512vl_ss_truncatev2div2si2_store_1 */
    case 6246:  /* *avx512vl_us_truncatev2div2hi2_store_1 */
    case 6245:  /* *avx512vl_truncatev2div2hi2_store_1 */
    case 6244:  /* *avx512vl_ss_truncatev2div2hi2_store_1 */
    case 6213:  /* *avx512vl_us_truncatev4div4hi2_store_1 */
    case 6212:  /* *avx512vl_truncatev4div4hi2_store_1 */
    case 6211:  /* *avx512vl_ss_truncatev4div4hi2_store_1 */
    case 6210:  /* *avx512vl_us_truncatev4siv4hi2_store_1 */
    case 6209:  /* *avx512vl_truncatev4siv4hi2_store_1 */
    case 6208:  /* *avx512vl_ss_truncatev4siv4hi2_store_1 */
    case 6167:  /* *avx512vl_us_truncatev8siv8qi2_store_1 */
    case 6166:  /* *avx512vl_truncatev8siv8qi2_store_1 */
    case 6165:  /* *avx512vl_ss_truncatev8siv8qi2_store_1 */
    case 6164:  /* *avx512vl_us_truncatev8hiv8qi2_store_1 */
    case 6163:  /* *avx512vl_truncatev8hiv8qi2_store_1 */
    case 6162:  /* *avx512vl_ss_truncatev8hiv8qi2_store_1 */
    case 6131:  /* *avx512vl_us_truncatev4div4qi2_store_1 */
    case 6130:  /* *avx512vl_truncatev4div4qi2_store_1 */
    case 6129:  /* *avx512vl_ss_truncatev4div4qi2_store_1 */
    case 6128:  /* *avx512vl_us_truncatev4siv4qi2_store_1 */
    case 6127:  /* *avx512vl_truncatev4siv4qi2_store_1 */
    case 6126:  /* *avx512vl_ss_truncatev4siv4qi2_store_1 */
    case 6110:  /* *avx512vl_us_truncatev2div2qi2_store_1 */
    case 6109:  /* *avx512vl_truncatev2div2qi2_store_1 */
    case 6108:  /* *avx512vl_ss_truncatev2div2qi2_store_1 */
    case 6080:  /* *avx512vl_us_truncatev16hiv16qi2 */
    case 6079:  /* *avx512vl_truncatev16hiv16qi2 */
    case 6078:  /* *avx512vl_ss_truncatev16hiv16qi2 */
    case 6077:  /* *avx512vl_us_truncatev8siv8hi2 */
    case 6076:  /* *avx512vl_truncatev8siv8hi2 */
    case 6075:  /* *avx512vl_ss_truncatev8siv8hi2 */
    case 6074:  /* *avx512vl_us_truncatev4div4si2 */
    case 6073:  /* *avx512vl_truncatev4div4si2 */
    case 6072:  /* *avx512vl_ss_truncatev4div4si2 */
    case 6067:  /* avx512bw_us_truncatev32hiv32qi2 */
    case 6066:  /* avx512bw_truncatev32hiv32qi2 */
    case 6065:  /* avx512bw_ss_truncatev32hiv32qi2 */
    case 6047:  /* *avx512f_us_truncatev8div8hi2 */
    case 6046:  /* *avx512f_truncatev8div8hi2 */
    case 6045:  /* *avx512f_ss_truncatev8div8hi2 */
    case 6044:  /* *avx512f_us_truncatev8div8si2 */
    case 6043:  /* *avx512f_truncatev8div8si2 */
    case 6042:  /* *avx512f_ss_truncatev8div8si2 */
    case 6041:  /* *avx512f_us_truncatev16siv16hi2 */
    case 6040:  /* *avx512f_truncatev16siv16hi2 */
    case 6039:  /* *avx512f_ss_truncatev16siv16hi2 */
    case 6038:  /* *avx512f_us_truncatev16siv16qi2 */
    case 6037:  /* *avx512f_truncatev16siv16qi2 */
    case 6036:  /* *avx512f_ss_truncatev16siv16qi2 */
    case 6031:  /* vec_dupv2df */
    case 6026:  /* *vec_extractv2df_0_sse */
    case 6025:  /* sse2_storelpd */
    case 6024:  /* *vec_extractv2df_1_sse */
    case 6023:  /* sse2_storehpd */
    case 4403:  /* *vec_extractv8bf_0 */
    case 4402:  /* *vec_extractv16bf_0 */
    case 4401:  /* *vec_extractv32bf_0 */
    case 4400:  /* *vec_extractv8hf_0 */
    case 4399:  /* *vec_extractv16hf_0 */
    case 4398:  /* *vec_extractv32hf_0 */
    case 4397:  /* vec_extract_hi_v32qi */
    case 4396:  /* vec_extract_lo_v32qi */
    case 4395:  /* vec_extract_hi_v64qi */
    case 4394:  /* vec_extract_lo_v64qi */
    case 4393:  /* vec_extract_hi_v16bf */
    case 4392:  /* vec_extract_hi_v16hf */
    case 4391:  /* vec_extract_hi_v16hi */
    case 4390:  /* vec_extract_lo_v16bf */
    case 4389:  /* vec_extract_lo_v16hf */
    case 4388:  /* vec_extract_lo_v16hi */
    case 4387:  /* vec_extract_hi_v32bf */
    case 4386:  /* vec_extract_hi_v32hf */
    case 4385:  /* vec_extract_hi_v32hi */
    case 4384:  /* vec_extract_lo_v32bf */
    case 4383:  /* vec_extract_lo_v32hf */
    case 4382:  /* vec_extract_lo_v32hi */
    case 4381:  /* vec_extract_hi_v8sf */
    case 4380:  /* vec_extract_hi_v8si */
    case 4377:  /* vec_extract_lo_v8sf */
    case 4376:  /* vec_extract_lo_v8si */
    case 4373:  /* vec_extract_hi_v4df */
    case 4372:  /* vec_extract_hi_v4di */
    case 4369:  /* vec_extract_lo_v4df */
    case 4368:  /* vec_extract_lo_v4di */
    case 4365:  /* vec_extract_lo_v16si */
    case 4364:  /* vec_extract_lo_v16sf */
    case 4361:  /* vec_extract_hi_v16si */
    case 4360:  /* vec_extract_hi_v16sf */
    case 4357:  /* vec_extract_hi_v8di */
    case 4356:  /* vec_extract_hi_v8df */
    case 4353:  /* vec_extract_lo_v8di */
    case 4352:  /* vec_extract_lo_v8df */
    case 4339:  /* *vec_extractv4sf_0 */
    case 4295:  /* sse_storelps */
    case 4293:  /* sse_storehps */
    case 4260:  /* sse2_cvtps2pd_1 */
    case 4230:  /* avx_cvtps2pd256 */
    case 4226:  /* avx512f_cvtps2pd512 */
    case 4223:  /* truncv2dfv2sf2 */
    case 4220:  /* avx_cvtpd2ps256 */
    case 4216:  /* *avx512f_cvtpd2ps512 */
    case 4201:  /* *fixuns_truncv4sfv4si2 */
    case 4199:  /* *fixuns_truncv8sfv8si2 */
    case 4193:  /* fixuns_truncv4sfv4di2 */
    case 4191:  /* fix_truncv4sfv4di2 */
    case 4187:  /* fixuns_truncv8sfv8di2 */
    case 4183:  /* fix_truncv8sfv8di2 */
    case 4165:  /* fixuns_truncv2dfv2di2 */
    case 4163:  /* fix_truncv2dfv2di2 */
    case 4161:  /* fixuns_truncv4dfv4di2 */
    case 4159:  /* fix_truncv4dfv4di2 */
    case 4155:  /* fixuns_truncv8dfv8di2 */
    case 4151:  /* fix_truncv8dfv8di2 */
    case 4149:  /* fixuns_truncv4dfv4si2 */
    case 4147:  /* fix_truncv4dfv4si2 */
    case 4140:  /* fixuns_truncv8dfv8si2 */
    case 4136:  /* fix_truncv8dfv8si2 */
    case 4107:  /* floatunsv4siv4df2 */
    case 4105:  /* floatunsv8siv8df2 */
    case 4097:  /* floatunsv4div4sf2 */
    case 4095:  /* floatv4div4sf2 */
    case 4091:  /* floatunsv8div8sf2 */
    case 4087:  /* floatv8div8sf2 */
    case 4083:  /* floatunsv2div2df2 */
    case 4079:  /* floatv2div2df2 */
    case 4075:  /* floatunsv4div4df2 */
    case 4071:  /* floatv4div4df2 */
    case 4067:  /* floatunsv8div8df2 */
    case 4063:  /* floatv8div8df2 */
    case 4061:  /* floatv4siv4df2 */
    case 4059:  /* floatv8siv8df2 */
    case 4029:  /* fixuns_truncv2dfv2si2 */
    case 4028:  /* sse2_cvttpd2pi */
    case 4026:  /* floatunsv2siv2df2 */
    case 4025:  /* sse2_cvtpi2pd */
    case 4023:  /* fix_truncv4sfv4si2 */
    case 4021:  /* fix_truncv8sfv8si2 */
    case 4017:  /* fixuns_truncv16sfv16si2 */
    case 4013:  /* fix_truncv16sfv16si2 */
    case 3973:  /* *floatunsv4siv4sf2 */
    case 3969:  /* *floatunsv8siv8sf2 */
    case 3965:  /* *floatunsv16siv16sf2 */
    case 3963:  /* floatv4siv4sf2 */
    case 3961:  /* floatv8siv8sf2 */
    case 3957:  /* floatv16siv16sf2 */
    case 3896:  /* avx512fp16_vcvtps2ph_v8sf */
    case 3892:  /* avx512fp16_vcvtps2ph_v16sf */
    case 3888:  /* avx512fp16_vcvtpd2ph_v8df */
    case 3886:  /* *avx512fp16_float_extend_phv2df2_load */
    case 3882:  /* *avx512fp16_float_extend_phv4sf2_load */
    case 3880:  /* *avx512fp16_float_extend_phv4df2_load */
    case 3872:  /* avx512fp16_float_extend_phv8sf2 */
    case 3868:  /* avx512fp16_float_extend_phv16sf2 */
    case 3864:  /* avx512fp16_float_extend_phv8df2 */
    case 3863:  /* avx512fp16_fixuns_truncdi2_mem */
    case 3862:  /* avx512fp16_fix_truncdi2_mem */
    case 3861:  /* avx512fp16_fixuns_truncsi2_mem */
    case 3860:  /* avx512fp16_fix_truncsi2_mem */
    case 3850:  /* *avx512fp16_fixuns_truncv2di2_load */
    case 3848:  /* *avx512fp16_fix_truncv2di2_load */
    case 3842:  /* *avx512fp16_fixuns_truncv4di2_load */
    case 3840:  /* *avx512fp16_fix_truncv4di2_load */
    case 3838:  /* *avx512fp16_fixuns_truncv4si2_load */
    case 3836:  /* *avx512fp16_fix_truncv4si2_load */
    case 3824:  /* avx512fp16_fixuns_truncv8di2 */
    case 3820:  /* avx512fp16_fix_truncv8di2 */
    case 3816:  /* avx512fp16_fixuns_truncv16si2 */
    case 3812:  /* avx512fp16_fix_truncv16si2 */
    case 3808:  /* avx512fp16_fixuns_truncv8si2 */
    case 3804:  /* avx512fp16_fix_truncv8si2 */
    case 3800:  /* avx512fp16_fixuns_truncv32hi2 */
    case 3796:  /* avx512fp16_fix_truncv32hi2 */
    case 3792:  /* avx512fp16_fixuns_truncv16hi2 */
    case 3788:  /* avx512fp16_fix_truncv16hi2 */
    case 3784:  /* avx512fp16_fixuns_truncv8hi2 */
    case 3780:  /* avx512fp16_fix_truncv8hi2 */
    case 3738:  /* avx512fp16_vcvtuqq2ph_v8di */
    case 3734:  /* avx512fp16_vcvtqq2ph_v8di */
    case 3730:  /* avx512fp16_vcvtudq2ph_v16si */
    case 3726:  /* avx512fp16_vcvtdq2ph_v16si */
    case 3722:  /* avx512fp16_vcvtudq2ph_v8si */
    case 3718:  /* avx512fp16_vcvtdq2ph_v8si */
    case 3714:  /* avx512fp16_vcvtuw2ph_v32hi */
    case 3710:  /* avx512fp16_vcvtw2ph_v32hi */
    case 3706:  /* avx512fp16_vcvtuw2ph_v16hi */
    case 3702:  /* avx512fp16_vcvtw2ph_v16hi */
    case 3698:  /* avx512fp16_vcvtuw2ph_v8hi */
    case 3694:  /* avx512fp16_vcvtw2ph_v8hi */
    case 2286:  /* sse2_sqrtv2df2 */
    case 2284:  /* avx_sqrtv4df2 */
    case 2280:  /* avx512f_sqrtv8df2 */
    case 2278:  /* sse_sqrtv4sf2 */
    case 2276:  /* avx_sqrtv8sf2 */
    case 2272:  /* avx512f_sqrtv16sf2 */
    case 2270:  /* avx512fp16_sqrtv8hf2 */
    case 2268:  /* avx512fp16_sqrtv16hf2 */
    case 2264:  /* avx512fp16_sqrtv32hf2 */
    case 1797:  /* *vec_extractv2si_1 */
    case 1794:  /* *vec_extractv2si_0 */
    case 1792:  /* *vec_dupv2si */
    case 1790:  /* mmx_pswapdv2si2 */
    case 1731:  /* one_cmplv2hi2 */
    case 1730:  /* one_cmplv2qi2 */
    case 1729:  /* one_cmplv4qi2 */
    case 1675:  /* absv2hi2 */
    case 1674:  /* absv2qi2 */
    case 1673:  /* absv4qi2 */
    case 1672:  /* ssse3_absv2si2 */
    case 1671:  /* ssse3_absv4hi2 */
    case 1670:  /* ssse3_absv8qi2 */
    case 1591:  /* *vec_extractv2sf_1 */
    case 1590:  /* *vec_extractv2sf_0 */
    case 1586:  /* *vec_dupv2sf */
    case 1583:  /* *mmx_movsldup */
    case 1582:  /* *mmx_movshdup */
    case 1581:  /* mmx_pswapdv2sf2 */
    case 1578:  /* floatunsv2siv2sf2 */
    case 1577:  /* mmx_floatv2siv2sf2 */
    case 1576:  /* fixuns_truncv2sfv2si2 */
    case 1575:  /* mmx_fix_truncv2sfv2si2 */
    case 1551:  /* sqrtv2sf2 */
    case 1226:  /* *sqrtdf2_sse */
    case 1225:  /* *sqrtsf2_sse */
    case 1224:  /* sqrthf2 */
    case 1221:  /* sqrtxf2 */
    case 1158:  /* *bswaphi2_movbe */
    case 1157:  /* *bswapdi2 */
    case 1156:  /* *bswapsi2 */
    case 1155:  /* *bswapdi2_movbe */
    case 1154:  /* *bswapsi2_movbe */
    case 926:  /* rotr64ti2_doubleword */
    case 925:  /* rotl64ti2_doubleword */
    case 924:  /* rotr32di2_doubleword */
    case 923:  /* rotl32di2_doubleword */
    case 779:  /* *one_cmplqi2_1 */
    case 777:  /* *one_cmpldi2_1 */
    case 776:  /* *one_cmplsi2_1 */
    case 775:  /* *one_cmplhi2_1 */
    case 774:  /* *one_cmplti2_doubleword */
    case 773:  /* *one_cmpldi2_doubleword */
    case 772:  /* *negxf2_i387 */
    case 771:  /* *absxf2_i387 */
    case 770:  /* *negdf2_i387 */
    case 769:  /* *absdf2_i387 */
    case 768:  /* *negsf2_i387 */
    case 767:  /* *abssf2_i387 */
    case 236:  /* *floatunsdidf2_avx512 */
    case 235:  /* *floatunssidf2_avx512 */
    case 234:  /* *floatunsdisf2_avx512 */
    case 233:  /* *floatunssisf2_avx512 */
    case 229:  /* *floatdidf2_i387 */
    case 228:  /* *floatdisf2_i387 */
    case 227:  /* floatunsdihf2 */
    case 226:  /* floatdihf2 */
    case 225:  /* floatunssihf2 */
    case 224:  /* floatsihf2 */
    case 223:  /* *floatdidf2 */
    case 222:  /* *floatsidf2 */
    case 221:  /* *floatdisf2 */
    case 220:  /* *floatsisf2 */
    case 219:  /* floatdixf2 */
    case 218:  /* floatsixf2 */
    case 217:  /* floathixf2 */
    case 216:  /* floathidf2 */
    case 215:  /* floathisf2 */
    case 204:  /* fix_truncdfdi_sse */
    case 203:  /* fix_truncdfsi_sse */
    case 202:  /* fix_truncsfdi_sse */
    case 201:  /* fix_truncsfsi_sse */
    case 195:  /* fixuns_truncdfsi2_avx512f */
    case 194:  /* fixuns_truncsfsi2_avx512f */
    case 193:  /* fixuns_truncdfdi2 */
    case 192:  /* fixuns_truncsfdi2 */
    case 191:  /* fixuns_trunchfdi2 */
    case 190:  /* fix_trunchfdi2 */
    case 189:  /* fixuns_trunchfsi2 */
    case 188:  /* fix_trunchfsi2 */
    case 187:  /* truncsfbf2 */
    case 186:  /* *truncdfhf2 */
    case 185:  /* *truncsfhf2 */
    case 184:  /* truncxfdf2 */
    case 183:  /* truncxfsf2 */
    case 182:  /* truncdfsf2 */
    case 181:  /* *extenddfxf2_i387 */
    case 180:  /* *extendsfxf2_i387 */
    case 178:  /* *extendhfdf2 */
    case 177:  /* *extendhfsf2 */
    case 176:  /* *extendsfdf2 */
    case 169:  /* extendqihi2 */
    case 167:  /* extendqisi2 */
    case 165:  /* extendhisi2 */
    case 164:  /* extendhidi2 */
    case 163:  /* extendqidi2 */
    case 160:  /* *extendsidi2_rex64 */
    case 159:  /* *zero_extendqihi2 */
    case 157:  /* *zero_extendhisi2 */
    case 156:  /* *zero_extendqisi2 */
    case 153:  /* zero_extendhidi2 */
    case 152:  /* zero_extendqidi2 */
    case 151:  /* *zero_extendsidi2 */
    case 150:  /* zero_extendditi2 */
    case 109:  /* *extzvdi */
    case 108:  /* *extzvsi */
    case 107:  /* *extzvhi */
    case 103:  /* *extvsi */
    case 102:  /* *extvhi */
    case 93:  /* *movabsdi_2 */
    case 92:  /* *movabssi_2 */
    case 91:  /* *movabshi_2 */
    case 90:  /* *movabsqi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 1006:  /* *sibcall */
    case 1005:  /* *sibcall */
    case 1002:  /* *call */
    case 1001:  /* *call */
    case 991:  /* *setcc_qi_slp */
    case 118:  /* insvdi_1 */
    case 117:  /* insvsi_1 */
    case 116:  /* insvhi_1 */
    case 99:  /* *movstricthi_1 */
    case 98:  /* *movstrictqi_1 */
    case 89:  /* *movabsdi_1 */
    case 88:  /* *movabssi_1 */
    case 87:  /* *movabshi_1 */
    case 86:  /* *movabsqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 987:  /* *setcc_si_1_and */
    case 986:  /* *setcc_hi_1_and */
    case 78:  /* *movdi_or */
    case 77:  /* *movsi_or */
    case 76:  /* *movhi_or */
    case 75:  /* *movdi_and */
    case 74:  /* *movsi_and */
    case 73:  /* *movhi_and */
    case 72:  /* *movdi_xor */
    case 71:  /* *movsi_xor */
    case 66:  /* *popdi1_epilogue */
    case 65:  /* *popsi1_epilogue */
    case 62:  /* *pushdi2_prologue */
    case 61:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 9012:  /* *movp2hi_internal */
    case 9011:  /* *movp2qi_internal */
    case 8795:  /* *movv64si_internal */
    case 8794:  /* *movv64sf_internal */
    case 1849:  /* movv2df_internal */
    case 1848:  /* movv4df_internal */
    case 1847:  /* movv8df_internal */
    case 1846:  /* movv4sf_internal */
    case 1845:  /* movv8sf_internal */
    case 1844:  /* movv16sf_internal */
    case 1843:  /* movv8bf_internal */
    case 1842:  /* movv16bf_internal */
    case 1841:  /* movv32bf_internal */
    case 1840:  /* movv8hf_internal */
    case 1839:  /* movv16hf_internal */
    case 1838:  /* movv32hf_internal */
    case 1837:  /* movv1ti_internal */
    case 1836:  /* movv2ti_internal */
    case 1835:  /* movv4ti_internal */
    case 1834:  /* movv2di_internal */
    case 1833:  /* movv4di_internal */
    case 1832:  /* movv8di_internal */
    case 1831:  /* movv4si_internal */
    case 1830:  /* movv8si_internal */
    case 1829:  /* movv16si_internal */
    case 1828:  /* movv8hi_internal */
    case 1827:  /* movv16hi_internal */
    case 1826:  /* movv32hi_internal */
    case 1825:  /* movv16qi_internal */
    case 1824:  /* movv32qi_internal */
    case 1823:  /* movv64qi_internal */
    case 1536:  /* *pushv2qi2 */
    case 1535:  /* *movv2qi_internal */
    case 1534:  /* *pushv2bf2_rex64 */
    case 1533:  /* *pushv2hf2_rex64 */
    case 1532:  /* *pushv1si2_rex64 */
    case 1531:  /* *pushv2hi2_rex64 */
    case 1530:  /* *pushv4qi2_rex64 */
    case 1529:  /* *movv2sf_imm */
    case 1528:  /* *movv2si_imm */
    case 1527:  /* *movv4bf_imm */
    case 1526:  /* *movv4hf_imm */
    case 1525:  /* *movv4hi_imm */
    case 1524:  /* *movv8qi_imm */
    case 1523:  /* *movv2hf_imm */
    case 1522:  /* *movv2hi_imm */
    case 1521:  /* *movv4qi_imm */
    case 1520:  /* *movv2qi_imm */
    case 1519:  /* *movv2bf_internal */
    case 1518:  /* *movv2hf_internal */
    case 1517:  /* *movv1si_internal */
    case 1516:  /* *movv2hi_internal */
    case 1515:  /* *movv4qi_internal */
    case 1514:  /* *movv4bf_internal */
    case 1513:  /* *movv4hf_internal */
    case 1512:  /* *movv2sf_internal */
    case 1511:  /* *movv1di_internal */
    case 1510:  /* *movv2si_internal */
    case 1509:  /* *movv4hi_internal */
    case 1508:  /* *movv8qi_internal */
    case 1378:  /* *prefetch_3dnow */
    case 990:  /* *setcc_qi */
    case 989:  /* *setcc_si_1_movzbl */
    case 988:  /* *setcc_hi_1_movzbl */
    case 985:  /* *setcc_di_1 */
    case 241:  /* *leadi */
    case 240:  /* *leasi */
    case 148:  /* *movbf_internal */
    case 147:  /* *movhf_internal */
    case 146:  /* *movsf_internal */
    case 145:  /* *movdf_internal */
    case 144:  /* *movxf_internal */
    case 143:  /* *movtf_internal */
    case 142:  /* *pushsf */
    case 141:  /* *pushsf_rex64 */
    case 140:  /* *pushbf */
    case 139:  /* *pushhf */
    case 138:  /* *pushbf_rex64 */
    case 137:  /* *pushhf_rex64 */
    case 136:  /* *pushdf */
    case 135:  /* *pushxf */
    case 134:  /* *pushtf */
    case 85:  /* *movqi_internal */
    case 84:  /* *movhi_internal */
    case 83:  /* *movsi_internal */
    case 82:  /* *movdi_internal */
    case 81:  /* *movti_internal */
    case 80:  /* *movoi_internal_avx */
    case 79:  /* *movxi_internal_avx512f */
    case 70:  /* *popfldi1 */
    case 69:  /* *popflsi1 */
    case 68:  /* *pushfldi2 */
    case 67:  /* *pushflsi2 */
    case 64:  /* *popdi1 */
    case 63:  /* *popsi1 */
    case 60:  /* *pushhi2 */
    case 59:  /* *pushqi2 */
    case 58:  /* *pushsi2 */
    case 57:  /* *pushsi2_rex64 */
    case 56:  /* *pushdi2_rex64 */
    case 55:  /* *pushti2 */
    case 54:  /* *pushdi2 */
    case 53:  /* *pushv1ti2 */
    case 52:  /* *pushv1ti2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 51:  /* *cmpiuhf */
    case 49:  /* *cmpiudf */
    case 47:  /* *cmpiusf */
    case 45:  /* *cmpiuxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 1161:  /* parityqi2_cmp */
    case 43:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 42:  /* *cmpuxf_i387 */
    case 41:  /* *cmpudf_i387 */
    case 40:  /* *cmpusf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0, 0), 1));
      break;

    case 39:  /* *cmpxf_si_i387 */
    case 38:  /* *cmpdf_si_i387 */
    case 37:  /* *cmpsf_si_i387 */
    case 36:  /* *cmpxf_hi_i387 */
    case 35:  /* *cmpdf_hi_i387 */
    case 34:  /* *cmpsf_hi_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1), 0));
      break;

    case 7285:  /* *sse2_pmovmskb_lt */
    case 7284:  /* *avx2_pmovmskb_lt */
    case 7257:  /* *sse2_movmskpd_lt */
    case 7256:  /* *avx_movmskpd256_lt */
    case 7255:  /* *sse_movmskps_lt */
    case 7254:  /* *avx_movmskps256_lt */
    case 33:  /* *cmpdf_i387 */
    case 32:  /* *cmpsf_i387 */
    case 31:  /* *cmpxf_i387 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 28:  /* *cmpqi_extdi_4 */
    case 27:  /* *cmpqi_extsi_4 */
    case 26:  /* *cmpqi_exthi_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 25:  /* *cmpqi_extdi_3 */
    case 24:  /* *cmpqi_extsi_3 */
    case 23:  /* *cmpqi_exthi_3 */
    case 22:  /* *cmpqi_extdi_2 */
    case 21:  /* *cmpqi_extsi_2 */
    case 20:  /* *cmpqi_exthi_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 19:  /* *cmpqi_extdi_1 */
    case 18:  /* *cmpqi_extsi_1 */
    case 17:  /* *cmpqi_exthi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 543:  /* *testsi_1 */
    case 542:  /* *testhi_1 */
    case 541:  /* *testqi_1 */
    case 540:  /* *testqi_1_maybe_si */
    case 539:  /* *testdi_1 */
    case 16:  /* *cmpdi_minus_1 */
    case 15:  /* *cmpsi_minus_1 */
    case 14:  /* *cmphi_minus_1 */
    case 13:  /* *cmpqi_minus_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 50:  /* *cmpihf */
    case 48:  /* *cmpidf */
    case 46:  /* *cmpisf */
    case 44:  /* *cmpixf_i387 */
    case 30:  /* *cmpti_doubleword */
    case 29:  /* *cmpdi_doubleword */
    case 12:  /* *cmpdi_1 */
    case 11:  /* *cmpsi_1 */
    case 10:  /* *cmphi_1 */
    case 9:  /* *cmpqi_1 */
    case 8:  /* *cmpdi_ccno_1 */
    case 7:  /* *cmpsi_ccno_1 */
    case 6:  /* *cmphi_ccno_1 */
    case 5:  /* *cmpqi_ccno_1 */
    case 4:  /* *cmpdi_ccz_1 */
    case 3:  /* *cmpsi_ccz_1 */
    case 2:  /* *cmphi_ccz_1 */
    case 1:  /* *cmpqi_ccz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    }
}
