/*
* ===========================================================================
*
*                            PUBLIC DOMAIN NOTICE
*               National Center for Biotechnology Information
*
*  This software/database is a "United States Government Work" under the
*  terms of the United States Copyright Act.  It was written as part of
*  the author's official duties as a United States Government employee and
*  thus cannot be copyrighted.  This software/database is freely available
*  to the public for use. The National Library of Medicine and the U.S.
*  Government have not placed any restriction on its use or reproduction.
*
*  Although all reasonable efforts have been taken to ensure the accuracy
*  and reliability of the software and data, the NLM and the U.S.
*  Government do not and cannot warrant the performance or results that
*  may be obtained by using this software or data. The NLM and the U.S.
*  Government disclaim all warranties, express or implied, including
*  warranties of performance, merchantability or fitness for any particular
*  purpose.
*
*  Please cite the author in any work or product based on this material.
*
* ===========================================================================
*
*  FileName: rgdirectory.h
*  Author:   Robert Goor
*
*/
//
// class RGDirectory, which encapsulates directory management
//

#ifndef _RGDIRECTORY_H_
#define _RGDIRECTORY_H_

#include "rgstring.h"

#ifdef _WINDOWS
typedef struct dirent_dir   DIR; /*!< dirent_dir is defined internally */
#else
#include <dirent.h>
#endif

class RGDirectory {

public:
	RGDirectory (const RGString& fullName);
	RGDirectory (const char* fullName);
	~RGDirectory ();

	Boolean IsValid () const;
	Boolean ReadNextDirectory (RGString& Name);
	Boolean FileIsDirectory (const RGString& Name);
	void RewindDirectory ();
	void CloseDirectory ();

	static Boolean MakeDirectory (const RGString& fullName);
	static Boolean MakeDirectory (const char* fullName);
#ifdef _WINDOWS
	static Boolean MoveDirectory (const RGString& oldName, const RGString& suffix, int MaxLevels);
	static Boolean MoveDirectory (const RGString& oldName, const RGString& newName);
#endif
	static Boolean FileOrDirectoryExists (const RGString& fullPathName);
  static Boolean FileOrDirectoryExists (const wchar_t *fullPathName);

protected:
	DIR* direct;
};


#endif  /*  _RGDIRECTORY_H_  */
