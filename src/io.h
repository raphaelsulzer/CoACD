#pragma once
#include <algorithm>
#include <assert.h>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <vector>
#include <cstdlib>
#include <time.h>
#include <assert.h>
#include <algorithm>
#include <set>
#include <map>
#include <unordered_map>

#include "shape.h"
#include "model_obj.h"

namespace coacd
{

    //////////////// IO ////////////////
    void SaveConfig(Params params);
    void SaveOBJ(const string &filename, vector<Model> parts);
    void SavePLY(const string &filename, vector<Model> parts);
    void SaveOBJs(const string &foldername, const string &filename, vector<Model> parts);
    bool WriteVRML(ofstream &fout, Model mesh);
    void SaveVRML(const string &fileName, vector<Model>& meshes);
}
