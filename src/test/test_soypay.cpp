// Copyright (c) 2011-2013 The Bitcoin Core developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#define BOOST_TEST_MODULE SoyPay Test Suite



#include "main.h"
#include "txdb.h"
#include "ui_interface.h"
#include "util.h"

#include "db.h"
#include "wallet.h"


#include <boost/filesystem.hpp>
#include <boost/test/unit_test.hpp>

//CWallet* pwalletMain;


extern void noui_connect();

struct TestingSetup {
	TestingSetup() {
		{
//			vmscript test init
			if (pScriptDB)
				delete pScriptDB;
			pScriptDB = NULL;
			if (pScriptDBTip)
				delete pScriptDBTip;
			pScriptDBTip = NULL;
//
//			pScriptDB = new CScriptDB(1024*1024, false , false);
//			pScriptDBTip = new CScriptDBViewCache(*pScriptDB, false);
		}
		char *argv[] = {"progname", "-datadir=D:\\bitcoin"};
		int argc = sizeof(argv) / sizeof(char*);
		CBaseParams::IntialParams(argc, argv);
		SysCfg().InitalConfig();
	}
//    CCoinsViewDB *pcoinsdbview;
//    boost::filesystem::path pathTemp;
//    boost::thread_group threadGroup;
//
//    TestingSetup() {
//        fPrintToDebugLog = false; // don't want to write to debug.log file
//        noui_connect();

//        bitdb.MakeMock();

//        pathTemp = GetTempPath() / strprintf("test_bitcoin_%lu_%i", (unsigned long)GetTime(), (int)(GetRand(100000)));
//        boost::filesystem::create_directories(pathTemp);
//        mapArgs["-datadir"] = pathTemp.string();
//        pblocktree = new CBlockTreeDB(1 << 20, true);
//        pcoinsdbview = new CCoinsViewDB(1 << 23, true);
//        pcoinsTip = new CCoinsViewCache(*pcoinsdbview);
//        InitBlockIndex();

//        bool fFirstRun;
//        pwalletMain = new CWallet("wallet.dat");
//        pwalletMain->LoadWallet(fFirstRun);
//        RegisterWallet(pwalletMain);

//        nScriptCheckThreads = 3;
//        for (int i=0; i < nScriptCheckThreads-1; i++)
//            threadGroup.create_thread(&ThreadScriptCheck);
//        RegisterNodeSignals(GetNodeSignals());
//    }

    ~TestingSetup()
    {
//        threadGroup.interrupt_all();
//        threadGroup.join_all();
//        UnregisterNodeSignals(GetNodeSignals());

//        delete pwalletMain;
//        pwalletMain = NULL;

//       // delete pcoinsTip;
// //       delete pcoinsdbview;
//        delete pblocktree;

//        bitdb.Flush(true);

//        boost::filesystem::remove_all(pathTemp);
    }
};

BOOST_GLOBAL_FIXTURE(TestingSetup);

//void Shutdown(void* parg)
//{
//  exit(0);
//}
//
//void StartShutdown()
//{
//  exit(0);
//}

//bool ShutdownRequested()
//{
//  return false;
//}

