#ifndef IMPORT_EXPORT
#include "model.h"
namespace import_export {
	extern Model model;
	void Importation(const char* modelObjPath, bool processCustom);
	void Exportation(Model myModel, char* myName);
	Model Tetraedro();
}
#endif
