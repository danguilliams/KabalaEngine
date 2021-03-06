/*---------------------------------------------------------------------------*\
 *                             Kabala Engine                                 *
 *                                                                           *
 *                                                                           *
 *   contact: djkabala@gmail.com                                             *
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


#ifndef _KEBACKGROUNDSLISTCOMPONENTGENERATORFIELDS_H_
#define _KEBACKGROUNDSLISTCOMPONENTGENERATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include <OpenSG/OSGConfig.h>

#include <OpenSG/OSGFieldContainerPtr.h>
#include <OpenSG/OSGNodeCoreFieldDataType.h>
#include "KEKabalaEngineDef.h"

#include <OpenSG/UserInterface/OSGListComponentGeneratorFields.h>

OSG_BEGIN_NAMESPACE

class BackgroundsListComponentGenerator;

#if !defined(OSG_DO_DOC)   // created as a dummy class, remove to prevent doubles
//! BackgroundsListComponentGeneratorPtr

typedef FCPtr<ListComponentGeneratorPtr, BackgroundsListComponentGenerator> BackgroundsListComponentGeneratorPtr;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpKabalaEngineFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldDataTraits<BackgroundsListComponentGeneratorPtr> : 
    public FieldTraitsRecurseMapper<BackgroundsListComponentGeneratorPtr, true>
{
    static DataType             _type;                       

    enum                        { StringConvertable = 0x00 };
    enum                        { bHasParent        = 0x01 };

    static DataType   &getType (void) { return _type;        }

    static const char *getSName(void) { return "SFBackgroundsListComponentGeneratorPtr"; }
    static const char *getMName(void) { return "MFBackgroundsListComponentGeneratorPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsRecurseMapper<BackgroundsListComponentGeneratorPtr, true>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpKabalaEngineFieldSingle */

typedef SField<BackgroundsListComponentGeneratorPtr> SFBackgroundsListComponentGeneratorPtr;
#endif

#ifndef KE_COMPILEBACKGROUNDSLISTCOMPONENTGENERATORINST
OSG_DLLEXPORT_DECL1(SField, BackgroundsListComponentGeneratorPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpKabalaEngineFieldMulti */

typedef MField<BackgroundsListComponentGeneratorPtr> MFBackgroundsListComponentGeneratorPtr;
#endif

#ifndef KE_COMPILEBACKGROUNDSLISTCOMPONENTGENERATORINST
OSG_DLLEXPORT_DECL1(MField, BackgroundsListComponentGeneratorPtr, KE_KABALAENGINELIB_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#endif /* _KEBACKGROUNDSLISTCOMPONENTGENERATORFIELDS_H_ */
