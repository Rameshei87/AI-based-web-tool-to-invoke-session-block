/*******************************************************************************
 * @file    SOContainer.cpp
 * @brief   Contains defination of SOContainer Class written in CommonDefs.h
 *			This Class holds the Shared Objects required accross the Component
 * @todo
 ******************************************************************************/

/******************************************************************************
 *   includes:
 *    - system includes
 *    - application includes
 *****************************************************************************/
#include <dlfcn.h>

#include <CommonDefs.h>

using namespace MSYS;

/******************************************************************************
 *   definitions:
 *    - macro definitions
 *    - type definitions
 *    - struct definitions
 *****************************************************************************/

/******************************************************************************
 *   constants & variables:
 *    - constants
 *    - external variables
 *    - global variables
 *    - static variables
 *****************************************************************************/

/******************************************************************************
 *   function prototypes:
 *****************************************************************************/

/******************************************************************************
 *   global functions:
 *****************************************************************************/

namespace MSYS
{
/******************************************************************************
 *   constructor/destructor:
 *****************************************************************************/

/******************************************************************************
 *   initializer/finalizer
 *****************************************************************************/

/******************************************************************************
 *   protected functions:
 *****************************************************************************/

/******************************************************************************
 *   private functions:
 *****************************************************************************/

/******************************************************************************
 *   public functions:
 *****************************************************************************/

/******************************************************************************
 *  Returns true is Shared Object name is found in _m_SOMap else returns false 
 *****************************************************************************/
	bool SOContainer :: m_IsObjectLoaded(std::string p_sLibraryName)
	{
		SOMap::iterator l_SOMapIter;
		
		for(l_SOMapIter = _m_SOMap.begin(); l_SOMapIter != _m_SOMap.end(); l_SOMapIter++)
		{
			if(l_SOMapIter->first == p_sLibraryName)
			{
				return true;
			}
		}
	
		return false;
	}

/******************************************************************************
 *  Returns _m_SOMap (Contains all loaded Shared Objects)
 *****************************************************************************/	
	SOMap SOContainer :: m_GetLoadedObjects()
	{
		return _m_SOMap;
	}
} // Namespace MSYS

