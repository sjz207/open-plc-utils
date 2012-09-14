/*====================================================================*
 *
 *   if.h - substitute net/if.h for systems without one;
 *
 *--------------------------------------------------------------------*/

#ifndef IF_HEADER
#define IF_HEADER

/*====================================================================*
 *   constants;
 *--------------------------------------------------------------------*/

#if defined (WIN32)
#define IF_NAMESIZE 128
#endif

/*====================================================================*
 *   end;
 *--------------------------------------------------------------------*/

#endif
