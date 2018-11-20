/* pmrfc3164.h
 * These are the definitions for the RFC3164 parser module.
 *
 * File begun on 2009-11-04 by RGerhards
 *
 * Copyright 2009 Rainer Gerhards and Adiscon GmbH.
 *
 * This file is part of rsyslog.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *       -or-
 *       see COPYING.ASL20 in the source distribution
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef	PMRFC3164_H_INCLUDED
#define	PMRFC3164_H_INCLUDED 1

/* prototypes */
rsRetVal modInitpmrfc3164(int iIFVersRequested __attribute__((unused)), int *ipIFVersProvided,
	rsRetVal (**pQueryEtryPt)(), rsRetVal (*pHostQueryEtryPt)(uchar*, rsRetVal (**)()), modInfo_t*);

#endif /* #ifndef PMRFC3164_H_INCLUDED */
/* vi:set ai:
 */
