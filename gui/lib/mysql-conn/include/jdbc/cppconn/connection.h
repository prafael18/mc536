/*
 * Copyright (c) 2008, 2018, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0, as
 * published by the Free Software Foundation.
 *
 * This program is also distributed with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms,
 * as designated in a particular file or component or in included license
 * documentation.  The authors of MySQL hereby grant you an
 * additional permission to link the program and your derivative works
 * with the separately licensed software that they have included with
 * MySQL.
 *
 * Without limiting anything contained in the foregoing, this file,
 * which is part of MySQL Connector/C++, is also subject to the
 * Universal FOSS Exception, version 1.0, a copy of which can be found at
 * http://oss.oracle.com/licenses/universal-foss-exception.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA
 */



#ifndef _SQL_CONNECTION_H_
#define _SQL_CONNECTION_H_

#include <map>

#include "build_config.h"
#include "warning.h"
#include "sqlstring.h"
#include "variant.h"

namespace sql
{

typedef sql::Variant ConnectPropertyVal;

typedef std::map<sql::SQLString, ConnectPropertyVal> ConnectOptionsMap;

class DatabaseMetaData;
class PreparedStatement;
class Statement;
class Driver;

typedef enum transaction_isolation
{
  TRANSACTION_NONE= 0,
  TRANSACTION_READ_COMMITTED,
  TRANSACTION_READ_UNCOMMITTED,
  TRANSACTION_REPEATABLE_READ,
  TRANSACTION_SERIALIZABLE
} enum_transaction_isolation;

enum ssl_mode
{
  SSL_MODE_DISABLED= 1, SSL_MODE_PREFERRED, SSL_MODE_REQUIRED,
  SSL_MODE_VERIFY_CA, SSL_MODE_VERIFY_IDENTITY
};

class Savepoint
{
  /* Prevent use of these */
  Savepoint(const Savepoint &);
  void operator=(Savepoint &);
public:
  Savepoint() {};
  virtual ~Savepoint() {};
  virtual int getSavepointId() = 0;

  virtual sql::SQLString getSavepointName() = 0;
};


class CPPCONN_PUBLIC_FUNC Connection
{
  /* Prevent use of these */
  Connection(const Connection &);
  void operator=(Connection &);
public:

  Connection() {};

  virtual ~Connection() {};

  virtual void clearWarnings() = 0;

  virtual Statement *createStatement() = 0;

  virtual void close()  = 0;

  virtual void commit() = 0;

  virtual bool getAutoCommit() = 0;

  virtual sql::SQLString getCatalog() = 0;

  virtual Driver *getDriver() = 0;

  virtual sql::SQLString getSchema() = 0;

  virtual sql::SQLString getClientInfo() = 0;

  virtual void getClientOption(const sql::SQLString & optionName, void * optionValue) = 0;

  virtual sql::SQLString getClientOption(const sql::SQLString & optionName) = 0;

  virtual DatabaseMetaData * getMetaData() = 0;

  virtual enum_transaction_isolation getTransactionIsolation() = 0;

  virtual const SQLWarning * getWarnings() = 0;

  virtual bool isClosed() = 0;

  virtual bool isReadOnly() = 0;

  virtual bool isValid() = 0;

  virtual bool reconnect() = 0;

  virtual sql::SQLString nativeSQL(const sql::SQLString& sql) = 0;

  virtual PreparedStatement * prepareStatement(const sql::SQLString& sql) = 0;

  virtual PreparedStatement * prepareStatement(const sql::SQLString& sql, int autoGeneratedKeys) = 0;

  virtual PreparedStatement * prepareStatement(const sql::SQLString& sql, int* columnIndexes) = 0;

  virtual PreparedStatement * prepareStatement(const sql::SQLString& sql, int resultSetType, int resultSetConcurrency) = 0;

  virtual PreparedStatement * prepareStatement(const sql::SQLString& sql, int resultSetType, int resultSetConcurrency, int resultSetHoldability) = 0;

  virtual PreparedStatement * prepareStatement(const sql::SQLString& sql, sql::SQLString columnNames[]) = 0;

  virtual void releaseSavepoint(Savepoint * savepoint) = 0;

  virtual void rollback() = 0;

  virtual void rollback(Savepoint * savepoint) = 0;

  virtual void setAutoCommit(bool autoCommit) = 0;

  virtual void setCatalog(const sql::SQLString& catalog) = 0;

  virtual void setSchema(const sql::SQLString& catalog) = 0;

  virtual sql::Connection * setClientOption(const sql::SQLString & optionName, const void * optionValue) = 0;

  virtual sql::Connection * setClientOption(const sql::SQLString & optionName, const sql::SQLString & optionValue) = 0;

  virtual void setHoldability(int holdability) = 0;

  virtual void setReadOnly(bool readOnly) = 0;

  virtual Savepoint * setSavepoint() = 0;

  virtual Savepoint * setSavepoint(const sql::SQLString& name) = 0;

  virtual void setTransactionIsolation(enum_transaction_isolation level) = 0;

  /* virtual void setTypeMap(Map map) = 0; */
};

} /* namespace sql */

#endif // _SQL_CONNECTION_H_
