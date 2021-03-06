/*****************************************************************************
* Copyright (c) 2016 Jiocloud.com, Inc. or its affiliates.  All Rights Reserved
*
* Permission is hereby granted, free of charge, to any person obtaining a
* copy of this software and associated documentation files (the
* "Software"), to deal in the Software without restriction, including
* without limitation the rights to use, copy, modify, merge, publish, dis-
* tribute, sublicense, and/or sell copies of the Software, and to permit
* persons to whom the Software is furnished to do so, subject to the fol-
* lowing conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABIL-
* ITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT
* SHALL THE AUTHOR BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
* IN THE SOFTWARE.
******************************************************************************/
#ifndef INSTANCE_TYPE_H
#define INSTANCE_TYPE_H
#include <string>
using namespace std;

namespace model
{	///Class to handle Instance Type

	class instance_type
	{
	private:
		unsigned vcpus;
		float ram;
		string id;

	public:
		///Constructor
		instance_type(unsigned vcpus_, float ram_, const string& id_):
      vcpus(vcpus_),
			ram(ram_),
			id(id_)
    {}

		instance_type(){}
		///Getter for the VC Pus of the Instance
		/**
			\return const float
		*/
		unsigned get_vcpus() const
		{
			return vcpus;
		}
		///Getter for the Ram of the Instance
		/**
			\return const float
		*/
		float get_ram() const
		{
			return ram;
		}
		///Getter for the ID of the Instance
		/**
			\return const string
		*/
		const string& get_id() const
		{
			return id;
		}
	};
}
#endif
