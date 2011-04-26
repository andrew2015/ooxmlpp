#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_CustomShow::CT_CustomShow(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	sldLst = NULL;
	if (attributes->getNamedItem(L"name")) {
		name = attributes->getNamedItem(L"name")->getNodeValue();
	}
	if (attributes->getNamedItem(L"id")) {
		id = attributes->getNamedItem(L"id")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
		if (wcscmp(nodelist->item(i)->getLocalName(),L"sldLst") == 0) {
			sldLst = new CT_SlideRelationshipList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_CustomShow::~CT_CustomShow() {
	delete extLst;
	delete sldLst;
}