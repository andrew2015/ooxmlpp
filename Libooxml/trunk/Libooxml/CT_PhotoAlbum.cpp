#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include "pml.h"


CT_PhotoAlbum::CT_PhotoAlbum(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	if (attributes->getNamedItem(L"frame")) {
		frame = attributes->getNamedItem(L"frame")->getNodeValue();
	}
	if (attributes->getNamedItem(L"layout")) {
		layout = attributes->getNamedItem(L"layout")->getNodeValue();
	}
	if (attributes->getNamedItem(L"bw")) {
		bw = attributes->getNamedItem(L"bw")->getNodeValue();
	}
	if (attributes->getNamedItem(L"showCaptions")) {
		showCaptions = attributes->getNamedItem(L"showCaptions")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst = new CT_ExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes());
		}
	}
}

CT_PhotoAlbum::~CT_PhotoAlbum() {
	delete extLst;
}