/*---------------------------------------------------------------------------*\
 *                             Kabala Engine                                 *
 *                                                                           *
 *               Copyright (C) 2009-2010 by David Kabala                     *
 *                                                                           *
 *   authors:  David Kabala (djkabala@gmail.com)                             *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU General Public License as published            *
 * by the Free Software Foundation, version 3.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU General Public                 *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _KEPROJECTEVENTDETAILSFIELDS_H_
#define _KEPROJECTEVENTDETAILSFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>
#include "KEKabalaEngineDef.h"

#include <OpenSG/OSGFieldContainerFields.h>
#include <OpenSG/OSGPointerSField.h>
#include <OpenSG/OSGPointerMField.h>


OSG_BEGIN_NAMESPACE

class ProjectEventDetails;

OSG_GEN_CONTAINERPTR(ProjectEventDetails);

/*! \ingroup GrpKabalaEngineFieldTraits
    \ingroup GrpLibOSGKabalaEngine
 */
template <>
struct FieldTraits<ProjectEventDetails *> :
    public FieldTraitsFCPtrBase<ProjectEventDetails *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ProjectEventDetails *>  Self;

    enum                        { Convertible = NotConvertible };

    static KE_KABALAENGINE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFProjectEventDetailsPtr"; }
};

template<> inline
const Char8 *FieldTraits<ProjectEventDetails *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecProjectEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProjectEventDetails *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecProjectEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProjectEventDetails *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakProjectEventDetailsPtr"; 
}

template<> inline
const Char8 *FieldTraits<ProjectEventDetails *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdProjectEventDetailsPtr"; 
}



#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<ProjectEventDetails *,
                      RecordedRefCountPolicy  > SFRecProjectEventDetailsPtr;
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<ProjectEventDetails *,
                      UnrecordedRefCountPolicy> SFUnrecProjectEventDetailsPtr;
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<ProjectEventDetails *,
                      WeakRefCountPolicy      > SFWeakProjectEventDetailsPtr;
/*! \ingroup GrpKabalaEngineFieldSFields */
typedef PointerSField<ProjectEventDetails *,
                      NoRefCountPolicy        > SFUncountedProjectEventDetailsPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFRecProjectEventDetailsPtr : 
    public PointerSField<ProjectEventDetails *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFUnrecProjectEventDetailsPtr : 
    public PointerSField<ProjectEventDetails *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFWeakProjectEventDetailsPtr :
    public PointerSField<ProjectEventDetails *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpKabalaEngineFieldSFields \ingroup GrpLibOSGKabalaEngine */
struct SFUncountedProjectEventDetailsPtr :
    public PointerSField<ProjectEventDetails *,
                         NoRefCountPolicy> {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _KEPROJECTEVENTDETAILSFIELDS_H_ */
