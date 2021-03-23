/*
 * IDENTIFICATION:
 * stub generated Mon Mar 22 18:02:41 2021
 * with a MiG generated by bootstrap_cmds-117
 * OPTIONS: 
 *	KernelServer
 */

/* Module clock_priv */

#define	__MIG_check__Request__clock_priv_subsystem__ 1

#include "clock_priv_server.h"

#ifndef	mig_internal
#define	mig_internal	static __inline__
#endif	/* mig_internal */

#ifndef	mig_external
#define mig_external
#endif	/* mig_external */

#if	!defined(__MigTypeCheck) && defined(TypeCheck)
#define	__MigTypeCheck		TypeCheck	/* Legacy setting */
#endif	/* !defined(__MigTypeCheck) */

#if	!defined(__MigKernelSpecificCode) && defined(_MIG_KERNEL_SPECIFIC_CODE_)
#define	__MigKernelSpecificCode	_MIG_KERNEL_SPECIFIC_CODE_	/* Legacy setting */
#endif	/* !defined(__MigKernelSpecificCode) */

#ifndef	LimitCheck
#define	LimitCheck 0
#endif	/* LimitCheck */

#ifndef	min
#define	min(a,b)  ( ((a) < (b))? (a): (b) )
#endif	/* min */

#if !defined(_WALIGN_)
#define _WALIGN_(x) (((x) + 3) & ~3)
#endif /* !defined(_WALIGN_) */

#if !defined(_WALIGNSZ_)
#define _WALIGNSZ_(x) _WALIGN_(sizeof(x))
#endif /* !defined(_WALIGNSZ_) */

#ifndef	UseStaticTemplates
#define	UseStaticTemplates	0
#endif	/* UseStaticTemplates */

#ifndef MIG_SERVER_ROUTINE
#define MIG_SERVER_ROUTINE
#endif

#ifndef	__DeclareRcvRpc
#define	__DeclareRcvRpc(_NUM_, _NAME_)
#endif	/* __DeclareRcvRpc */

#ifndef	__BeforeRcvRpc
#define	__BeforeRcvRpc(_NUM_, _NAME_)
#endif	/* __BeforeRcvRpc */

#ifndef	__AfterRcvRpc
#define	__AfterRcvRpc(_NUM_, _NAME_)
#endif	/* __AfterRcvRpc */

#ifndef	__DeclareRcvSimple
#define	__DeclareRcvSimple(_NUM_, _NAME_)
#endif	/* __DeclareRcvSimple */

#ifndef	__BeforeRcvSimple
#define	__BeforeRcvSimple(_NUM_, _NAME_)
#endif	/* __BeforeRcvSimple */

#ifndef	__AfterRcvSimple
#define	__AfterRcvSimple(_NUM_, _NAME_)
#endif	/* __AfterRcvSimple */

#define novalue void

#if	__MigKernelSpecificCode
#define msgh_request_port	msgh_remote_port
#define MACH_MSGH_BITS_REQUEST(bits)	MACH_MSGH_BITS_REMOTE(bits)
#define msgh_reply_port		msgh_local_port
#define MACH_MSGH_BITS_REPLY(bits)	MACH_MSGH_BITS_LOCAL(bits)
#else
#define msgh_request_port	msgh_local_port
#define MACH_MSGH_BITS_REQUEST(bits)	MACH_MSGH_BITS_LOCAL(bits)
#define msgh_reply_port		msgh_remote_port
#define MACH_MSGH_BITS_REPLY(bits)	MACH_MSGH_BITS_REMOTE(bits)
#endif /* __MigKernelSpecificCode */

#define MIG_RETURN_ERROR(X, code)	{\
				((mig_reply_error_t *)X)->RetCode = code;\
				((mig_reply_error_t *)X)->NDR = NDR_record;\
				return;\
				}

/* Forward Declarations */


mig_internal novalue _Xclock_set_time
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);

mig_internal novalue _Xclock_set_attributes
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP);


#if ( __MigTypeCheck )
#if __MIG_check__Request__clock_priv_subsystem__
#if !defined(__MIG_check__Request__clock_set_time_t__defined)
#define __MIG_check__Request__clock_set_time_t__defined

mig_internal kern_return_t __MIG_check__Request__clock_set_time_t(__attribute__((__unused__)) __Request__clock_set_time_t *In0P)
{

	typedef __Request__clock_set_time_t __Request;
#if	__MigTypeCheck
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (In0P->Head.msgh_size != (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__clock_set_time_t__defined) */
#endif /* __MIG_check__Request__clock_priv_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine clock_set_time */
mig_internal novalue _Xclock_set_time
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		mach_timespec_t new_time;
		mach_msg_trailer_t trailer;
	} Request __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	typedef __Request__clock_set_time_t __Request;
	typedef __Reply__clock_set_time_t Reply __attribute__((unused));

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__clock_set_time_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__clock_set_time_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(1200, "clock_set_time")
	__BeforeRcvRpc(1200, "clock_set_time")

#if	defined(__MIG_check__Request__clock_set_time_t__defined)
	check_result = __MIG_check__Request__clock_set_time_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__clock_set_time_t__defined) */

	OutP->RetCode = clock_set_time(convert_port_to_clock_ctrl(In0P->Head.msgh_request_port), In0P->new_time);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(1200, "clock_set_time")
}

#if ( __MigTypeCheck )
#if __MIG_check__Request__clock_priv_subsystem__
#if !defined(__MIG_check__Request__clock_set_attributes_t__defined)
#define __MIG_check__Request__clock_set_attributes_t__defined

mig_internal kern_return_t __MIG_check__Request__clock_set_attributes_t(__attribute__((__unused__)) __Request__clock_set_attributes_t *In0P)
{

	typedef __Request__clock_set_attributes_t __Request;
#if	__MigTypeCheck
	unsigned int msgh_size;
#endif	/* __MigTypeCheck */

#if	__MigTypeCheck
	msgh_size = In0P->Head.msgh_size;
	if ((In0P->Head.msgh_bits & MACH_MSGH_BITS_COMPLEX) ||
	    (msgh_size < (mach_msg_size_t)(sizeof(__Request) - 4)) ||  (msgh_size > (mach_msg_size_t)sizeof(__Request)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

#if defined(__NDR_convert__int_rep__Request__clock_set_attributes_t__clock_attrCnt__defined)
	if (In0P->NDR.int_rep != NDR_record.int_rep)
		__NDR_convert__int_rep__Request__clock_set_attributes_t__clock_attrCnt(&In0P->clock_attrCnt, In0P->NDR.int_rep);
#endif	/* __NDR_convert__int_rep__Request__clock_set_attributes_t__clock_attrCnt__defined */
#if	__MigTypeCheck
	if ( In0P->clock_attrCnt > 1 )
		return MIG_BAD_ARGUMENTS;
	if (((msgh_size - (mach_msg_size_t)(sizeof(__Request) - 4)) / 4 < In0P->clock_attrCnt) ||
	    (msgh_size != (mach_msg_size_t)(sizeof(__Request) - 4) + (4 * In0P->clock_attrCnt)))
		return MIG_BAD_ARGUMENTS;
#endif	/* __MigTypeCheck */

	return MACH_MSG_SUCCESS;
}
#endif /* !defined(__MIG_check__Request__clock_set_attributes_t__defined) */
#endif /* __MIG_check__Request__clock_priv_subsystem__ */
#endif /* ( __MigTypeCheck ) */


/* Routine clock_set_attributes */
mig_internal novalue _Xclock_set_attributes
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{

#ifdef  __MigPackStructs
#pragma pack(push, 4)
#endif
	typedef struct {
		mach_msg_header_t Head;
		NDR_record_t NDR;
		clock_flavor_t flavor;
		mach_msg_type_number_t clock_attrCnt;
		int clock_attr[1];
		mach_msg_trailer_t trailer;
	} Request __attribute__((unused));
#ifdef  __MigPackStructs
#pragma pack(pop)
#endif
	typedef __Request__clock_set_attributes_t __Request;
	typedef __Reply__clock_set_attributes_t Reply __attribute__((unused));

	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	Request *In0P = (Request *) InHeadP;
	Reply *OutP = (Reply *) OutHeadP;
#ifdef	__MIG_check__Request__clock_set_attributes_t__defined
	kern_return_t check_result;
#endif	/* __MIG_check__Request__clock_set_attributes_t__defined */

#if	__MigKernelSpecificCode
#else
#endif /* __MigKernelSpecificCode */
	__DeclareRcvRpc(1201, "clock_set_attributes")
	__BeforeRcvRpc(1201, "clock_set_attributes")

#if	defined(__MIG_check__Request__clock_set_attributes_t__defined)
	check_result = __MIG_check__Request__clock_set_attributes_t((__Request *)In0P);
	if (check_result != MACH_MSG_SUCCESS)
		{ MIG_RETURN_ERROR(OutP, check_result); }
#endif	/* defined(__MIG_check__Request__clock_set_attributes_t__defined) */

	OutP->RetCode = clock_set_attributes(convert_port_to_clock_ctrl(In0P->Head.msgh_request_port), In0P->flavor, In0P->clock_attr, In0P->clock_attrCnt);
#if	__MigKernelSpecificCode
#endif /* __MigKernelSpecificCode */

	OutP->NDR = NDR_record;


	__AfterRcvRpc(1201, "clock_set_attributes")
}



/* Description of this subsystem, for use in direct RPC */
const struct clock_priv_subsystem clock_priv_subsystem = {
	clock_priv_server_routine,
	1200,
	1202,
	(mach_msg_size_t)sizeof(union __ReplyUnion__clock_priv_subsystem),
	(vm_address_t)0,
	{
          { (mig_impl_routine_t) 0,
          (mig_stub_routine_t) _Xclock_set_time, 3, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__clock_set_time_t)},
          { (mig_impl_routine_t) 0,
          (mig_stub_routine_t) _Xclock_set_attributes, 4, 0, (routine_arg_descriptor_t)0, (mach_msg_size_t)sizeof(__Reply__clock_set_attributes_t)},
	}
};

mig_external boolean_t clock_priv_server
	(mach_msg_header_t *InHeadP, mach_msg_header_t *OutHeadP)
{
	/*
	 * typedef struct {
	 * 	mach_msg_header_t Head;
	 * 	NDR_record_t NDR;
	 * 	kern_return_t RetCode;
	 * } mig_reply_error_t;
	 */

	mig_routine_t routine;

	OutHeadP->msgh_bits = MACH_MSGH_BITS(MACH_MSGH_BITS_REPLY(InHeadP->msgh_bits), 0);
	OutHeadP->msgh_remote_port = InHeadP->msgh_reply_port;
	/* Minimal size: routine() will update it if different */
	OutHeadP->msgh_size = (mach_msg_size_t)sizeof(mig_reply_error_t);
	OutHeadP->msgh_local_port = MACH_PORT_NULL;
	OutHeadP->msgh_id = InHeadP->msgh_id + 100;
	OutHeadP->msgh_reserved = 0;

	if ((InHeadP->msgh_id > 1201) || (InHeadP->msgh_id < 1200) ||
	    ((routine = clock_priv_subsystem.routine[InHeadP->msgh_id - 1200].stub_routine) == 0)) {
		((mig_reply_error_t *)OutHeadP)->NDR = NDR_record;
		((mig_reply_error_t *)OutHeadP)->RetCode = MIG_BAD_ID;
		return FALSE;
	}
	(*routine) (InHeadP, OutHeadP);
	return TRUE;
}

mig_external mig_routine_t clock_priv_server_routine
	(mach_msg_header_t *InHeadP)
{
	int msgh_id;

	msgh_id = InHeadP->msgh_id - 1200;

	if ((msgh_id > 1) || (msgh_id < 0))
		return 0;

	return clock_priv_subsystem.routine[msgh_id].stub_routine;
}
