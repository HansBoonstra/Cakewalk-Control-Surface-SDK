#include "stdafx.h"
#include "VS100.h"


/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
// This file has implementations of the the public "UI" functions that the
// prop page needs
/////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// Set a time format for the time display perhaps
void CVS100::SetTimeFormat( MFX_TIME_FORMAT fmt )
{
	m_mfxfPrimary = fmt; 
}

