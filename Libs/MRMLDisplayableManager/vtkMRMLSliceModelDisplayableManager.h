/*==============================================================================

  Program: 3D Slicer

  Copyright (c) 2010 Kitware Inc.

  See Doc/copyright/copyright.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Julien Finet, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

#ifndef __vtkMRMLSliceModelDisplayableManager_h
#define __vtkMRMLSliceModelDisplayableManager_h

// MRMLDisplayableManager includes
#include "vtkMRMLAbstractSliceViewDisplayableManager.h"
#include "vtkMRMLDisplayableManagerWin32Header.h"

class VTK_MRML_DISPLAYABLEMANAGER_EXPORT vtkMRMLSliceModelDisplayableManager :
  public vtkMRMLAbstractSliceViewDisplayableManager
{

public:
  static vtkMRMLSliceModelDisplayableManager* New();
  vtkTypeRevisionMacro(vtkMRMLSliceModelDisplayableManager,
                       vtkMRMLAbstractSliceViewDisplayableManager);
  void PrintSelf(ostream& os, vtkIndent indent);

  virtual void ProcessMRMLEvents(vtkObject *caller, unsigned long event, void *callData);

protected:

  vtkMRMLSliceModelDisplayableManager();
  virtual ~vtkMRMLSliceModelDisplayableManager();

  virtual void Create();

private:

  vtkMRMLSliceModelDisplayableManager(const vtkMRMLSliceModelDisplayableManager&);// Not implemented
  void operator=(const vtkMRMLSliceModelDisplayableManager&);                     // Not Implemented

  //BTX
  class vtkInternal;
  vtkInternal * Internal;
  //ETX
};

#endif