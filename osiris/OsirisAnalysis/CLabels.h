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
*  FileName: CLabels.h
*  Author:   Douglas Hoffman
*
*/
#ifndef __C_LABELS_H__
#define __C_LABELS_H__

#include <wx/string.h>

class CLabels
{
public:
  static const wxChar * const NOTES;
  static const wxChar * const ADDITIONAL_NOTES;
  static const wxChar * const NOTES_AFTER_REVIEW;
private:
  CLabels() {} // prevent instantiation
};


#ifdef __C_LABELS_CPP__

const wxChar * const CLabels::NOTES(wxS("Review, Acceptance, and Notes"));
const wxChar * const CLabels::ADDITIONAL_NOTES(wxS("Enter additional notes"));
const wxChar * const CLabels::NOTES_AFTER_REVIEW(wxS( "\n\nNotes:\n"));

#endif
#endif
