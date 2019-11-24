#include <boost/python.hpp>

#include "TelloPro.h"
#include "takeoff.h"
#include "land.h"
#include "up.h"
#include "down.h"
#include "left.h"
#include "right.h"
#include "forward.h"
#include "back.h"
#include "cw.h"
#include "ccw.h"
#include "flip.h"

TelloPro* get_instance(boost::python::str _inst, int _value)
{
	std::string instance = boost::python::extract<std::string>(_inst);

	if(instance == "takeoff")
	   return new Takeoff;
	else if(instance == "land")
		return new Land;
	else if(instance == "up") // add
		return new Up(_value); // add
	else if(instance == "down") // add
		return new Down(_value); // add
	else if(instance == "left") // add
		return new Left(_value); // add
	else if(instance == "right") // add
		return new Right(_value); // add
	else if(instance == "forward") // add
		return new Forward(_value); // add
	else if(instance == "back") // add
		return new Back(_value); // add
	else if(instance == "cw") // add
		return new Cw(_value); // add
	else if(instance == "ccw") // add
		return new Ccw(_value); // add
	else if(instance == "flip") // add
		return new Flip(_value); // add
	else
		return nullptr;
}

BOOST_PYTHON_MODULE(TelloPro)
{
	def("get_instance", get_instance,
			      boost::python::return_value_policy<boost::python::manage_new_object>());
	
	boost::python::class_<TelloPro>("TelloPro")
		.def("get_command", &TelloPro::get_command)
		.def("get_delay", &TelloPro::get_delay);
}

