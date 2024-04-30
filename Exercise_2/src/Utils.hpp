#pragma once

#include <iostream>
#include "PolygonalMesh.hpp"

using namespace std;

namespace PolygonalLibrary
{
/// Import the Polygonal mesh and test if the mesh is correct
bool ImportMesh(const string &filepath, PolygonalMesh& mesh);

/// Import the Cell0D properties from Cell0Ds.csv file
bool ImportCell0Ds(const string &filename, PolygonalMesh& mesh);

/// Import the Cell1D properties from Cell1Ds.csv file
bool ImportCell1Ds(const string &filename, PolygonalMesh& mesh);

/// Import the Cell2D properties from Cell2Ds.csv file
bool ImportCell2Ds(const string &filename, PolygonalMesh& mesh);

/// Check if the length of each edge is different from zero
bool CheckNonZeroSideLengths(const PolygonalMesh& mesh);

/// Check if the area of each polygon (computed using Gauss's area formula) is different from zero
bool CheckNonZeroArea(const PolygonalMesh& mesh);
}

