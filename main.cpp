#include <iostream>
#include "essay_detector.h"

int main() {
    // Example essay
    std::string essay = "The impact of artificial intelligence on society.";

    // Set parameters for simulations
    int numSimulations = 10; // Increase the number of simulations
    double similarityThreshold = 0.5; // Adjust the threshold

    // Check if the essay is likely written by AI
    bool isAIWritten = isEssayWrittenByAI(essay, numSimulations, similarityThreshold);

    // Display result
    std::cout << "Is the essay likely written by AI: " << (isAIWritten ? "Yes" : "No") << std::endl;

    return 0;
}
