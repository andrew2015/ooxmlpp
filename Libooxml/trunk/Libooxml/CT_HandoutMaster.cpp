#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_HandoutMaster::CT_HandoutMaster(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	cSld = NULL;
	extLst = NULL;
	hf = NULL;
	clrMap = NULL;
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"cSld") == 0) {
			cSld = new CT_CommonSlideData(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"hf") == 0) {
			hf = new CT_HeaderFooter(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"clrMap") == 0) {
			clrMap = new drawingml::main::CT_ColorMapping(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_HandoutMaster::~CT_HandoutMaster() {
	delete cSld;
	delete extLst;
	delete hf;
	delete clrMap;
}