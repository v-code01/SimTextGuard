#ifndef ESSAY_DETECTOR_H
#define ESSAY_DETECTOR_H

#include <string>
#include <vector>
#include <unordered_set>
#include <pybind11/embed.h>

namespace py = pybind11;

double jaccardSimilarity(const std::string& str1, const std::string& str2);

bool isEssayWrittenByAI(const std::string& essay, int numSimulations, double similarityThreshold);

#endif // ESSAY_DETECTOR_H
