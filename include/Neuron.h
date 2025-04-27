#pragma once
#include <functional>
#include <vector>

class Neuron {
public:
	int m_bias;												// Neuron bias
	std::function<double(double)> m_activationFunction;		// Neuron activation function
	std::vector<int> weights;								// Input weights

	Neuron(size_t inputCount) {
		this->m_bias = 0;
		weights.resize(inputCount);
	}
};
