/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Mehrshad/Desktop/CAD-CA3/CAD-CA3-91337/VendingMachine/CommunicationProtocol.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


static void work_a_3659353238_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5000);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t7 = (t0 + 3272U);
    t8 = *((char **)t7);
    t7 = (t0 + 5096);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t8, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB5:    t2 = (t0 + 1152U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

}

static void work_a_3659353238_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    int t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    int t26;
    int t27;
    char *t28;

LAB0:    t1 = (t0 + 4680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 9060);
    t5 = 1;
    if (4U == 4U)
        goto LAB7;

LAB8:    t5 = 0;

LAB9:    if (t5 != 0)
        goto LAB4;

LAB6:    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 9068);
    t5 = 1;
    if (4U == 4U)
        goto LAB66;

LAB67:    t5 = 0;

LAB68:    if (t5 != 0)
        goto LAB64;

LAB65:    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 9076);
    t5 = 1;
    if (4U == 4U)
        goto LAB74;

LAB75:    t5 = 0;

LAB76:    if (t5 != 0)
        goto LAB72;

LAB73:    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 9084);
    t5 = 1;
    if (4U == 4U)
        goto LAB82;

LAB83:    t5 = 0;

LAB84:    if (t5 != 0)
        goto LAB80;

LAB81:    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 9092);
    t5 = 1;
    if (4U == 4U)
        goto LAB90;

LAB91:    t5 = 0;

LAB92:    if (t5 != 0)
        goto LAB88;

LAB89:    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 9100);
    t5 = 1;
    if (4U == 4U)
        goto LAB98;

LAB99:    t5 = 0;

LAB100:    if (t5 != 0)
        goto LAB96;

LAB97:    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 9108);
    t5 = 1;
    if (4U == 4U)
        goto LAB106;

LAB107:    t5 = 0;

LAB108:    if (t5 != 0)
        goto LAB104;

LAB105:    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 9116);
    t5 = 1;
    if (4U == 4U)
        goto LAB114;

LAB115:    t5 = 0;

LAB116:    if (t5 != 0)
        goto LAB112;

LAB113:    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 9124);
    t5 = 1;
    if (4U == 4U)
        goto LAB122;

LAB123:    t5 = 0;

LAB124:    if (t5 != 0)
        goto LAB120;

LAB121:    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 9132);
    t5 = 1;
    if (4U == 4U)
        goto LAB130;

LAB131:    t5 = 0;

LAB132:    if (t5 != 0)
        goto LAB128;

LAB129:
LAB5:    xsi_set_current_line(118, ng0);

LAB171:    t2 = (t0 + 5016);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB172;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);
    t9 = (t0 + 1512U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)3);
    if (t12 != 0)
        goto LAB13;

LAB15:
LAB14:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t17 = (0 - 3);
    t6 = (t17 * -1);
    t18 = (1U * t6);
    t19 = (0 + t18);
    t2 = (t3 + t19);
    t5 = *((unsigned char *)t2);
    t11 = (t5 == (unsigned char)3);
    if (t11 != 0)
        goto LAB16;

LAB18:    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t17 = (1 - 3);
    t6 = (t17 * -1);
    t18 = (1U * t6);
    t19 = (0 + t18);
    t2 = (t3 + t19);
    t5 = *((unsigned char *)t2);
    t11 = (t5 == (unsigned char)3);
    if (t11 != 0)
        goto LAB28;

LAB29:    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t17 = (2 - 3);
    t6 = (t17 * -1);
    t18 = (1U * t6);
    t19 = (0 + t18);
    t2 = (t3 + t19);
    t5 = *((unsigned char *)t2);
    t11 = (t5 == (unsigned char)3);
    if (t11 != 0)
        goto LAB39;

LAB40:    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t17 = (3 - 3);
    t6 = (t17 * -1);
    t18 = (1U * t6);
    t19 = (0 + t18);
    t2 = (t3 + t19);
    t5 = *((unsigned char *)t2);
    t11 = (t5 == (unsigned char)3);
    if (t11 != 0)
        goto LAB50;

LAB51:
LAB17:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t5 = *((unsigned char *)t3);
    t11 = (t5 == (unsigned char)3);
    if (t11 != 0)
        goto LAB61;

LAB63:
LAB62:    goto LAB5;

LAB7:    t6 = 0;

LAB10:    if (t6 < 4U)
        goto LAB11;
    else
        goto LAB9;

LAB11:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB8;

LAB12:    t6 = (t6 + 1);
    goto LAB10;

LAB13:    xsi_set_current_line(56, ng0);
    t9 = (t0 + 5160);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = 0;
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5224);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 5288);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5352);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB14;

LAB16:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1832U);
    t7 = *((char **)t4);
    t21 = *((int *)t7);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB25;

LAB26:    t20 = (unsigned char)0;

LAB27:    if (t20 == 1)
        goto LAB22;

LAB23:    t12 = (unsigned char)0;

LAB24:    if (t12 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB17;

LAB19:    xsi_set_current_line(63, ng0);
    t9 = (t0 + 1832U);
    t10 = *((char **)t9);
    t26 = *((int *)t10);
    t27 = (t26 - 1);
    t9 = (t0 + 5160);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t27;
    xsi_driver_first_trans_fast_port(t9);
    goto LAB20;

LAB22:    t4 = (t0 + 1152U);
    t25 = xsi_signal_has_event(t4);
    t12 = t25;
    goto LAB24;

LAB25:    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t23 = *((unsigned char *)t8);
    t24 = (t23 == (unsigned char)3);
    t20 = t24;
    goto LAB27;

LAB28:    xsi_set_current_line(66, ng0);
    t4 = (t0 + 1992U);
    t7 = *((char **)t4);
    t21 = *((int *)t7);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB36;

LAB37:    t20 = (unsigned char)0;

LAB38:    if (t20 == 1)
        goto LAB33;

LAB34:    t12 = (unsigned char)0;

LAB35:    if (t12 != 0)
        goto LAB30;

LAB32:
LAB31:    goto LAB17;

LAB30:    xsi_set_current_line(67, ng0);
    t9 = (t0 + 1992U);
    t10 = *((char **)t9);
    t26 = *((int *)t10);
    t27 = (t26 - 1);
    t9 = (t0 + 5224);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t27;
    xsi_driver_first_trans_fast_port(t9);
    goto LAB31;

LAB33:    t4 = (t0 + 1152U);
    t25 = xsi_signal_has_event(t4);
    t12 = t25;
    goto LAB35;

LAB36:    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t23 = *((unsigned char *)t8);
    t24 = (t23 == (unsigned char)3);
    t20 = t24;
    goto LAB38;

LAB39:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 2152U);
    t7 = *((char **)t4);
    t21 = *((int *)t7);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB47;

LAB48:    t20 = (unsigned char)0;

LAB49:    if (t20 == 1)
        goto LAB44;

LAB45:    t12 = (unsigned char)0;

LAB46:    if (t12 != 0)
        goto LAB41;

LAB43:
LAB42:    goto LAB17;

LAB41:    xsi_set_current_line(71, ng0);
    t9 = (t0 + 2152U);
    t10 = *((char **)t9);
    t26 = *((int *)t10);
    t27 = (t26 - 1);
    t9 = (t0 + 5288);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t27;
    xsi_driver_first_trans_fast_port(t9);
    goto LAB42;

LAB44:    t4 = (t0 + 1152U);
    t25 = xsi_signal_has_event(t4);
    t12 = t25;
    goto LAB46;

LAB47:    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t23 = *((unsigned char *)t8);
    t24 = (t23 == (unsigned char)3);
    t20 = t24;
    goto LAB49;

LAB50:    xsi_set_current_line(74, ng0);
    t4 = (t0 + 2312U);
    t7 = *((char **)t4);
    t21 = *((int *)t7);
    t22 = (t21 != 0);
    if (t22 == 1)
        goto LAB58;

LAB59:    t20 = (unsigned char)0;

LAB60:    if (t20 == 1)
        goto LAB55;

LAB56:    t12 = (unsigned char)0;

LAB57:    if (t12 != 0)
        goto LAB52;

LAB54:
LAB53:    goto LAB17;

LAB52:    xsi_set_current_line(75, ng0);
    t9 = (t0 + 2312U);
    t10 = *((char **)t9);
    t26 = *((int *)t10);
    t27 = (t26 - 1);
    t9 = (t0 + 5352);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t27;
    xsi_driver_first_trans_fast_port(t9);
    goto LAB53;

LAB55:    t4 = (t0 + 1152U);
    t25 = xsi_signal_has_event(t4);
    t12 = t25;
    goto LAB57;

LAB58:    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t23 = *((unsigned char *)t8);
    t24 = (t23 == (unsigned char)3);
    t20 = t24;
    goto LAB60;

LAB61:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 5416);
    t4 = (t2 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 9064);
    t4 = (t0 + 5480);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB62;

LAB64:    xsi_set_current_line(83, ng0);
    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t9 = (t0 + 5544);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t9, 1U, 1, 0LL);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 9072);
    t4 = (t0 + 5480);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB66:    t6 = 0;

LAB69:    if (t6 < 4U)
        goto LAB70;
    else
        goto LAB68;

LAB70:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB67;

LAB71:    t6 = (t6 + 1);
    goto LAB69;

LAB72:    xsi_set_current_line(86, ng0);
    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t9 = (t0 + 5544);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t9, 0U, 1, 0LL);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 9080);
    t4 = (t0 + 5480);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB74:    t6 = 0;

LAB77:    if (t6 < 4U)
        goto LAB78;
    else
        goto LAB76;

LAB78:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB75;

LAB79:    t6 = (t6 + 1);
    goto LAB77;

LAB80:    xsi_set_current_line(89, ng0);
    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t9 = (t0 + 5608);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t9, 2U, 1, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 9088);
    t4 = (t0 + 5480);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB82:    t6 = 0;

LAB85:    if (t6 < 4U)
        goto LAB86;
    else
        goto LAB84;

LAB86:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB83;

LAB87:    t6 = (t6 + 1);
    goto LAB85;

LAB88:    xsi_set_current_line(92, ng0);
    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t9 = (t0 + 5608);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t9, 1U, 1, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 9096);
    t4 = (t0 + 5480);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB90:    t6 = 0;

LAB93:    if (t6 < 4U)
        goto LAB94;
    else
        goto LAB92;

LAB94:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB91;

LAB95:    t6 = (t6 + 1);
    goto LAB93;

LAB96:    xsi_set_current_line(95, ng0);
    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t9 = (t0 + 5608);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t9, 0U, 1, 0LL);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 9104);
    t4 = (t0 + 5480);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB98:    t6 = 0;

LAB101:    if (t6 < 4U)
        goto LAB102;
    else
        goto LAB100;

LAB102:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB99;

LAB103:    t6 = (t6 + 1);
    goto LAB101;

LAB104:    xsi_set_current_line(98, ng0);
    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t9 = (t0 + 5672);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t9, 2U, 1, 0LL);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 9112);
    t4 = (t0 + 5480);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB106:    t6 = 0;

LAB109:    if (t6 < 4U)
        goto LAB110;
    else
        goto LAB108;

LAB110:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB107;

LAB111:    t6 = (t6 + 1);
    goto LAB109;

LAB112:    xsi_set_current_line(101, ng0);
    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t9 = (t0 + 5672);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t9, 1U, 1, 0LL);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 9120);
    t4 = (t0 + 5480);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB114:    t6 = 0;

LAB117:    if (t6 < 4U)
        goto LAB118;
    else
        goto LAB116;

LAB118:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB115;

LAB119:    t6 = (t6 + 1);
    goto LAB117;

LAB120:    xsi_set_current_line(104, ng0);
    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t9 = (t0 + 5672);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t11;
    xsi_driver_first_trans_delta(t9, 0U, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 9128);
    t4 = (t0 + 5480);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB5;

LAB122:    t6 = 0;

LAB125:    if (t6 < 4U)
        goto LAB126;
    else
        goto LAB124;

LAB126:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB123;

LAB127:    t6 = (t6 + 1);
    goto LAB125;

LAB128:    xsi_set_current_line(107, ng0);
    t9 = (t0 + 9136);
    t13 = (t0 + 5480);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t28 = *((char **)t16);
    memcpy(t28, t9, 4U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 9140);
    t5 = 1;
    if (2U == 2U)
        goto LAB139;

LAB140:    t5 = 0;

LAB141:    if (t5 != 0)
        goto LAB136;

LAB138:    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 9142);
    t5 = 1;
    if (2U == 2U)
        goto LAB147;

LAB148:    t5 = 0;

LAB149:    if (t5 != 0)
        goto LAB145;

LAB146:    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 9144);
    t5 = 1;
    if (2U == 2U)
        goto LAB155;

LAB156:    t5 = 0;

LAB157:    if (t5 != 0)
        goto LAB153;

LAB154:    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t2 = (t0 + 9146);
    t5 = 1;
    if (2U == 2U)
        goto LAB163;

LAB164:    t5 = 0;

LAB165:    if (t5 != 0)
        goto LAB161;

LAB162:
LAB137:    goto LAB5;

LAB130:    t6 = 0;

LAB133:    if (t6 < 4U)
        goto LAB134;
    else
        goto LAB132;

LAB134:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB131;

LAB135:    t6 = (t6 + 1);
    goto LAB133;

LAB136:    xsi_set_current_line(109, ng0);
    t9 = (t0 + 2792U);
    t10 = *((char **)t9);
    t9 = (t0 + 8964U);
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t10, t9);
    t13 = (t0 + 5160);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t28 = *((char **)t16);
    *((int *)t28) = t17;
    xsi_driver_first_trans_fast_port(t13);
    goto LAB137;

LAB139:    t6 = 0;

LAB142:    if (t6 < 2U)
        goto LAB143;
    else
        goto LAB141;

LAB143:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB140;

LAB144:    t6 = (t6 + 1);
    goto LAB142;

LAB145:    xsi_set_current_line(111, ng0);
    t9 = (t0 + 2792U);
    t10 = *((char **)t9);
    t9 = (t0 + 8964U);
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t10, t9);
    t13 = (t0 + 5224);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t28 = *((char **)t16);
    *((int *)t28) = t17;
    xsi_driver_first_trans_fast_port(t13);
    goto LAB137;

LAB147:    t6 = 0;

LAB150:    if (t6 < 2U)
        goto LAB151;
    else
        goto LAB149;

LAB151:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB148;

LAB152:    t6 = (t6 + 1);
    goto LAB150;

LAB153:    xsi_set_current_line(113, ng0);
    t9 = (t0 + 2792U);
    t10 = *((char **)t9);
    t9 = (t0 + 8964U);
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t10, t9);
    t13 = (t0 + 5288);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t28 = *((char **)t16);
    *((int *)t28) = t17;
    xsi_driver_first_trans_fast_port(t13);
    goto LAB137;

LAB155:    t6 = 0;

LAB158:    if (t6 < 2U)
        goto LAB159;
    else
        goto LAB157;

LAB159:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB156;

LAB160:    t6 = (t6 + 1);
    goto LAB158;

LAB161:    xsi_set_current_line(115, ng0);
    t9 = (t0 + 2792U);
    t10 = *((char **)t9);
    t9 = (t0 + 8964U);
    t17 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t10, t9);
    t13 = (t0 + 5352);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t28 = *((char **)t16);
    *((int *)t28) = t17;
    xsi_driver_first_trans_fast_port(t13);
    goto LAB137;

LAB163:    t6 = 0;

LAB166:    if (t6 < 2U)
        goto LAB167;
    else
        goto LAB165;

LAB167:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB164;

LAB168:    t6 = (t6 + 1);
    goto LAB166;

LAB169:    t3 = (t0 + 5016);
    *((int *)t3) = 0;
    goto LAB2;

LAB170:    goto LAB169;

LAB172:    goto LAB170;

}


extern void work_a_3659353238_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3659353238_3212880686_p_0,(void *)work_a_3659353238_3212880686_p_1};
	xsi_register_didat("work_a_3659353238_3212880686", "isim/x_isim_beh.exe.sim/work/a_3659353238_3212880686.didat");
	xsi_register_executes(pe);
}
