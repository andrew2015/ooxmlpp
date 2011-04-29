#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOM.hpp>
#include <dml-main.h>

using namespace drawingml::main;

CT_GraphicalObjectFrameLocking::CT_GraphicalObjectFrameLocking() {
	extLst = NULL;
}

CT_GraphicalObjectFrameLocking::CT_GraphicalObjectFrameLocking(CT_GraphicalObjectFrameLocking &b) {
	extLst = b.extLst;
	noGrp = b.noGrp;
	noDrilldown = b.noDrilldown;
	noSelect = b.noSelect;
	noChangeAspect = b.noChangeAspect;
	noMove = b.noMove;
	noResize = b.noResize;
}

CT_GraphicalObjectFrameLocking::CT_GraphicalObjectFrameLocking(xercesc_3_1::DOMNodeList *nodelist, xercesc_3_1::DOMNamedNodeMap *attributes) {
	extLst = NULL;
	if (attributes->getNamedItem(L"noGrp")) {
		noGrp = attributes->getNamedItem(L"noGrp")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noDrilldown")) {
		noDrilldown = attributes->getNamedItem(L"noDrilldown")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noSelect")) {
		noSelect = attributes->getNamedItem(L"noSelect")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noChangeAspect")) {
		noChangeAspect = attributes->getNamedItem(L"noChangeAspect")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noMove")) {
		noMove = attributes->getNamedItem(L"noMove")->getNodeValue();
	}
	if (attributes->getNamedItem(L"noResize")) {
		noResize = attributes->getNamedItem(L"noResize")->getNodeValue();
	}
	for (int i = 0; i < nodelist->getLength();++i) {
		if (wcscmp(nodelist->item(i)->getLocalName(),L"extLst") == 0) {
			extLst.reset(new CT_OfficeArtExtensionList(nodelist->item(i)->getChildNodes(),nodelist->item(i)->getAttributes()));
		}
	}
}

CT_GraphicalObjectFrameLocking& CT_GraphicalObjectFrameLocking::operator=(CT_GraphicalObjectFrameLocking &b) {
	extLst = b.extLst;
	noGrp = b.noGrp;
	noDrilldown = b.noDrilldown;
	noSelect = b.noSelect;
	noChangeAspect = b.noChangeAspect;
	noMove = b.noMove;
	noResize = b.noResize;
	return *this;
}

CT_GraphicalObjectFrameLocking::~CT_GraphicalObjectFrameLocking() {
}

std::wstring CT_GraphicalObjectFrameLocking::Xml() {
	return L"";
}
