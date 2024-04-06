#include "GeometryException.h"
#include "Figure.h"
#include <stdexcept>

GeometryException::GeometryException(const string& msg) : domain_error(msg){}