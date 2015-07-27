#pragma once

#include <string>

namespace OpenClouds
{

	class Exception
	{
		std::string errMessage;
		Exception* nestedException;
	public:
		Exception(const std::string errMessage)
		{
			this->errMessage = errMessage;
			nestedException = nullptr;
		}

		Exception(const std::string errMessage, Exception* nestedException)
		{
			this->errMessage = errMessage;
			this->nestedException = nestedException;
		}
		//display error and exit from the program
		void Handle();
	};
}
