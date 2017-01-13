/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_PKT_SCHED_H
#define __LINUX_PKT_SCHED_H
#include <linux/types.h>
#define TC_PRIO_BESTEFFORT 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TC_PRIO_FILLER 1
#define TC_PRIO_BULK 2
#define TC_PRIO_INTERACTIVE_BULK 4
#define TC_PRIO_INTERACTIVE 6
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TC_PRIO_CONTROL 7
#define TC_PRIO_MAX 15
struct tc_stats {
  __u64 bytes;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 packets;
  __u32 drops;
  __u32 overlimits;
  __u32 bps;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 pps;
  __u32 qlen;
  __u32 backlog;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tc_estimator {
  signed char interval;
  unsigned char ewma_log;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TC_H_MAJ_MASK (0xFFFF0000U)
#define TC_H_MIN_MASK (0x0000FFFFU)
#define TC_H_MAJ(h) ((h) & TC_H_MAJ_MASK)
#define TC_H_MIN(h) ((h) & TC_H_MIN_MASK)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TC_H_MAKE(maj,min) (((maj) & TC_H_MAJ_MASK) | ((min) & TC_H_MIN_MASK))
#define TC_H_UNSPEC (0U)
#define TC_H_ROOT (0xFFFFFFFFU)
#define TC_H_INGRESS (0xFFFFFFF1U)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TC_H_CLSACT TC_H_INGRESS
#define TC_H_MIN_INGRESS 0xFFF2U
#define TC_H_MIN_EGRESS 0xFFF3U
enum tc_link_layer {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TC_LINKLAYER_UNAWARE,
  TC_LINKLAYER_ETHERNET,
  TC_LINKLAYER_ATM,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TC_LINKLAYER_MASK 0x0F
struct tc_ratespec {
  unsigned char cell_log;
  __u8 linklayer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned short overhead;
  short cell_align;
  unsigned short mpu;
  __u32 rate;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define TC_RTAB_SIZE 1024
struct tc_sizespec {
  unsigned char cell_log;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char size_log;
  short cell_align;
  int overhead;
  unsigned int linklayer;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned int mpu;
  unsigned int mtu;
  unsigned int tsize;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  TCA_STAB_UNSPEC,
  TCA_STAB_BASE,
  TCA_STAB_DATA,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __TCA_STAB_MAX
};
#define TCA_STAB_MAX (__TCA_STAB_MAX - 1)
struct tc_fifo_qopt {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 limit;
};
#define TCQ_PRIO_BANDS 16
#define TCQ_MIN_PRIO_BANDS 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tc_prio_qopt {
  int bands;
  __u8 priomap[TC_PRIO_MAX + 1];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tc_multiq_qopt {
  __u16 bands;
  __u16 max_bands;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCQ_PLUG_BUFFER 0
#define TCQ_PLUG_RELEASE_ONE 1
#define TCQ_PLUG_RELEASE_INDEFINITE 2
#define TCQ_PLUG_LIMIT 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tc_plug_qopt {
  int action;
  __u32 limit;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tc_tbf_qopt {
  struct tc_ratespec rate;
  struct tc_ratespec peakrate;
  __u32 limit;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 buffer;
  __u32 mtu;
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_TBF_UNSPEC,
  TCA_TBF_PARMS,
  TCA_TBF_RTAB,
  TCA_TBF_PTAB,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_TBF_RATE64,
  TCA_TBF_PRATE64,
  TCA_TBF_BURST,
  TCA_TBF_PBURST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_TBF_PAD,
  __TCA_TBF_MAX,
};
#define TCA_TBF_MAX (__TCA_TBF_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tc_sfq_qopt {
  unsigned quantum;
  int perturb_period;
  __u32 limit;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned divisor;
  unsigned flows;
};
struct tc_sfqred_stats {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 prob_drop;
  __u32 forced_drop;
  __u32 prob_mark;
  __u32 forced_mark;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 prob_mark_head;
  __u32 forced_mark_head;
};
struct tc_sfq_qopt_v1 {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  struct tc_sfq_qopt v0;
  unsigned int depth;
  unsigned int headdrop;
  __u32 limit;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 qth_min;
  __u32 qth_max;
  unsigned char Wlog;
  unsigned char Plog;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char Scell_log;
  unsigned char flags;
  __u32 max_P;
  struct tc_sfqred_stats stats;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct tc_sfq_xstats {
  __s32 allot;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  TCA_RED_UNSPEC,
  TCA_RED_PARMS,
  TCA_RED_STAB,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_RED_MAX_P,
  __TCA_RED_MAX,
};
#define TCA_RED_MAX (__TCA_RED_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tc_red_qopt {
  __u32 limit;
  __u32 qth_min;
  __u32 qth_max;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char Wlog;
  unsigned char Plog;
  unsigned char Scell_log;
  unsigned char flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TC_RED_ECN 1
#define TC_RED_HARDDROP 2
#define TC_RED_ADAPTATIVE 4
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tc_red_xstats {
  __u32 early;
  __u32 pdrop;
  __u32 other;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 marked;
};
#define MAX_DPs 16
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_GRED_UNSPEC,
  TCA_GRED_PARMS,
  TCA_GRED_STAB,
  TCA_GRED_DPS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_GRED_MAX_P,
  TCA_GRED_LIMIT,
  __TCA_GRED_MAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCA_GRED_MAX (__TCA_GRED_MAX - 1)
struct tc_gred_qopt {
  __u32 limit;
  __u32 qth_min;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 qth_max;
  __u32 DP;
  __u32 backlog;
  __u32 qave;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 forced;
  __u32 early;
  __u32 other;
  __u32 pdrop;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 Wlog;
  __u8 Plog;
  __u8 Scell_log;
  __u8 prio;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 packets;
  __u32 bytesin;
};
struct tc_gred_sopt {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 DPs;
  __u32 def_DP;
  __u8 grio;
  __u8 flags;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 pad1;
};
enum {
  TCA_CHOKE_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_CHOKE_PARMS,
  TCA_CHOKE_STAB,
  TCA_CHOKE_MAX_P,
  __TCA_CHOKE_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define TCA_CHOKE_MAX (__TCA_CHOKE_MAX - 1)
struct tc_choke_qopt {
  __u32 limit;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 qth_min;
  __u32 qth_max;
  unsigned char Wlog;
  unsigned char Plog;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char Scell_log;
  unsigned char flags;
};
struct tc_choke_xstats {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 early;
  __u32 pdrop;
  __u32 other;
  __u32 marked;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 matched;
};
#define TC_HTB_NUMPRIO 8
#define TC_HTB_MAXDEPTH 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TC_HTB_PROTOVER 3
struct tc_htb_opt {
  struct tc_ratespec rate;
  struct tc_ratespec ceil;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 buffer;
  __u32 cbuffer;
  __u32 quantum;
  __u32 level;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 prio;
};
struct tc_htb_glob {
  __u32 version;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 rate2quantum;
  __u32 defcls;
  __u32 debug;
  __u32 direct_pkts;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
  TCA_HTB_UNSPEC,
  TCA_HTB_PARMS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_HTB_INIT,
  TCA_HTB_CTAB,
  TCA_HTB_RTAB,
  TCA_HTB_DIRECT_QLEN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_HTB_RATE64,
  TCA_HTB_CEIL64,
  TCA_HTB_PAD,
  __TCA_HTB_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define TCA_HTB_MAX (__TCA_HTB_MAX - 1)
struct tc_htb_xstats {
  __u32 lends;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 borrows;
  __u32 giants;
  __u32 tokens;
  __u32 ctokens;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct tc_hfsc_qopt {
  __u16 defcls;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tc_service_curve {
  __u32 m1;
  __u32 d;
  __u32 m2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct tc_hfsc_stats {
  __u64 work;
  __u64 rtwork;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 period;
  __u32 level;
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_HFSC_UNSPEC,
  TCA_HFSC_RSC,
  TCA_HFSC_FSC,
  TCA_HFSC_USC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __TCA_HFSC_MAX,
};
#define TCA_HFSC_MAX (__TCA_HFSC_MAX - 1)
#define TC_CBQ_MAXPRIO 8
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TC_CBQ_MAXLEVEL 8
#define TC_CBQ_DEF_EWMA 5
struct tc_cbq_lssopt {
  unsigned char change;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char flags;
#define TCF_CBQ_LSS_BOUNDED 1
#define TCF_CBQ_LSS_ISOLATED 2
  unsigned char ewma_log;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char level;
#define TCF_CBQ_LSS_FLAGS 1
#define TCF_CBQ_LSS_EWMA 2
#define TCF_CBQ_LSS_MAXIDLE 4
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCF_CBQ_LSS_MINIDLE 8
#define TCF_CBQ_LSS_OFFTIME 0x10
#define TCF_CBQ_LSS_AVPKT 0x20
  __u32 maxidle;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 minidle;
  __u32 offtime;
  __u32 avpkt;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tc_cbq_wrropt {
  unsigned char flags;
  unsigned char priority;
  unsigned char cpriority;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char __reserved;
  __u32 allot;
  __u32 weight;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tc_cbq_ovl {
  unsigned char strategy;
#define TC_CBQ_OVL_CLASSIC 0
#define TC_CBQ_OVL_DELAY 1
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TC_CBQ_OVL_LOWPRIO 2
#define TC_CBQ_OVL_DROP 3
#define TC_CBQ_OVL_RCLASSIC 4
  unsigned char priority2;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u16 pad;
  __u32 penalty;
};
struct tc_cbq_police {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char police;
  unsigned char __res1;
  unsigned short __res2;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tc_cbq_fopt {
  __u32 split;
  __u32 defmap;
  __u32 defchange;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
struct tc_cbq_xstats {
  __u32 borrows;
  __u32 overactions;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __s32 avgidle;
  __s32 undertime;
};
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_CBQ_UNSPEC,
  TCA_CBQ_LSSOPT,
  TCA_CBQ_WRROPT,
  TCA_CBQ_FOPT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_CBQ_OVL_STRATEGY,
  TCA_CBQ_RATE,
  TCA_CBQ_RTAB,
  TCA_CBQ_POLICE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __TCA_CBQ_MAX,
};
#define TCA_CBQ_MAX (__TCA_CBQ_MAX - 1)
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_DSMARK_UNSPEC,
  TCA_DSMARK_INDICES,
  TCA_DSMARK_DEFAULT_INDEX,
  TCA_DSMARK_SET_TC_INDEX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_DSMARK_MASK,
  TCA_DSMARK_VALUE,
  __TCA_DSMARK_MAX,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCA_DSMARK_MAX (__TCA_DSMARK_MAX - 1)
enum {
  TCA_ATM_UNSPEC,
  TCA_ATM_FD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_ATM_PTR,
  TCA_ATM_HDR,
  TCA_ATM_EXCESS,
  TCA_ATM_ADDR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_ATM_STATE,
  __TCA_ATM_MAX,
};
#define TCA_ATM_MAX (__TCA_ATM_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  TCA_NETEM_UNSPEC,
  TCA_NETEM_CORR,
  TCA_NETEM_DELAY_DIST,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_NETEM_REORDER,
  TCA_NETEM_CORRUPT,
  TCA_NETEM_LOSS,
  TCA_NETEM_RATE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_NETEM_ECN,
  TCA_NETEM_RATE64,
  TCA_NETEM_PAD,
  __TCA_NETEM_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define TCA_NETEM_MAX (__TCA_NETEM_MAX - 1)
struct tc_netem_qopt {
  __u32 latency;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 limit;
  __u32 loss;
  __u32 gap;
  __u32 duplicate;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 jitter;
};
struct tc_netem_corr {
  __u32 delay_corr;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 loss_corr;
  __u32 dup_corr;
};
struct tc_netem_reorder {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 probability;
  __u32 correlation;
};
struct tc_netem_corrupt {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 probability;
  __u32 correlation;
};
struct tc_netem_rate {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 rate;
  __s32 packet_overhead;
  __u32 cell_size;
  __s32 cell_overhead;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
  NETEM_LOSS_UNSPEC,
  NETEM_LOSS_GI,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  NETEM_LOSS_GE,
  __NETEM_LOSS_MAX
};
#define NETEM_LOSS_MAX (__NETEM_LOSS_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tc_netem_gimodel {
  __u32 p13;
  __u32 p31;
  __u32 p32;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 p14;
  __u32 p23;
};
struct tc_netem_gemodel {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 p;
  __u32 r;
  __u32 h;
  __u32 k1;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define NETEM_DIST_SCALE 8192
#define NETEM_DIST_MAX 16384
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_DRR_UNSPEC,
  TCA_DRR_QUANTUM,
  __TCA_DRR_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCA_DRR_MAX (__TCA_DRR_MAX - 1)
struct tc_drr_stats {
  __u32 deficit;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TC_QOPT_BITMASK 15
#define TC_QOPT_MAX_QUEUE 16
struct tc_mqprio_qopt {
  __u8 num_tc;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u8 prio_tc_map[TC_QOPT_BITMASK + 1];
  __u8 hw;
  __u16 count[TC_QOPT_MAX_QUEUE];
  __u16 offset[TC_QOPT_MAX_QUEUE];
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
  TCA_SFB_UNSPEC,
  TCA_SFB_PARMS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __TCA_SFB_MAX,
};
#define TCA_SFB_MAX (__TCA_SFB_MAX - 1)
struct tc_sfb_qopt {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 rehash_interval;
  __u32 warmup_time;
  __u32 max;
  __u32 bin_size;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 increment;
  __u32 decrement;
  __u32 limit;
  __u32 penalty_rate;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 penalty_burst;
};
struct tc_sfb_xstats {
  __u32 earlydrop;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 penaltydrop;
  __u32 bucketdrop;
  __u32 queuedrop;
  __u32 childdrop;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 marked;
  __u32 maxqlen;
  __u32 maxprob;
  __u32 avgprob;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define SFB_MAX_PROB 0xFFFF
enum {
  TCA_QFQ_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_QFQ_WEIGHT,
  TCA_QFQ_LMAX,
  __TCA_QFQ_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define TCA_QFQ_MAX (__TCA_QFQ_MAX - 1)
struct tc_qfq_stats {
  __u32 weight;
  __u32 lmax;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum {
  TCA_CODEL_UNSPEC,
  TCA_CODEL_TARGET,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_CODEL_LIMIT,
  TCA_CODEL_INTERVAL,
  TCA_CODEL_ECN,
  TCA_CODEL_CE_THRESHOLD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __TCA_CODEL_MAX
};
#define TCA_CODEL_MAX (__TCA_CODEL_MAX - 1)
struct tc_codel_xstats {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 maxpacket;
  __u32 count;
  __u32 lastcount;
  __u32 ldelay;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __s32 drop_next;
  __u32 drop_overlimit;
  __u32 ecn_mark;
  __u32 dropping;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 ce_mark;
};
enum {
  TCA_FQ_CODEL_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_FQ_CODEL_TARGET,
  TCA_FQ_CODEL_LIMIT,
  TCA_FQ_CODEL_INTERVAL,
  TCA_FQ_CODEL_ECN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_FQ_CODEL_FLOWS,
  TCA_FQ_CODEL_QUANTUM,
  TCA_FQ_CODEL_CE_THRESHOLD,
  TCA_FQ_CODEL_DROP_BATCH_SIZE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_FQ_CODEL_MEMORY_LIMIT,
  __TCA_FQ_CODEL_MAX
};
#define TCA_FQ_CODEL_MAX (__TCA_FQ_CODEL_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  TCA_FQ_CODEL_XSTATS_QDISC,
  TCA_FQ_CODEL_XSTATS_CLASS,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tc_fq_codel_qd_stats {
  __u32 maxpacket;
  __u32 drop_overlimit;
  __u32 ecn_mark;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 new_flow_count;
  __u32 new_flows_len;
  __u32 old_flows_len;
  __u32 ce_mark;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 memory_usage;
  __u32 drop_overmemory;
};
struct tc_fq_codel_cl_stats {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __s32 deficit;
  __u32 ldelay;
  __u32 count;
  __u32 lastcount;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 dropping;
  __s32 drop_next;
};
struct tc_fq_codel_xstats {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 type;
  union {
    struct tc_fq_codel_qd_stats qdisc_stats;
    struct tc_fq_codel_cl_stats class_stats;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  };
};
enum {
  TCA_FQ_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_FQ_PLIMIT,
  TCA_FQ_FLOW_PLIMIT,
  TCA_FQ_QUANTUM,
  TCA_FQ_INITIAL_QUANTUM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_FQ_RATE_ENABLE,
  TCA_FQ_FLOW_DEFAULT_RATE,
  TCA_FQ_FLOW_MAX_RATE,
  TCA_FQ_BUCKETS_LOG,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_FQ_FLOW_REFILL_DELAY,
  TCA_FQ_ORPHAN_MASK,
  TCA_FQ_LOW_RATE_THRESHOLD,
  __TCA_FQ_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define TCA_FQ_MAX (__TCA_FQ_MAX - 1)
struct tc_fq_qd_stats {
  __u64 gc_flows;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 highprio_packets;
  __u64 tcp_retrans;
  __u64 throttled;
  __u64 flows_plimit;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u64 pkts_too_long;
  __u64 allocation_errors;
  __s64 time_next_delayed_flow;
  __u32 flows;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 inactive_flows;
  __u32 throttled_flows;
  __u32 unthrottle_latency_ns;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum {
  TCA_HHF_UNSPEC,
  TCA_HHF_BACKLOG_LIMIT,
  TCA_HHF_QUANTUM,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_HHF_HH_FLOWS_LIMIT,
  TCA_HHF_RESET_TIMEOUT,
  TCA_HHF_ADMIT_BYTES,
  TCA_HHF_EVICT_TIMEOUT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_HHF_NON_HH_WEIGHT,
  __TCA_HHF_MAX
};
#define TCA_HHF_MAX (__TCA_HHF_MAX - 1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct tc_hhf_xstats {
  __u32 drop_overlimit;
  __u32 hh_overlimit;
  __u32 hh_tot_count;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 hh_cur_count;
};
enum {
  TCA_PIE_UNSPEC,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_PIE_TARGET,
  TCA_PIE_LIMIT,
  TCA_PIE_TUPDATE,
  TCA_PIE_ALPHA,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  TCA_PIE_BETA,
  TCA_PIE_ECN,
  TCA_PIE_BYTEMODE,
  __TCA_PIE_MAX
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define TCA_PIE_MAX (__TCA_PIE_MAX - 1)
struct tc_pie_xstats {
  __u32 prob;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 delay;
  __u32 avg_dq_rate;
  __u32 packets_in;
  __u32 dropped;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 overlimit;
  __u32 maxq;
  __u32 ecn_mark;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
