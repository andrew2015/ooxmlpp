#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_SlideMasterIdListEntry::CT_SlideMasterIdListEntry(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	if (attributes->getNamedItem(L"id")) {
		id = attributes->getNamedItem(L"id")->getNodeValue();
	}
	if (attributes->getNamedItem(L"rId")) {
		rId = attributes->getNamedItem(L"rId")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_SlideMasterIdListEntry::~CT_SlideMasterIdListEntry() {
	delete extLst;
}