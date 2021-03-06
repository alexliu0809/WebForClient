//
//  PythonHelper.h
//  wxWidget
//
//  Created by Enze on 4/27/17.
//  Copyright © 2017 alexliu. All rights reserved.
//

#ifndef PythonHelper_h
#define PythonHelper_h
#include "Python.h"
#include "object.h"
#include <stdlib.h>
#include <wx/wx.h>

int RunPython(wxArrayString x_array, wxArrayString y_array);
void InitializePython();
void FinalizePython();

#endif /* PythonHelper_h */
